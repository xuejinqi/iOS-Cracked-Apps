//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CocoaSPDYDelegate.h"

@class NSMutableDictionary, NSString, NSTimer, SPDYProtocol;

@interface QProxyManager : NSObject <CocoaSPDYDelegate>
{
    long long netStatus;
    _Bool probeSpdyServer_;
    NSTimer *probeTimer_;
    SPDYProtocol *_cocoaSPDYRequest;
    NSObject *pReqLocker;
    NSString *_qProxyParam;
    NSString *_qSubProxyParam;
    NSMutableDictionary *_dirSubResSites;
}

+ (id)addQQHeadersWithUrl:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dirSubResSites; // @synthesize dirSubResSites=_dirSubResSites;
@property(copy) NSString *qSubProxyParam; // @synthesize qSubProxyParam=_qSubProxyParam;
@property(copy) NSString *qProxyParam; // @synthesize qProxyParam=_qProxyParam;
- (void).cxx_destruct;
- (void)didFailWithErrorCocoaSPDY:(id)arg1;
- (void)didFinishLoadingCocoaSPDY;
- (void)wasRedirectedToRequestCocoaSPDY:(id)arg1 redirectResponse:(id)arg2;
- (void)didLoadDataCocoaSPDY:(id)arg1;
- (void)didReceiveResponseCocoaSPDY:(id)arg1;
- (void)probeSpdyServer;
- (void)stopProbeSpdyServer;
- (void)resetProxyHostPort:(_Bool)arg1;
- (_Bool)isUserProxyEnabled;
- (void)startProbeSpdyServerImmediate:(_Bool)arg1;
- (_Bool)isSeverProxyEnabled;
- (void)checkIfNeedProbeSpdyServerOnDirectConnectSuccess;
- (void)updateApnType;
- (_Bool)isUsedProxy;
- (void)resetQProxyParam;
- (void)turnToNextProxyIp;
- (_Bool)isInForceProxyListWithRequest:(id)arg1;
- (long long)directTypeWithRequest:(id)arg1 mainResource:(_Bool)arg2;
- (void)addQproxyInfo:(id)arg1 forUrl:(id)arg2;
- (_Bool)isSubResourceDir:(id)arg1 mainResource:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

