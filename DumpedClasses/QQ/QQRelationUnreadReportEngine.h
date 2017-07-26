//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString, NSTimer;

@interface QQRelationUnreadReportEngine : NSObject <IEngineDispatchDelegate>
{
    int _retryCount;
    NSTimer *_timer;
}

+ (id)getInstance;
@property(retain, nonatomic) NSTimer *_timer; // @synthesize _timer;
- (void)timeout;
- (void)stopTimer;
- (void)startTimer;
- (void)reportRelationUnreadInBackground;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)parseResp:(char *)arg1 len:(int)arg2;
- (_Bool)reportRelationUnreadRecommend:(int)arg1 Contacts:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

