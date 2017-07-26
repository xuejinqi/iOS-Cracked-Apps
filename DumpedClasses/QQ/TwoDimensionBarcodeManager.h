//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQQRCodeReaderDelegate.h"

@class C2BAudioPlug, MQQRCodeReaderViewController, NSMutableDictionary, NSString, NearFilePlug, QRCodeCommonBizPlug, TXBizPlug, TXQRLoginConfirmViewController, WebViewPlug;

@interface TwoDimensionBarcodeManager : NSObject <MQQRCodeReaderDelegate>
{
    TXBizPlug *_txBizPlugObj;
    WebViewPlug *_webViewPlugObj;
    TXQRLoginConfirmViewController *_txQRLoginPlugObj;
    QRCodeCommonBizPlug *_commonBizPlug;
    NearFilePlug *_nearFilePlugObj;
    C2BAudioPlug *_c2bAudioPlug;
    NSMutableDictionary *_Plugs;
    id _WloginSdkObj;
    NSString *_qrcodeResult;
    int _xo;
    _Bool _isFromQRCodeActionItem;
    MQQRCodeReaderViewController *_qrcodeReaderViewController;
}

+ (id)GetCodeReadControllerByImageView:(id)arg1;
+ (id)GetCodeReadControllerByApp:(id)arg1;
+ (id)GetCodeReadController;
+ (id)GetCodeReadFirstController:(unsigned long long)arg1;
@property(nonatomic) _Bool isFromQRCodeActionItem; // @synthesize isFromQRCodeActionItem=_isFromQRCodeActionItem;
@property(nonatomic) __weak MQQRCodeReaderViewController *qrcodeReaderViewController; // @synthesize qrcodeReaderViewController=_qrcodeReaderViewController;
- (void).cxx_destruct;
- (void)defaultHandleData:(id)arg1;
- (void)plugHandleData:(id)arg1;
- (void)doSchemeURLAction:(id)arg1 serverURL:(id)arg2 urlLevel:(int)arg3;
- (void)doURLAction:(id)arg1 urlLevel:(int)arg2;
- (id)PlugRequest:(unsigned long long)arg1;
- (int)qrcodeReadResultWithViewController:(id)arg1 result:(_Bool)arg2 qrcodeStr:(id)arg3;
- (_Bool)scanResultIsNearFile:(id)arg1;
- (_Bool)isQRCodeReadControllerAppear;
- (id)GetWloginSdk;
- (void)SetWloginSdk:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) QRCodeCommonBizPlug *commonBizPlug; // @dynamic commonBizPlug;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NearFilePlug *nearFilePlugObj; // @dynamic nearFilePlugObj;
@property(readonly) Class superclass;
@property(retain, nonatomic) TXBizPlug *txBizPlugObj; // @dynamic txBizPlugObj;
@property(retain, nonatomic) TXQRLoginConfirmViewController *txQRLoginPlugObj; // @dynamic txQRLoginPlugObj;
@property(retain, nonatomic) WebViewPlug *webViewPlugObj; // @dynamic webViewPlugObj;

@end

