//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APBLEBleHandler, APBLEDiscovery, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface APBLEBleHelper : NSObject
{
    NSMutableSet *mUUIDSet;
    NSMutableSet *mRmUUIDSet;
    _Bool mBleEnable;
    _Bool _mBleLoadFinish;
    APBLEDiscovery *mDiscovery;
    APBLEBleHandler *mBleHandler;
    NSDictionary *_mBleParams;
    long long _lastState;
    NSMutableDictionary *_dictDataToSend;
}

@property(retain, nonatomic) NSMutableDictionary *dictDataToSend; // @synthesize dictDataToSend=_dictDataToSend;
@property(nonatomic) long long lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) NSDictionary *mBleParams; // @synthesize mBleParams=_mBleParams;
@property(nonatomic) _Bool mBleLoadFinish; // @synthesize mBleLoadFinish=_mBleLoadFinish;
@property(retain, nonatomic) APBLEBleHandler *mBleHandler; // @synthesize mBleHandler;
@property(retain, nonatomic) APBLEDiscovery *mDiscovery; // @synthesize mDiscovery;
@property(nonatomic) _Bool mBleEnable; // @synthesize mBleEnable;
- (void).cxx_destruct;
- (id)hexStringToData:(id)arg1;
- (id)dataToHexString:(id)arg1;
- (id)stringToData:(id)arg1 type:(id)arg2;
- (id)dataToString:(id)arg1 type:(id)arg2;
- (id)stringToData:(id)arg1;
- (id)dataToString:(id)arg1;
- (int)requestWriteString:(id)arg1 string:(id)arg2;
- (int)requestWriteData:(id)arg1 data:(id)arg2;
- (_Bool)requestReadData:(id)arg1;
- (void)disconnectAll;
- (void)disconnectAndRm:(id)arg1;
- (_Bool)disconnect:(id)arg1;
- (_Bool)doConnect:(id)arg1 autoConnect:(_Bool)arg2;
- (_Bool)connect:(id)arg1 autoConnect:(_Bool)arg2;
- (int)getDeviceState:(id)arg1;
- (_Bool)isDeviceAuthoritied:(id)arg1;
- (id)searchDeviceWithUUID:(id)arg1;
- (id)foundDevices;
- (_Bool)stop;
- (_Bool)start;
- (void)close;
- (void)config:(id)arg1;
- (id)getDeviceId:(id)arg1;
- (id)getDeviceIdWithUuid:(id)arg1;
- (id)getUuidWithDeviceId:(id)arg1 filtType:(id)arg2;
- (id)getUuidWithDeviceId:(id)arg1;
- (id)getfiltType;
- (id)getDataType;
- (long long)bleState;
- (_Bool)isEnable;
- (_Bool)isFinishLoad;
- (_Bool)isBleOpen;
- (void)bleStateChanged:(id)arg1;
- (void)mGattUpdateReceiver:(id)arg1;
- (void)mDiscoveryPeripheral:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

