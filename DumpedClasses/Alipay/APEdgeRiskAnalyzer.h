//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface APEdgeRiskAnalyzer : NSObject
{
    _Bool _edgeInitialized;
    NSMutableDictionary *_securityInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *securityInfo; // @synthesize securityInfo=_securityInfo;
@property _Bool edgeInitialized; // @synthesize edgeInitialized=_edgeInitialized;
- (void).cxx_destruct;
- (_Bool)isTimeout:(int)arg1;
- (id)getScanDylibResult:(id)arg1;
- (void)constructSecurityInfo;
- (id)getReportCount;
- (id)formatArNewProperty:(id)arg1;
- (id)formatRpcNewProperty:(id)arg1;
- (id)errorCodeToString:(int)arg1;
- (void)updateWithServer;
- (void)syncWithServer;
- (void)formatGetRiskResultMonitor:(id)arg1 riskResult:(id)arg2 time:(id)arg3;
- (id)getInnerRiskResult:(id)arg1 parameters:(id)arg2 timeout:(int)arg3;
- (id)getRiskResult:(id)arg1 parameters:(id)arg2 timeout:(int)arg3;
- (id)getRiskResult:(int)arg1;
- (int)postUserAction:(id)arg1 parameters:(id)arg2;
- (int)getBootTimeDiffCached_v2;
- (long long)fetchTrustedTime_v2;
- (int)updateTrustedTime_v2:(id)arg1;
- (void)updateSyncPolicyCache:(id)arg1;
- (int)initialize;
- (id)init;

@end

