//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QRTotalBookPayDelegate.h"

@class NSString, OnlineTag, QRAlertView;

@interface BookRightsUtil : NSObject <QRTotalBookPayDelegate>
{
    OnlineTag *_onlineTag;
    QRAlertView *_alert;
}

+ (id)shareInstance;
@property(retain, nonatomic) OnlineTag *onlineTag; // @synthesize onlineTag=_onlineTag;
- (void).cxx_destruct;
- (_Bool)downloadWholeBook:(id)arg1;
- (void)deleteBookInfo:(id)arg1;
- (_Bool)downloadFromBookInfo:(id)arg1 exist:(_Bool)arg2;
- (void)totalBookPayFailure;
- (void)totalBookPaySuccessWithDictionary:(id)arg1;
- (void)pushRechargeCtrlWithBuyType:(unsigned long long)arg1;
- (void)pushBatchDownloadCtrl;
- (void)downloadBookWithUrl:(id)arg1;
- (void)showErrortTips:(id)arg1;
- (void)showPaymentToBuyWithBookInfo:(id)arg1;
- (void)showAlertViewForQQReaderAppBaseUnsupportFormat;
- (void)showAlertViewForQQReaderApp;
- (void)payTotalBook:(id)arg1 totalPrice:(long long)arg2 triggeredBy:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)payTotalBookInDownloadBuyWithTotalPrice:(long long)arg1;
- (void)doQQReaderApp;
- (void)chapterInfoUpdateFailed:(id)arg1;
- (void)chapterInfoUpdater:(id)arg1 updateSuccess:(id)arg2;
- (void)onlineBookDownloadBuy:(id)arg1;
- (void)downloadWholeBookHandler:(id)arg1;
- (void)dismissAlterView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

