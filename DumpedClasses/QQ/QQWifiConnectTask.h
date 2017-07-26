//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWifiTask.h"

#import "IEngineDispatchDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "QQWifiStoppableTask.h"

@class ApInfo, IEngineDispatchDelegateNonRetian, NSMutableData, NSString, NSTimer;

@interface QQWifiConnectTask : QQWifiTask <QQWifiStoppableTask, NSURLConnectionDataDelegate, IEngineDispatchDelegate>
{
    _Bool _isSetStop;
    NSString *_redirectUrl;
    NSMutableData *_receivedData;
    NSString *_apLoginUrl;
    IEngineDispatchDelegateNonRetian *_csDelegate;
    NSString *_authInfo;
    NSString *_qqauthUrl;
    NSString *_requestPassUrl;
    NSString *_closePassUrl;
    NSString *_queryIntfUrl;
    NSString *_stortAdurl;
    NSString *_bbAdurl;
    NSTimer *_msfStateTimer;
}

- (void)onMsfStateChangeTimeout;
- (void)onMSFNetworkStateNotification:(id)arg1;
- (void)handleHttpCompletePass:(long long)arg1 redirectUrl:(id)arg2;
- (void)notifyError:(id)arg1;
- (void)onTaskResult_Auth:(int)arg1 errorCode:(int)arg2;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)handleHttpCompleteTemporaryPass:(long long)arg1 receivedData:(id)arg2;
- (void)handleHttpCompleteExchangeQQAuth:(long long)arg1 receivedData:(id)arg2;
- (void)handleHttpCompleteAccessBlackList:(long long)arg1 redirectUrl:(id)arg2;
- (void)handleHttpComplete:(long long)arg1 redirectUrl:(id)arg2 receivedData:(id)arg3;
- (void)stepEnd;
- (void)stepPass;
- (void)sendAuthAP;
- (void)stepAuthAP;
- (void)stepTemporaryPass;
- (void)stepExchangeQQAuth;
- (void)nextStep;
- (void)runStep;
- (void)setStep:(int)arg1;
- (void)onTaskStop:(int)arg1 errorCode:(int)arg2;
- (void)onTaskStatus:(int)arg1;
- (void)stop;
- (void)stopTask;
- (void)startTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) ApInfo *apInfo;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id <QQWifiConnectTaskDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isStarted;
@property(readonly, nonatomic) _Bool isStopping;
@property(readonly) Class superclass;
@property(nonatomic) long long taskID;

@end

