#pragma once
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <iostream>
using namespace std;
using namespace v8;
struct StructureArray02
{
    unsigned short uint_CMAlive;
    unsigned short uint_ModeStationA;
    unsigned short uint_StateStationA;
    unsigned short uint_StationACommand;
    unsigned short uint_ActCommandFmSrtrPLCStationA;
    unsigned short uint_ModeStationB;
    unsigned short uint_StateStationB;
    unsigned short uint_StationBCommand;
    unsigned short uint_ActCommandFmSrtrPLCStationB;
    signed char byte_StartingDate24[24];
    unsigned int ulong_TotesOutCountStationA;
    unsigned int ulong_StacksInStationA;
    unsigned int ulong_JamStationA;
    unsigned int ulong_TotSecSinceLastResetStationA;
    unsigned int ulong_TotSecEStopStationA;
    unsigned int ulong_TotSecFaultStationA;
    unsigned int ulong_TotSecJamSubStateStationA;
    unsigned int ulong_TotSecInterErrorSubStateStationA;
    unsigned int ulong_TotSecInterlockSubStateStationA;
    unsigned int ulong_TotSecIdleStationA;
    unsigned int ulong_TotSecInitStationA;
    unsigned int ulong_TotSecRunningStationA;
    unsigned int ulong_TotSecOpStarvedStationA;
    unsigned int ulong_TotSecStarvedStationA;
    unsigned int ulong_TotSecBlockedStationA;
    unsigned int ulong_TotSecHeldStationA;
    unsigned int ulong_TotSecUnconstrainedStationA;
    unsigned int ulong_TotSecManualStationA;
    unsigned int ulong_TotesOutCountStationB;
    unsigned int ulong_StacksInStationB;
    unsigned int ulong_JamStationB;
    unsigned int ulong_TotSecSinceLastResetStationB;
    unsigned int ulong_TotSecEStopStationB;
    unsigned int ulong_TotSecFaultStationB;
    unsigned int ulong_TotSecJamSubStateStationB;
    unsigned int ulong_TotSecInterErrorSubStateStationB;
    unsigned int ulong_TotSecInterlockSubStateStationB;
    unsigned int ulong_TotSecIdleStationB;
    unsigned int ulong_TotSecInitStationB;
    unsigned int ulong_TotSecRunningStationB;
    unsigned int ulong_TotSecOpStarvedStationB;
    unsigned int ulong_TotSecStarvedStationB;
    unsigned int ulong_TotSecBlockedStationB;
    unsigned int ulong_TotSecHeldStationB;
    unsigned int ulong_TotSecUnconstrainedStationB;
    unsigned int ulong_TotSecManualStationB;
    unsigned short uint_OutputState[20];
    unsigned short uint_CMStatus;
    unsigned short uint_BarcodeReadCounter;
    unsigned short uint_DestinationReadCounter;
    unsigned short uint_ServerReceivedMsgReadCounter;
    unsigned short uint_ScanNotificationCounter;
    unsigned short uint_BarcodeIdLocationLength;
    signed char byte_BarcodeIdLocation[8];
    unsigned short uint_SequentialNumber;
    unsigned short uint_BarcodeLength;
    signed char byte_Barcode[26];
    unsigned short uint_DivertNotificationCounter;
    unsigned short uint_DivertSequentialNumber;
    unsigned short uint_DivertBarcodeIdLocationLength;
    signed char byte_DivertBarcodeIdLocation[8];
    unsigned short uint_DivertBarcodeLength;
    signed char byte_DivertBarcode[26];
    unsigned short uint_DestRequestedLength;
    signed char byte_DestRequested[8];
    unsigned short uint_SortedDestLength;
    signed char byte_SortedDest[8];
    unsigned short uint_SortedCode;
    unsigned short uint_DisplayCounter;
    unsigned short uint_DisplayMsgLength;
    signed char byte_DisplayMsg[256];
    unsigned short uint_Cad99AnalogMsgCounter;
    unsigned short uint_DeviceIdLength;
    signed char byte_DeviceId[8];
    unsigned short uint_LevelPercent;
    unsigned short uint_FlexiSafeData[3];
    unsigned short uint_InError;
    unsigned short uint_NotInUse;
    unsigned short uint_Error[8];
    unsigned short uint_Jam[8];
    unsigned short uint_ConveyorState[12];

};

StructureArray02 getArray02() {

    StructureArray02 dataArray02;

    dataArray02.uint_CMAlive = 22385;
    dataArray02.uint_ModeStationA = 1;
    dataArray02.uint_StateStationA = 4;
    dataArray02.uint_StationACommand = 16;
    dataArray02.uint_ActCommandFmSrtrPLCStationA = 1;
    dataArray02.uint_ModeStationB = 0;
    dataArray02.uint_StateStationB = 2;
    dataArray02.uint_StationBCommand = 0;
    dataArray02.uint_ActCommandFmSrtrPLCStationB = 0;
    signed char temp_byte_StartingDate24[24] = {
        50, 48, 50, 49, 45, 48, 56, 45,
            50, 51, 84, 48, 50, 58, 49, 56,
            58, 50, 51, 46, 54, 54, 48, 90
    };
    memcpy(dataArray02.byte_StartingDate24, temp_byte_StartingDate24, 24);
    dataArray02.ulong_TotesOutCountStationA = 200;
    dataArray02.ulong_StacksInStationA = 23;
    dataArray02.ulong_JamStationA = 0;
    dataArray02.ulong_TotSecSinceLastResetStationA = 271240;
    dataArray02.ulong_TotSecEStopStationA = 11365;
    dataArray02.ulong_TotSecFaultStationA = 16151;
    dataArray02.ulong_TotSecJamSubStateStationA = 1713;
    dataArray02.ulong_TotSecInterErrorSubStateStationA = 14159;
    dataArray02.ulong_TotSecInterlockSubStateStationA = 48;
    dataArray02.ulong_TotSecIdleStationA = 122449;
    dataArray02.ulong_TotSecInitStationA = 2256;
    dataArray02.ulong_TotSecRunningStationA = 32711;
    dataArray02.ulong_TotSecOpStarvedStationA = 23650;
    dataArray02.ulong_TotSecStarvedStationA = 6463;
    dataArray02.ulong_TotSecBlockedStationA = 1075;
    dataArray02.ulong_TotSecHeldStationA = 5574;
    dataArray02.ulong_TotSecUnconstrainedStationA = 19599;
    dataArray02.ulong_TotSecManualStationA = 88300;
    dataArray02.ulong_TotesOutCountStationB = 0;
    dataArray02.ulong_StacksInStationB = 0;
    dataArray02.ulong_JamStationB = 0;
    dataArray02.ulong_TotSecSinceLastResetStationB = 271240;
    dataArray02.ulong_TotSecEStopStationB = 54582;
    dataArray02.ulong_TotSecFaultStationB = 5985;
    dataArray02.ulong_TotSecJamSubStateStationB = 0;
    dataArray02.ulong_TotSecInterErrorSubStateStationB = 94;
    dataArray02.ulong_TotSecInterlockSubStateStationB = 0;
    dataArray02.ulong_TotSecIdleStationB = 106175;
    dataArray02.ulong_TotSecInitStationB = 0;
    dataArray02.ulong_TotSecRunningStationB = 0;
    dataArray02.ulong_TotSecOpStarvedStationB = 0;
    dataArray02.ulong_TotSecStarvedStationB = 0;
    dataArray02.ulong_TotSecBlockedStationB = 0;
    dataArray02.ulong_TotSecHeldStationB = 0;
    dataArray02.ulong_TotSecUnconstrainedStationB = 0;
    dataArray02.ulong_TotSecManualStationB = 110389;
    unsigned short temp_uint_OutputState[20] = {
            32, 2724, 0, 0, 0, 0,
             0,    0, 0, 0, 0, 0,
             0,    0, 0, 0, 0, 0,
             0,    0
    };
    memcpy(dataArray02.uint_OutputState, temp_uint_OutputState, sizeof(unsigned short) * 20);
    dataArray02.uint_CMStatus = 0;
    dataArray02.uint_BarcodeReadCounter = 0;
    dataArray02.uint_DestinationReadCounter = 0;
    dataArray02.uint_ServerReceivedMsgReadCounter = 0;
    dataArray02.uint_ScanNotificationCounter = 35599;
    dataArray02.uint_BarcodeIdLocationLength = 0;
    signed char temp_byte_BarcodeIdLocation[8] = {
            0, 0, 0, 0,
            0, 0, 0, 0
    };
    memcpy(dataArray02.byte_BarcodeIdLocation, temp_byte_BarcodeIdLocation, 8);

    dataArray02.uint_SequentialNumber = 0;
    dataArray02.uint_BarcodeLength = 0;
    signed char temp_byte_Barcode[26] = {
            0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0
    };
    memcpy(dataArray02.byte_Barcode, temp_byte_Barcode, 26);
    dataArray02.uint_DivertNotificationCounter = 35594;
    dataArray02.uint_DivertSequentialNumber = 0;
    dataArray02.uint_DivertBarcodeIdLocationLength = 0;
    signed char temp_byte_DivertBarcodeIdLocation[8] = {
            0, 0, 0, 0, 0, 0, 0, 0

    };
    memcpy(dataArray02.byte_DivertBarcodeIdLocation, temp_byte_DivertBarcodeIdLocation, 8);
    dataArray02.uint_DivertBarcodeLength = 0;
    signed char temp_byte_DivertBarcode[26] = {
            0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0
    };
    memcpy(dataArray02.byte_DivertBarcode, temp_byte_DivertBarcode, 26);

    dataArray02.uint_DestRequestedLength = 0;
    signed char temp_byte_DestRequested[8] = {
            0, 0, 0, 0, 0, 0, 0, 0

    };
    memcpy(dataArray02.byte_DestRequested, temp_byte_DestRequested, 8);

    dataArray02.uint_SortedDestLength = 0;

    signed char temp_byte_SortedDest[8] = {
            0, 0, 0, 0, 0, 0, 0, 0
    };
    memcpy(dataArray02.byte_SortedDest, temp_byte_SortedDest, 8);

    dataArray02.uint_SortedCode = 0;
    dataArray02.uint_DisplayCounter = 0;
    dataArray02.uint_DisplayMsgLength = 0;

    signed char temp_byte_DisplayMsg[256] = {
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
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
               0, 0, 0, 0
    };
    memcpy(dataArray02.byte_DisplayMsg, temp_byte_DisplayMsg, 256);

    dataArray02.uint_Cad99AnalogMsgCounter = 0;
    dataArray02.uint_DeviceIdLength = 0;

    signed char temp_byte_DeviceId[8] = {
            0, 0, 0, 0, 0, 0, 0, 0
    };
    memcpy(dataArray02.byte_DeviceId, temp_byte_DeviceId, 8);

    dataArray02.uint_LevelPercent = 0;

    unsigned short temp_uint_FlexiSafeData[3] = {
            0,0,0
    };
    memcpy(dataArray02.uint_FlexiSafeData, temp_uint_FlexiSafeData, sizeof(unsigned short) * 3);

    dataArray02.uint_InError = 1799;
    dataArray02.uint_NotInUse = 768;

    unsigned short temp_uint_Error[8] = {
           0, 0, 0, 0,
               0, 0, 0, 0
    };
    memcpy(dataArray02.uint_Error, temp_uint_Error, sizeof(unsigned short) * 8);

    unsigned short temp_uint_Jam[8] = {
           0, 0, 0, 0,
               0, 0, 0, 0
    };
    memcpy(dataArray02.uint_Jam, temp_uint_Jam, sizeof(unsigned short) * 8);

    unsigned short temp_uint_ConveyorState[12] = {
             0, 3, 3, 0, 0,
                 0, 0, 0, 0, 0,
                 0, 0
    };
    memcpy(dataArray02.uint_ConveyorState, temp_uint_ConveyorState, sizeof(unsigned short) * 12);

    return dataArray02;
}
ostream& operator<<(ostream& os, const StructureArray02 da) {
    os << "{" << endl;
    os << " uint_CMAlive: " << da.uint_CMAlive << endl;
    os << " uint_ModeStationA: " << da.uint_ModeStationA << endl;
    os << " uint_StateStationA: " << da.uint_StateStationA << endl;
    os << " uint_StationACommand: " << da.uint_StationACommand << endl;
    os << " uint_ActCommandFmSrtrPLCStationA: " << da.uint_ActCommandFmSrtrPLCStationA << endl;
    os << " uint_ModeStationB: " << da.uint_ModeStationB << endl;
    os << " uint_StateStationB: " << da.uint_StateStationB << endl;
    os << " uint_StationBCommand: " << da.uint_StationBCommand << endl;
    os << " uint_ActCommandFmSrtrPLCStationB: " << da.uint_ActCommandFmSrtrPLCStationB << endl;

    os << " byte_StartingDate24: ";
    for (int i = 0; i < 24; i++)
        printf("%d ", da.byte_StartingDate24[i]);
    os << endl;
    os << " ulong_TotesOutCountStationA: " << da.ulong_TotesOutCountStationA << endl;
    os << " ulong_StacksInStationA: " << da.ulong_StacksInStationA << endl;
    os << " ulong_JamStationA: " << da.ulong_JamStationA << endl;
    os << " ulong_TotSecSinceLastResetStationA: " << da.ulong_TotSecSinceLastResetStationA << endl;
    os << " ulong_TotSecEStopStationA: " << da.ulong_TotSecEStopStationA << endl;
    os << " ulong_TotSecFaultStationA: " << da.ulong_TotSecFaultStationA << endl;
    os << " ulong_TotSecJamSubStateStationA: " << da.ulong_TotSecJamSubStateStationA << endl;
    os << " ulong_TotSecInterErrorSubStateStationA: " << da.ulong_TotSecInterErrorSubStateStationA << endl;
    os << " ulong_TotSecInterlockSubStateStationA: " << da.ulong_TotSecInterlockSubStateStationA << endl;
    os << " ulong_TotSecIdleStationA: " << da.ulong_TotSecIdleStationA << endl;
    os << " ulong_TotSecInitStationA: " << da.ulong_TotSecInitStationA << endl;
    os << " ulong_TotSecRunningStationA: " << da.ulong_TotSecRunningStationA << endl;
    os << " ulong_TotSecOpStarvedStationA: " << da.ulong_TotSecOpStarvedStationA << endl;
    os << " ulong_TotSecStarvedStationA: " << da.ulong_TotSecStarvedStationA << endl;
    os << " ulong_TotSecBlockedStationA: " << da.ulong_TotSecBlockedStationA << endl;
    os << " ulong_TotSecHeldStationA: " << da.ulong_TotSecHeldStationA << endl;
    os << " ulong_TotSecUnconstrainedStationA: " << da.ulong_TotSecUnconstrainedStationA << endl;
    os << " ulong_TotSecManualStationA: " << da.ulong_TotSecManualStationA << endl;
    os << " ulong_TotesOutCountStationB: " << da.ulong_TotesOutCountStationB << endl;
    os << " ulong_StacksInStationB: " << da.ulong_StacksInStationB << endl;
    os << " ulong_JamStationB: " << da.ulong_JamStationB << endl;
    os << " ulong_TotSecSinceLastResetStationB: " << da.ulong_TotSecSinceLastResetStationB << endl;
    os << " ulong_TotSecEStopStationB: " << da.ulong_TotSecEStopStationB << endl;
    os << " ulong_TotSecFaultStationB: " << da.ulong_TotSecFaultStationB << endl;
    os << " ulong_TotSecJamSubStateStationB: " << da.ulong_TotSecJamSubStateStationB << endl;
    os << " ulong_TotSecInterErrorSubStateStationB: " << da.ulong_TotSecInterErrorSubStateStationB << endl;
    os << " ulong_TotSecInterlockSubStateStationB: " << da.ulong_TotSecInterlockSubStateStationB << endl;
    os << " ulong_TotSecIdleStationB: " << da.ulong_TotSecIdleStationB << endl;
    os << " ulong_TotSecInitStationB: " << da.ulong_TotSecInitStationB << endl;
    os << " ulong_TotSecRunningStationB: " << da.ulong_TotSecRunningStationB << endl;
    os << " ulong_TotSecOpStarvedStationB: " << da.ulong_TotSecOpStarvedStationB << endl;
    os << " ulong_TotSecStarvedStationB: " << da.ulong_TotSecStarvedStationB << endl;
    os << " ulong_TotSecBlockedStationB: " << da.ulong_TotSecBlockedStationB << endl;
    os << " ulong_TotSecHeldStationB: " << da.ulong_TotSecHeldStationB << endl;
    os << " ulong_TotSecUnconstrainedStationB: " << da.ulong_TotSecUnconstrainedStationB << endl;
    os << " ulong_TotSecManualStationB: " << da.ulong_TotSecManualStationB << endl;
    os << " uint_OutputState: ";
    for (int i = 0; i < 20; i++)
        printf("%d ", da.uint_OutputState[i]);
    os << endl;
    os << " uint_CMStatus: " << da.uint_CMStatus << endl;
    os << " uint_BarcodeReadCounter: " << da.uint_BarcodeReadCounter << endl;
    os << " uint_DestinationReadCounter: " << da.uint_DestinationReadCounter << endl;
    os << " uint_ServerReceivedMsgReadCounter: " << da.uint_ServerReceivedMsgReadCounter << endl;
    os << " uint_ScanNotificationCounter: " << da.uint_ScanNotificationCounter << endl;
    os << " uint_BarcodeIdLocationLength: " << da.uint_BarcodeIdLocationLength << endl;
    os << " byte_BarcodeIdLocation: ";
    for (int i = 0; i < 8; i++)
        printf("%d ", da.byte_BarcodeIdLocation[i]);
    os << endl;
    os << " uint_SequentialNumber: " << da.uint_SequentialNumber << endl;
    os << " uint_BarcodeLength: " << da.uint_BarcodeLength << endl;
    os << " byte_Barcode: ";
    for (int i = 0; i < 26; i++)
        printf("%d ", da.byte_Barcode[i]);
    os << endl;

    os << " uint_DivertNotificationCounter: " << da.uint_DivertNotificationCounter << endl;
    os << " uint_DivertSequentialNumber: " << da.uint_DivertSequentialNumber << endl;
    os << " uint_DivertBarcodeIdLocationLength: " << da.uint_DivertBarcodeIdLocationLength << endl;
    os << " byte_DivertBarcodeIdLocation: " << da.byte_DivertBarcodeIdLocation << endl;
    os << " uint_DivertBarcodeLength: " << da.uint_DivertBarcodeLength << endl;
    os << " byte_DivertBarcode: " << da.byte_DivertBarcode << endl;

    os << " uint_DestRequestedLength: " << da.uint_DestRequestedLength << endl;

    os << " byte_DestRequested: ";
    for (int i = 0; i < 8; i++)
        printf("%d ", da.byte_DestRequested[i]);
    os << endl;

    os << " uint_SortedDestLength: " << da.uint_SortedDestLength << endl;

    os << " byte_SortedDest: ";
    for (int i = 0; i < 8; i++)
        printf("%d ", da.byte_SortedDest[i]);
    os << endl;

    os << " uint_SortedCode: " << da.uint_SortedCode << endl;
    os << " uint_DisplayCounter: " << da.uint_DisplayCounter << endl;
    os << " uint_DisplayMsgLength: " << da.uint_DisplayMsgLength << endl;

    os << " byte_DisplayMsg: ";
    for (int i = 0; i < 256; i++)
        printf("%d ", da.byte_DisplayMsg[i]);
    os << endl;

    os << " uint_Cad99AnalogMsgCounter: " << da.uint_Cad99AnalogMsgCounter << endl;
    os << " uint_DeviceIdLength: " << da.uint_DeviceIdLength << endl;

    os << " byte_DeviceId: ";
    for (int i = 0; i < 8; i++)
        printf("%d ", da.byte_DeviceId[i]);
    os << endl;

    os << " uint_LevelPercent: " << da.uint_LevelPercent << endl;
    os << " uint_FlexiSafeData: ";
    for (int i = 0; i < 3; i++)
        printf("%d ", da.uint_FlexiSafeData[i]);
    os << endl;

    os << " uint_InError: " << da.uint_InError << endl;
    os << " uint_NotInUse: " << da.uint_NotInUse << endl;
    os << " uint_Error: ";
    for (int i = 0; i < 8; i++)
        printf("%d ", da.uint_Error[i]);
    os << endl;
    os << " uint_Jam: ";
    for (int i = 0; i < 8; i++)
        printf("%d ", da.uint_Jam[i]);
    os << endl;

    os << " uint_ConveyorState: ";
    for (int i = 0; i < 12; i++)
        printf("%d ", da.uint_ConveyorState[i]);
    os << endl;



    os << "}" << endl;
    return os;
}
Local<Object> getObjectFromStructureArray02(Isolate* isolate,Local<Context> context,StructureArray02 array02){
    
    Local<Object> obj = Object::New(isolate);
    obj->Set(context,String::NewFromUtf8(isolate,"uint_CMAlive").ToLocalChecked(),Number::New(isolate, array02.uint_CMAlive));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_ModeStationA").ToLocalChecked(),Number::New(isolate, array02.uint_ModeStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_StateStationA").ToLocalChecked(),Number::New(isolate, array02.uint_StateStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_StationACommand").ToLocalChecked(),Number::New(isolate, array02.uint_StationACommand));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_ActCommandFmSrtrPLCStationA").ToLocalChecked(),Number::New(isolate, array02.uint_ActCommandFmSrtrPLCStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_ModeStationB").ToLocalChecked(),Number::New(isolate, array02.uint_ModeStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_StateStationB").ToLocalChecked(),Number::New(isolate, array02.uint_StateStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_StationBCommand").ToLocalChecked(),Number::New(isolate, array02.uint_StationBCommand));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_ActCommandFmSrtrPLCStationB").ToLocalChecked(),Number::New(isolate, array02.uint_ActCommandFmSrtrPLCStationB));

    Local<Array> byte_StartingDate24=Array::New(isolate,24);for(int i=0;i<24;i++){byte_StartingDate24->Set(context,i, Integer::New(isolate,array02.byte_StartingDate24[i]));}obj->Set(context,String::NewFromUtf8(isolate,"byte_StartingDate24").ToLocalChecked(),byte_StartingDate24);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_StartingDate24").ToLocalChecked(),Number::New(isolate, array02.byte_StartingDate24));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotesOutCountStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotesOutCountStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_StacksInStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_StacksInStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_JamStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_JamStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecSinceLastResetStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecSinceLastResetStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecEStopStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecEStopStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecFaultStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecFaultStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecJamSubStateStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecJamSubStateStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecInterErrorSubStateStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecInterErrorSubStateStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecInterlockSubStateStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecInterlockSubStateStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecIdleStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecIdleStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecInitStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecInitStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecRunningStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecRunningStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecOpStarvedStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecOpStarvedStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecStarvedStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecStarvedStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecBlockedStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecBlockedStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecHeldStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecHeldStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecUnconstrainedStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecUnconstrainedStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecManualStationA").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecManualStationA));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotesOutCountStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotesOutCountStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_StacksInStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_StacksInStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_JamStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_JamStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecSinceLastResetStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecSinceLastResetStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecEStopStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecEStopStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecFaultStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecFaultStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecJamSubStateStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecJamSubStateStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecInterErrorSubStateStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecInterErrorSubStateStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecInterlockSubStateStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecInterlockSubStateStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecIdleStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecIdleStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecInitStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecInitStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecRunningStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecRunningStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecOpStarvedStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecOpStarvedStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecStarvedStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecStarvedStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecBlockedStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecBlockedStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecHeldStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecHeldStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecUnconstrainedStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecUnconstrainedStationB));
    obj->Set(context,String::NewFromUtf8(isolate,"ulong_TotSecManualStationB").ToLocalChecked(),Number::New(isolate, array02.ulong_TotSecManualStationB));

    Local<Array> uint_OutputState=Array::New(isolate,20);for(int i=0;i<20;i++){uint_OutputState->Set(context,i, Integer::New(isolate,array02.uint_OutputState[i]));}obj->Set(context,String::NewFromUtf8(isolate,"uint_OutputState").ToLocalChecked(),uint_OutputState);
    //obj->Set(context,String::NewFromUtf8(isolate,"uint_OutputState").ToLocalChecked(),Number::New(isolate, array02.uint_OutputState));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_CMStatus").ToLocalChecked(),Number::New(isolate, array02.uint_CMStatus));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_BarcodeReadCounter").ToLocalChecked(),Number::New(isolate, array02.uint_BarcodeReadCounter));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DestinationReadCounter").ToLocalChecked(),Number::New(isolate, array02.uint_DestinationReadCounter));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_ServerReceivedMsgReadCounter").ToLocalChecked(),Number::New(isolate, array02.uint_ServerReceivedMsgReadCounter));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_ScanNotificationCounter").ToLocalChecked(),Number::New(isolate, array02.uint_ScanNotificationCounter));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_BarcodeIdLocationLength").ToLocalChecked(),Number::New(isolate, array02.uint_BarcodeIdLocationLength));

    Local<Array> byte_BarcodeIdLocation=Array::New(isolate,8);for(int i=0;i<8;i++){byte_BarcodeIdLocation->Set(context,i, Integer::New(isolate,array02.byte_BarcodeIdLocation[i]));}obj->Set(context,String::NewFromUtf8(isolate,"byte_BarcodeIdLocation").ToLocalChecked(),byte_BarcodeIdLocation);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_BarcodeIdLocation").ToLocalChecked(),Number::New(isolate, array02.byte_BarcodeIdLocation));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_SequentialNumber").ToLocalChecked(),Number::New(isolate, array02.uint_SequentialNumber));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_BarcodeLength").ToLocalChecked(),Number::New(isolate, array02.uint_BarcodeLength));

    Local<Array> byte_Barcode=Array::New(isolate,26);
    for(int i=0;i<26;i++){
        byte_Barcode->Set(context,i, Integer::New(isolate,array02.byte_Barcode[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"byte_Barcode").ToLocalChecked(),byte_Barcode);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_Barcode").ToLocalChecked(),Number::New(isolate, array02.byte_Barcode));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DivertNotificationCounter").ToLocalChecked(),Number::New(isolate, array02.uint_DivertNotificationCounter));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DivertSequentialNumber").ToLocalChecked(),Number::New(isolate, array02.uint_DivertSequentialNumber));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DivertBarcodeIdLocationLength").ToLocalChecked(),Number::New(isolate, array02.uint_DivertBarcodeIdLocationLength));

    Local<Array> byte_DivertBarcodeIdLocation=Array::New(isolate,8);
    for(int i=0;i<8;i++){
        byte_DivertBarcodeIdLocation->Set(context,i, Integer::New(isolate,array02.byte_DivertBarcodeIdLocation[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"byte_DivertBarcodeIdLocation").ToLocalChecked(),byte_DivertBarcodeIdLocation);

    //obj->Set(context,String::NewFromUtf8(isolate,"byte_DivertBarcodeIdLocation").ToLocalChecked(),Number::New(isolate, array02.byte_DivertBarcodeIdLocation));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DivertBarcodeLength").ToLocalChecked(),Number::New(isolate, array02.uint_DivertBarcodeLength));

    Local<Array> byte_DivertBarcode=Array::New(isolate,26);
    for(int i=0;i<26;i++){
        byte_DivertBarcode->Set(context,i, Integer::New(isolate,array02.byte_DivertBarcode[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"byte_DivertBarcode").ToLocalChecked(),byte_DivertBarcode);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_DivertBarcode").ToLocalChecked(),Number::New(isolate, array02.byte_DivertBarcode));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DestRequestedLength").ToLocalChecked(),Number::New(isolate, array02.uint_DestRequestedLength));

    Local<Array> byte_DestRequested=Array::New(isolate,8);
    for(int i=0;i<8;i++){
        byte_DestRequested->Set(context,i, Integer::New(isolate,array02.byte_DestRequested[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"byte_DestRequested").ToLocalChecked(),byte_DestRequested);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_DestRequested").ToLocalChecked(),Number::New(isolate, array02.byte_DestRequested));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_SortedDestLength").ToLocalChecked(),Number::New(isolate, array02.uint_SortedDestLength));

    Local<Array> byte_SortedDest=Array::New(isolate,8);
    for(int i=0;i<8;i++){
        byte_SortedDest->Set(context,i, Integer::New(isolate,array02.byte_SortedDest[i]));
    }
    obj->Set(context,String::NewFromUtf8(isolate,"byte_SortedDest").ToLocalChecked(),byte_SortedDest);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_SortedDest").ToLocalChecked(),Number::New(isolate, array02.byte_SortedDest));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_SortedCode").ToLocalChecked(),Number::New(isolate, array02.uint_SortedCode));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DisplayCounter").ToLocalChecked(),Number::New(isolate, array02.uint_DisplayCounter));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DisplayMsgLength").ToLocalChecked(),Number::New(isolate, array02.uint_DisplayMsgLength));

    Local<Array> byte_DisplayMsg=Array::New(isolate,256);
    for(int i=0;i<256;i++){
        byte_DisplayMsg->Set(context,i, Integer::New(isolate,array02.byte_DisplayMsg[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"byte_DisplayMsg").ToLocalChecked(),byte_DisplayMsg);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_DisplayMsg").ToLocalChecked(),Number::New(isolate, array02.byte_DisplayMsg));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_Cad99AnalogMsgCounter").ToLocalChecked(),Number::New(isolate, array02.uint_Cad99AnalogMsgCounter));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_DeviceIdLength").ToLocalChecked(),Number::New(isolate, array02.uint_DeviceIdLength));

    Local<Array> byte_DeviceId=Array::New(isolate,8);
    for(int i=0;i<8;i++){
        byte_DeviceId->Set(context,i, Integer::New(isolate,array02.byte_DeviceId[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"byte_DeviceId").ToLocalChecked(),byte_DeviceId);
    //obj->Set(context,String::NewFromUtf8(isolate,"byte_DeviceId").ToLocalChecked(),Number::New(isolate, array02.byte_DeviceId));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_LevelPercent").ToLocalChecked(),Number::New(isolate, array02.uint_LevelPercent));

    Local<Array> uint_FlexiSafeData=Array::New(isolate,3);
    for(int i=0;i<3;i++){
        uint_FlexiSafeData->Set(context,i, Integer::New(isolate,array02.uint_FlexiSafeData[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"uint_FlexiSafeData").ToLocalChecked(),uint_FlexiSafeData);
    //obj->Set(context,String::NewFromUtf8(isolate,"uint_FlexiSafeData").ToLocalChecked(),Number::New(isolate, array02.uint_FlexiSafeData));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_InError").ToLocalChecked(),Number::New(isolate, array02.uint_InError));
    obj->Set(context,String::NewFromUtf8(isolate,"uint_NotInUse").ToLocalChecked(),Number::New(isolate, array02.uint_NotInUse));

    Local<Array> uint_Error=Array::New(isolate,8);
    for(int i=0;i<8;i++){
        uint_Error->Set(context,i, Integer::New(isolate,array02.uint_Error[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"uint_Error").ToLocalChecked(),uint_Error);
    //obj->Set(context,String::NewFromUtf8(isolate,"uint_Error").ToLocalChecked(),Number::New(isolate, array02.uint_Error));

    Local<Array> uint_Jam=Array::New(isolate,8);
    for(int i=0;i<8;i++){
        uint_Jam->Set(context,i, Integer::New(isolate,array02.uint_Jam[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"uint_Jam").ToLocalChecked(),uint_Jam);
    //obj->Set(context,String::NewFromUtf8(isolate,"uint_Jam").ToLocalChecked(),Number::New(isolate, array02.uint_Jam));

    Local<Array> uint_ConveyorState=Array::New(isolate,12);
    for(int i=0;i<12;i++){
        uint_ConveyorState->Set(context,i, Integer::New(isolate,array02.uint_ConveyorState[i]));
        }
    obj->Set(context,String::NewFromUtf8(isolate,"uint_ConveyorState").ToLocalChecked(),uint_ConveyorState);
    //obj->Set(context,String::NewFromUtf8(isolate,"uint_ConveyorState").ToLocalChecked(),Number::New(isolate, array02.uint_ConveyorState));



    // Local<Array> byte_StartingDate24=Array::New(isolate,24);    
    // for(int i=0;i<24;i++){
    //   byte_StartingDate24->Set(context,i, Integer::New(isolate,array02.byte_StartingDate24[i]));
    // }
    // localKey = String::NewFromUtf8(isolate,"byte_StartingDate24").ToLocalChecked();    
    // obj->Set(context,localKey,byte_StartingDate24);
    return obj;
}