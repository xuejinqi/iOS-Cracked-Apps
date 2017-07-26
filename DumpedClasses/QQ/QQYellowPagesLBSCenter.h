//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class NSMutableArray, NSString, QQLocationManager;

@interface QQYellowPagesLBSCenter : NSObject <CLLocationManagerDelegate>
{
    NSMutableArray *_completionHandlerArr;
    _Bool _isLBSing;
    QQLocationManager *_locationMgrForDetectStatus;
    _Bool _blockByAuthorization;
    int _reqId;
}

- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)notifyQQLbsGetLocFieldFail:(id)arg1;
- (void)notifyQQLbsGetLocFieldSucc:(id)arg1;
- (void)invokeHandler:(int)arg1 result:(id)arg2;
- (id)unarchiveLBSCityInfo;
- (void)archiveLBSCityInfo:(id)arg1;
- (id)lastLBSInfo;
- (void)startLBSMinCache:(CDUnknownBlockType)arg1;
- (void)startLBSCacheTime:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startLBSRealtime:(CDUnknownBlockType)arg1;
- (void)startLBSMaxCache:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

