//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABTestInfoProvider.h"

@class ABTestUserInfo, NSDate, NSString;

@interface ABTestManager : NSObject <ABTestInfoProvider>
{
    _Bool _enable;
    _Bool _isRefreshing;
    int _interval;
    NSString *_productName;
    ABTestUserInfo *_userInfo;
    NSDate *_lastRefreshDate;
    long long _refreshReason;
}

+ (id)sharedInstance;
@property long long refreshReason; // @synthesize refreshReason=_refreshReason;
@property(retain) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain) ABTestUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSString *productName; // @synthesize productName=_productName;
@property int interval; // @synthesize interval=_interval;
@property _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (_Bool)shouldTriggerRefreshForQuery;
- (id)abTestInfoForSpmId:(id)arg1;
- (void)updateUserInfoWithUserId:(id)arg1 identificationCode:(id)arg2;
- (void)resetLocalExperimentInfoWithUserId:(id)arg1;
- (id)experimentsWithSpmId:(id)arg1;
- (id)paramsWithKey:(id)arg1;
- (void)refresh;
- (id)createParamWithKey:(id)arg1 value:(id)arg2;
- (void)appEnterForeground;
- (void)addNotificationObserver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

