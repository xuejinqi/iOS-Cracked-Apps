//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FATransferMgrDown, FATransferMgrUp, NSThread;

@interface FATransferMgr : NSObject
{
    id <FADelegate> _delegate;
    FATransferMgrDown *_downMgr;
    FATransferMgrUp *_upMgr;
    unsigned long long _selfUin;
    NSThread *_httpThread;
}

+ (id)getInstance;
- (void)httpThreadProc;
- (void)stopHttpThread;
- (id)httpThread;
- (void)cancel:(id)arg1;
- (void)resumeSend:(id)arg1;
- (void)send:(id)arg1 toTraget:(id)arg2;
- (void)recv:(id)arg1;
- (void)resumeRecv:(id)arg1;
- (_Bool)OnNetReachabilityDidChange:(id)arg1;
- (void)onAccountLogout:(id)arg1;
- (void)changeAccount:(id)arg1;
- (void)stopComponent;
- (void)dealloc;
- (id)init;

@end

