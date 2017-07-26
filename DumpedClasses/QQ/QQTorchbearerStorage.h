//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQTorchbearerStorage : NSObject
{
    NSMutableDictionary *_torchbearerDic;
}

@property(retain, nonatomic) NSMutableDictionary *torchbearerDic; // @synthesize torchbearerDic=_torchbearerDic;
- (void).cxx_destruct;
- (void)asynSaveToFile;
- (void)asynLoadFromFile;
- (void)saveTorchbearersDic:(id)arg1;
- (void)saveTorchbearer:(_Bool)arg1 withUin:(id)arg2;
- (_Bool)isTorchbearer:(id)arg1;
- (void)receivedFailedGetTorchbearerFlag:(id)arg1;
- (void)receivedDidGetTorchbearerFlag:(id)arg1;
- (void)asynGetTorchbearerList:(id)arg1;
- (void)asynGetTorchbearer:(id)arg1;
- (id)torchbearerKeyForUserDefaults:(id)arg1;
- (void)asynGetTorchbearerListIfEnable:(id)arg1 key:(id)arg2 limits:(double)arg3;
- (void)asynGetTorchbearerIfEnable:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)init;

@end

