#pragma once
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <iostream>
using namespace std;
using namespace v8;
struct StructureArray01
{
    unsigned int ulong_msCounter;
    signed char byte_CurentTime24[24];
    unsigned int ulong_SorterEncoder;
    unsigned int ulong_SorterEncoder2;
    unsigned int ulong_SorterEncoder3;
    unsigned short uint_PLCStatus;
    unsigned short uint_Data[20];
    unsigned short uint_StationA_mode;
    unsigned int ulong_drive_state_stationA;
    unsigned int ulong_ElevatorOperationalStationA;
    signed int long_position_10thmm_stationA;
    unsigned short uint_StationB_mode;
    unsigned int ulong_drive_state_stationB;
    unsigned int ulong_ElevatorOperationalStationB;
    signed int long_position_10thmm_stationB;
    unsigned short uint_BarcodeCounter;
    unsigned short uint_BarcodeMsgLength;
    signed char byte_BarcodeMsg[256];
    unsigned short uint_DestinationCounter;
    unsigned short uint_DestinationSequentialNumber;
    unsigned short uint_DestinationCounterLength;
    signed char byte_Destination[8];
    unsigned short uint_AlternateDestinationLength;
    signed char byte_AlternateDestination[8];
    unsigned short uint_ServerReceivedMsgCounter;
    unsigned short uint_ServerReceivedMsgLength;
    signed char byte_ServerReceivedMsg[128];
    unsigned short uint_ScanNotificationReadCounter;
    unsigned short uint_DivertNotificationReadCounter;
    unsigned short uint_Cad99AnalogMsgReadCounter;
    unsigned short uint_DeviceConnected[4];


};

StructureArray01 getArray01() {

    StructureArray01 dataArray01;

    dataArray01.ulong_msCounter = 1329773;
    signed char temp_byte_CurentTime24[24] = {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0
    };
    memcpy(dataArray01.byte_CurentTime24, temp_byte_CurentTime24, 24);
    dataArray01.ulong_SorterEncoder = 961088068;
    dataArray01.ulong_SorterEncoder2 = 961076097;
    dataArray01.ulong_SorterEncoder3 = 961088034;
    dataArray01.uint_PLCStatus = 0;
    unsigned short temp_uint_Data[20] = {
        6176, 49183, 0, 137, 5216,
        0, 4192, 0, 0, 3855,
        4, 4, 4, 4, 4,
        4, 4, 20, 0, 0
    };
    memcpy(dataArray01.uint_Data, temp_uint_Data, sizeof(unsigned short) * 20);
    dataArray01.uint_StationA_mode = 0;
    dataArray01.ulong_drive_state_stationA = 3;
    dataArray01.ulong_ElevatorOperationalStationA = 0;
    dataArray01.long_position_10thmm_stationA = 12;
    dataArray01.uint_StationB_mode = 0;
    dataArray01.ulong_drive_state_stationB = 999;
    dataArray01.ulong_ElevatorOperationalStationB = 6;
    dataArray01.long_position_10thmm_stationB = 79005;
    dataArray01.uint_BarcodeCounter = 48315;
    dataArray01.uint_BarcodeMsgLength = 18;

    signed char temp_byte_BarcodeMsg[256] = {
        60, 83, 84, 102, 122, 104, 109, 103, 66, 57, 75, 95,
        48, 48, 49, 95, 118, 62, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0
    };
    memcpy(dataArray01.byte_BarcodeMsg, temp_byte_BarcodeMsg, 256);
    
    dataArray01.uint_DestinationCounter = 43898;
    dataArray01.uint_DestinationSequentialNumber = 1879;
    dataArray01.uint_DestinationCounterLength = 5;
    signed char temp_byte_Destination[8] = {
        83, 48, 50, 48,
        57, 49, 0, 0
    };
    memcpy(dataArray01.byte_Destination, temp_byte_Destination, 8);
    
    dataArray01.uint_AlternateDestinationLength = 0;
    signed char temp_byte_AlternateDestination[8] = {
         83, 48, 50, 49,
         55, 0, 0, 0
    };
    memcpy(dataArray01.byte_AlternateDestination, temp_byte_AlternateDestination, 8);
    
    dataArray01.uint_ServerReceivedMsgCounter = 0;
    dataArray01.uint_ServerReceivedMsgLength = 0;
    signed char temp_byte_ServerReceivedMsg[128] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0
    };
    memcpy(dataArray01.byte_ServerReceivedMsg, temp_byte_ServerReceivedMsg, 128);
    dataArray01.uint_ScanNotificationReadCounter = 35599;
    dataArray01.uint_DivertNotificationReadCounter = 35594;
    dataArray01.uint_Cad99AnalogMsgReadCounter = 9322;

    unsigned short temp_uint_DeviceConnected[4] = {
        8193, 1, 0, 0
    };
    memcpy(dataArray01.uint_DeviceConnected, temp_uint_DeviceConnected, sizeof(unsigned short) * 4);
    return dataArray01;


}
ostream& operator<<(ostream& os, const StructureArray01 da) {
    os << "{" << endl;
    os << " ulong_msCounter: " << da.ulong_msCounter << endl;
    os  <<  "byte_CurentTime24: ";
    for (int i = 0; i < 24; i++)
        printf("%d ", da.byte_CurentTime24[i]);
    os << endl;
    //os << " byte_CurentTime24: " << da.byte_CurentTime24 << endl;
    os << " ulong_SorterEncoder: " << da.ulong_SorterEncoder << endl;
    os << " ulong_SorterEncoder2: " << da.ulong_SorterEncoder2 << endl;
    os << " ulong_SorterEncoder3: " << da.ulong_SorterEncoder3 << endl;
    os << " uint_PLCStatus: " << da.uint_PLCStatus << endl;
    os << " uint_Data: ";
    for (int i = 0; i < 20; i++)
        printf("%d ", da.uint_Data[i]);
    os << endl;    
    os << " uint_StationA_mode: " << da.uint_StationA_mode << endl;
    os << " ulong_drive_state_stationA: " << da.ulong_drive_state_stationA << endl;
    os << " ulong_ElevatorOperationalStationA: " << da.ulong_ElevatorOperationalStationA << endl;
    os << " long_position_10thmm_stationA: " << da.long_position_10thmm_stationA << endl;
    os << " uint_StationB_mode: " << da.uint_StationB_mode << endl;
    os << " ulong_drive_state_stationB: " << da.ulong_drive_state_stationB << endl;
    os << " ulong_ElevatorOperationalStationB: " << da.ulong_ElevatorOperationalStationB << endl;
    os << " long_position_10thmm_stationB: " << da.long_position_10thmm_stationB << endl;
    os << " uint_BarcodeCounter: " << da.uint_BarcodeCounter << endl;
    os << " uint_BarcodeMsgLength: " << da.uint_BarcodeMsgLength << endl;
    os  <<  "byte_BarcodeMsg: ";
    for (int i = 0; i < 256; i++)
        printf("%d " ,da.byte_BarcodeMsg[i]);
    os << endl;
    //os << " byte_BarcodeMsg: " << da.byte_BarcodeMsg << endl;
    os << " uint_DestinationCounter: " << da.uint_DestinationCounter << endl;
    os << " uint_DestinationSequentialNumber: " << da.uint_DestinationSequentialNumber << endl;
    os << " uint_DestinationCounterLength: " << da.uint_DestinationCounterLength << endl;
    os  <<  "byte_Destination: ";for (int i = 0; i < 8; i++)
        printf("%d " ,da.byte_Destination[i]);
    os << endl;
    //os << " byte_Destination: " << da.byte_Destination << endl;
    os << " uint_AlternateDestinationLength: " << da.uint_AlternateDestinationLength << endl;
    os  <<  "byte_AlternateDestination: ";
    for (int i = 0; i < 8; i++)
        printf("%d " ,da.byte_AlternateDestination[i]);
    os << endl;
    //os << " byte_AlternateDestination: " << da.byte_AlternateDestination << endl;
    os << " uint_ServerReceivedMsgCounter: " << da.uint_ServerReceivedMsgCounter << endl;
    os << " uint_ServerReceivedMsgLength: " << da.uint_ServerReceivedMsgLength << endl;
    os  <<  "byte_ServerReceivedMsg: ";
    for (int i = 0; i < 128; i++)
        printf("%d " ,da.byte_ServerReceivedMsg[i]);
    os << endl;
    //os << " byte_ServerReceivedMsg: " << da.byte_ServerReceivedMsg << endl;
    os << " uint_ScanNotificationReadCounter: " << da.uint_ScanNotificationReadCounter << endl;
    os << " uint_DivertNotificationReadCounter: " << da.uint_DivertNotificationReadCounter << endl;
    os << " uint_Cad99AnalogMsgReadCounter: " << da.uint_Cad99AnalogMsgReadCounter << endl;
    os  <<  "uint_DeviceConnected: ";
    for (int i = 0; i < 4; i++)
        printf("%d " ,da.uint_DeviceConnected[i]);
    os << endl;
    //os << " uint_DeviceConnected: " << da.uint_DeviceConnected << endl;
    os << "}" << endl;
    return os;
}
StructureArray01 getStructureArray01FromObject(Isolate* isolate,Local<Context> context,Local<Object> obj){
    StructureArray01 array_01;
    array_01.ulong_msCounter=obj->Get(context, String::NewFromUtf8(isolate,"ulong_msCounter").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    Local<Array> byte_CurentTime24=Local<Array>::Cast(obj->Get(context, String::NewFromUtf8(isolate,"byte_CurentTime24").ToLocalChecked()).ToLocalChecked());
    for(int i=0;i<24;i++){
        array_01.byte_CurentTime24[i]=byte_CurentTime24->Get(context, i).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
        }
    //array_01.byte_CurentTime24=obj->Get(context, String::NewFromUtf8(isolate,"byte_CurentTime24").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.ulong_SorterEncoder=obj->Get(context, String::NewFromUtf8(isolate,"ulong_SorterEncoder").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.ulong_SorterEncoder2=obj->Get(context, String::NewFromUtf8(isolate,"ulong_SorterEncoder2").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.ulong_SorterEncoder3=obj->Get(context, String::NewFromUtf8(isolate,"ulong_SorterEncoder3").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_PLCStatus=obj->Get(context, String::NewFromUtf8(isolate,"uint_PLCStatus").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();

    Local<Array> uint_Data=Local<Array>::Cast(obj->Get(context, String::NewFromUtf8(isolate,"uint_Data").ToLocalChecked()).ToLocalChecked());
    for(int i=0;i<20;i++){
        array_01.uint_Data[i]=uint_Data->Get(context, i).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
        }
    //array_01.uint_Data=obj->Get(context, String::NewFromUtf8(isolate,"uint_Data").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_StationA_mode=obj->Get(context, String::NewFromUtf8(isolate,"uint_StationA_mode").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.ulong_drive_state_stationA=obj->Get(context, String::NewFromUtf8(isolate,"ulong_drive_state_stationA").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.ulong_ElevatorOperationalStationA=obj->Get(context, String::NewFromUtf8(isolate,"ulong_ElevatorOperationalStationA").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.long_position_10thmm_stationA=obj->Get(context, String::NewFromUtf8(isolate,"long_position_10thmm_stationA").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_StationB_mode=obj->Get(context, String::NewFromUtf8(isolate,"uint_StationB_mode").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.ulong_drive_state_stationB=obj->Get(context, String::NewFromUtf8(isolate,"ulong_drive_state_stationB").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.ulong_ElevatorOperationalStationB=obj->Get(context, String::NewFromUtf8(isolate,"ulong_ElevatorOperationalStationB").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.long_position_10thmm_stationB=obj->Get(context, String::NewFromUtf8(isolate,"long_position_10thmm_stationB").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_BarcodeCounter=obj->Get(context, String::NewFromUtf8(isolate,"uint_BarcodeCounter").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_BarcodeMsgLength=obj->Get(context, String::NewFromUtf8(isolate,"uint_BarcodeMsgLength").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();

    Local<Array> byte_BarcodeMsg=Local<Array>::Cast(obj->Get(context, String::NewFromUtf8(isolate,"byte_BarcodeMsg").ToLocalChecked()).ToLocalChecked());
    for(int i=0;i<256;i++){
        array_01.byte_BarcodeMsg[i]=byte_BarcodeMsg->Get(context, i).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
        }
    //array_01.byte_BarcodeMsg=obj->Get(context, String::NewFromUtf8(isolate,"byte_BarcodeMsg").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_DestinationCounter=obj->Get(context, String::NewFromUtf8(isolate,"uint_DestinationCounter").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_DestinationSequentialNumber=obj->Get(context, String::NewFromUtf8(isolate,"uint_DestinationSequentialNumber").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_DestinationCounterLength=obj->Get(context, String::NewFromUtf8(isolate,"uint_DestinationCounterLength").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();

    Local<Array> byte_Destination=Local<Array>::Cast(obj->Get(context, String::NewFromUtf8(isolate,"byte_Destination").ToLocalChecked()).ToLocalChecked());
    for(int i=0;i<8;i++){
        array_01.byte_Destination[i]=byte_Destination->Get(context, i).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
        }
    //array_01.byte_Destination=obj->Get(context, String::NewFromUtf8(isolate,"byte_Destination").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_AlternateDestinationLength=obj->Get(context, String::NewFromUtf8(isolate,"uint_AlternateDestinationLength").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();

    Local<Array> byte_AlternateDestination=Local<Array>::Cast(obj->Get(context, String::NewFromUtf8(isolate,"byte_AlternateDestination").ToLocalChecked()).ToLocalChecked());
    for(int i=0;i<8;i++){
        array_01.byte_AlternateDestination[i]=byte_AlternateDestination->Get(context, i).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
        }
    //array_01.byte_AlternateDestination=obj->Get(context, String::NewFromUtf8(isolate,"byte_AlternateDestination").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_ServerReceivedMsgCounter=obj->Get(context, String::NewFromUtf8(isolate,"uint_ServerReceivedMsgCounter").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_ServerReceivedMsgLength=obj->Get(context, String::NewFromUtf8(isolate,"uint_ServerReceivedMsgLength").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();

    Local<Array> byte_ServerReceivedMsg=Local<Array>::Cast(obj->Get(context, String::NewFromUtf8(isolate,"byte_ServerReceivedMsg").ToLocalChecked()).ToLocalChecked());
    for(int i=0;i<128;i++){
        array_01.byte_ServerReceivedMsg[i]=byte_ServerReceivedMsg->Get(context, i).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
        }
    //array_01.byte_ServerReceivedMsg=obj->Get(context, String::NewFromUtf8(isolate,"byte_ServerReceivedMsg").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_ScanNotificationReadCounter=obj->Get(context, String::NewFromUtf8(isolate,"uint_ScanNotificationReadCounter").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_DivertNotificationReadCounter=obj->Get(context, String::NewFromUtf8(isolate,"uint_DivertNotificationReadCounter").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    array_01.uint_Cad99AnalogMsgReadCounter=obj->Get(context, String::NewFromUtf8(isolate,"uint_Cad99AnalogMsgReadCounter").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();

    Local<Array> uint_DeviceConnected=Local<Array>::Cast(obj->Get(context, String::NewFromUtf8(isolate,"uint_DeviceConnected").ToLocalChecked()).ToLocalChecked());
    for(int i=0;i<4;i++){
        array_01.uint_DeviceConnected[i]=uint_DeviceConnected->Get(context, i).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
        }
    //array_01.uint_DeviceConnected=obj->Get(context, String::NewFromUtf8(isolate,"uint_DeviceConnected").ToLocalChecked()).ToLocalChecked()->ToNumber(context).ToLocalChecked()->Value();
    return array_01;

}
//
//{
//ulong_msCounter: 435867839,
//byte_CurentTime24 : [
//    0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0
//] ,
//ulong_SorterEncoder : 961088068,
//ulong_SorterEncoder2 : 961076097,
//ulong_SorterEncoder3 : 961088034,
//uint_PLCStatus : 0,
//uint_Data : [
//    6176, 49183, 0, 137, 5216,
//        0, 4192, 0, 0, 3855,
//        4, 4, 4, 4, 4,
//        4, 4, 20, 0, 0
//] ,
//uint_StationA_mode : 0,
//ulong_drive_state_stationA : 3,
//ulong_ElevatorOperationalStationA : 0,
//long_position_10thmm_stationA : 12,
//uint_StationB_mode : 0,
//ulong_drive_state_stationB : 999,
//ulong_ElevatorOperationalStationB : 6,
//long_position_10thmm_stationB : 79005,
//uint_BarcodeCounter : 48315,
//uint_BarcodeMsgLength : 18,
//byte_BarcodeMsg : [
//    60, 83, 84, 102, 122, 104, 109, 103, 66, 57, 75, 95,
//        48, 48, 49, 95, 118, 62, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0,
//        ... 156 more items
//],
//uint_DestinationCounter: 43898,
//uint_DestinationSequentialNumber : 1879,
//uint_DestinationCounterLength : 5,
//byte_Destination : [
//    83, 48, 50, 48,
//        57, 49, 0, 0
//] ,
//uint_AlternateDestinationLength : 0,
//byte_AlternateDestination : [
//    83, 48, 50, 49,
//        55, 0, 0, 0
//] ,
//uint_ServerReceivedMsgCounter : 0,
//uint_ServerReceivedMsgLength : 0,
//byte_ServerReceivedMsg : [
//    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//        0, 0, 0, 0,
//        ... 28 more items
//],
//uint_ScanNotificationReadCounter: 35599,
//uint_DivertNotificationReadCounter : 35594,
//uint_Cad99AnalogMsgReadCounter : 9322,
//uint_DeviceConnected : [8193, 1, 0, 0]
//}