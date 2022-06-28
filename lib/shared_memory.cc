#pragma once
#include <node.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <iostream>

#define BUF_SIZE 256

using namespace std;
using namespace v8;

void Getch(const FunctionCallbackInfo<Value>& args) {  
  _getch();
}
void CreateMemory(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  Local<Context> context = isolate->GetCurrentContext();
  Local<String> keyString= Local<String>::Cast(args[0]);
  TCHAR* key;
  (*keyString)->WriteUtf8(isolate, key);  
  HANDLE handle = CreateFileMapping(
        INVALID_HANDLE_VALUE,    // use paging file
        NULL,                    // default security
        PAGE_READWRITE,          // read/write access
        0,                       // maximum object size (high-order DWORD)
        BUF_SIZE,                // maximum object size (low-order DWORD)
        key);                 // name of mapping object
  if(handle ==NULL) {
    isolate->ThrowException(String::NewFromUtf8(isolate, "Failed to open file mapping object").ToLocalChecked());
  }
  LPCTSTR pMemory = (LPTSTR)MapViewOfFile(handle,   // handle to map object
        FILE_MAP_ALL_ACCESS, // read/write permission
        0,
        0,
        BUF_SIZE);
  if (pMemory == NULL)
  {
      CloseHandle(handle); 
      isolate->ThrowException(String::NewFromUtf8(isolate, "Failed to open Shared Memory").ToLocalChecked());       
  }
  args.GetReturnValue().Set(BigInt::New(isolate,(unsigned __int64)pMemory));
}
void ConnectMemory(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  Local<Context> context = isolate->GetCurrentContext();
  Local<String> keyString= Local<String>::Cast(args[0]);
  TCHAR* key;
  (*keyString)->WriteUtf8(isolate, key);  
  HANDLE handle = OpenFileMapping(
        FILE_MAP_ALL_ACCESS,   // read/write access
        FALSE,                 // do not inherit the name
        key);       
  if(handle ==NULL) {
    isolate->ThrowException(String::NewFromUtf8(isolate, "Failed to Connect file mapping object").ToLocalChecked());
  }
  LPCTSTR pMemory = (LPTSTR)MapViewOfFile(handle,   // handle to map object
        FILE_MAP_ALL_ACCESS, // read/write permission
        0,
        0,
        BUF_SIZE);
  if (pMemory == NULL)
  {
      CloseHandle(handle); 
      isolate->ThrowException(String::NewFromUtf8(isolate, "Failed to Connect Shared Memory").ToLocalChecked());       
  }
  args.GetReturnValue().Set(BigInt::New(isolate,(unsigned __int64)pMemory));
}
void WriteStringToMemory(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  Local<Context> context = isolate->GetCurrentContext();

  unsigned __int64 address=args[0].As<BigInt>()->Uint64Value();
  LPCTSTR pMemory=(LPCTSTR) address;

  Local<String> messageString= Local<String>::Cast(args[1]);
  TCHAR* message;
  (*messageString)->WriteUtf8(isolate, message);
  CopyMemory((PVOID)pMemory, message, (_tcslen(message) * sizeof(TCHAR)));  
}
void ReadStringFromMemory(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  Local<Context> context = isolate->GetCurrentContext();

  unsigned __int64 address=args[0].As<BigInt>()->Uint64Value();
  LPCTSTR pMemory=(LPCTSTR) address;
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, pMemory).ToLocalChecked());   
}
void Init(Local<Object> exports) {  
  NODE_SET_METHOD(exports, "getch", Getch);    
  NODE_SET_METHOD(exports, "createMemory", CreateMemory);    
  NODE_SET_METHOD(exports, "connectMemory", ConnectMemory);    
  NODE_SET_METHOD(exports, "writeStringToMemory", WriteStringToMemory);    
  NODE_SET_METHOD(exports, "readStringFromMemory", ReadStringFromMemory);    
}
NODE_MODULE(NODE_GYP_MODULE_NAME, Init)