//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>;

@interface QQUseActionRecoder : NSObject
{
    NSObject<OS_dispatch_queue> *_rdmEventSerialQueue;
    NSDate *_lastTouchEventDate;
}

+ (id)shareInstance;
@property(retain) NSDate *lastTouchEventDate; // @synthesize lastTouchEventDate=_lastTouchEventDate;
- (void).cxx_destruct;
- (void)recordImportantText:(id)arg1 key:(id)arg2;
- (void)recordImportantIntege:(long long)arg1 key:(id)arg2;
- (void)recordTempText:(id)arg1 key:(id)arg2;
- (void)recordTempIntege:(long long)arg1 key:(id)arg2;
- (void)addAppEventWithName:(id)arg1 description:(id)arg2;
- (id)traceEventQueueLog;
- (id)traceFullLog;
- (void)startTrace;
- (void)reprotOCSPlueinOpenTimesWithPluginID:(id)arg1;
- (void)reportWatchDogEventByRdq;
- (id)init;
- (void)onNetReachabilityDidChange:(id)arg1;

@end

