//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

#import "QQDeviceLockDevicesReqDelegate.h"

@class NSDictionary, NSString;

@interface QQDeviceLockMobileSettingWebViewController : QQWebViewController <QQDeviceLockDevicesReqDelegate>
{
    unsigned long long _operationType;
    _Bool _isOpenDeviceLockProcessing;
    NSString *_sppKey;
    NSDictionary *_openResult;
    _Bool _useLoginCookie;
    long long _result;
}

@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) _Bool useLoginCookie; // @synthesize useLoginCookie=_useLoginCookie;
- (void)finishQueryRecmd:(_Bool)arg1 Devices:(id)arg2;
- (void)onOpenDevLockResult:(id)arg1;
- (_Bool)canOpenDeviceLock;
- (void)onWebViewMobileSettingFinish:(id)arg1;
- (void)onWebViewMobileSettingResult:(id)arg1;
- (void)setCookie:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)leftButtonClick:(id)arg1;
- (_Bool)dismiss;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWith:(id)arg1 forStyle:(long long)arg2 andOpertation:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

