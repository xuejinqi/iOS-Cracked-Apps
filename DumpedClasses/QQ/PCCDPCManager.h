//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PCCDPCManager : PluginObject
{
    long long _flagInXG;
    long long _retryLimitsDaily;
    long long _retryLimitsTotal;
    long long _lbsDuration;
    long long _downloadEnable;
    long long _configReqTimesDaily;
    NSObject<OS_dispatch_queue> *_dpcQueue;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dpcQueue; // @synthesize dpcQueue=_dpcQueue;
@property(nonatomic) long long configReqTimesDaily; // @synthesize configReqTimesDaily=_configReqTimesDaily;
@property(nonatomic) long long downloadEnable; // @synthesize downloadEnable=_downloadEnable;
@property(nonatomic) long long lbsDuration; // @synthesize lbsDuration=_lbsDuration;
@property(nonatomic) long long retryLimitsTotal; // @synthesize retryLimitsTotal=_retryLimitsTotal;
@property(nonatomic) long long retryLimitsDaily; // @synthesize retryLimitsDaily=_retryLimitsDaily;
@property(nonatomic) long long flagInXG; // @synthesize flagInXG=_flagInXG;
- (void).cxx_destruct;
- (_Bool)predownloadEnableWithNW:(int)arg1;
- (void)updateDpcConfig:(id)arg1;
- (void)getConfigInfo;
- (id)init;

@end

