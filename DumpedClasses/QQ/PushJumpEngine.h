//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PushJumpEngine : NSObject
{
    NSMutableDictionary *_userInfo;
    _Bool _isAppLaunch;
    long long _pushClickTime;
}

+ (id)shareInstance;
@property(readonly, nonatomic) _Bool isAppLaunch; // @synthesize isAppLaunch=_isAppLaunch;
- (void)slideInAndDissmissModelVc;
- (_Bool)needReturnRecentController:(int)arg1;
- (_Bool)canJump;
- (void)jumpImpl:(id)arg1;
- (int)genePushJumpType:(id)arg1;
- (long long)getPushClickTime;
- (int)getPushJumpType;
- (id)geneExInfo:(id)arg1;
- (void)onRecentControllerAppear;
- (_Bool)onRecvRemoteNotification:(id)arg1;
- (void)onAppLaunchByPush:(id)arg1;
- (void)dealloc;
- (id)init;

@end

