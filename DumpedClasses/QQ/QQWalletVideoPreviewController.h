//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QQRichMediaPickerDelegate.h"

@class NSArray, NSDictionary, NSLock, NSMutableArray, NSString, NSTimer, QQWalletVideoMediaPicker, QQWebViewController, TBExtendedHitButton, UIView;

@interface QQWalletVideoPreviewController : UIViewController <QQRichMediaPickerDelegate>
{
    NSDictionary *_webQuery;
    NSDictionary *_monitorQuery;
    QQWalletVideoMediaPicker *_mediaPicker;
    int _triggerType;
    NSTimer *_monitorTimer;
    QQWebViewController *_monitorCallbackWebViewVC;
    QQWebViewController *_monitorWebViewVC;
    NSLock *_lock;
    _Bool _isHasFaceFlush;
    NSArray *_faceFeatures;
    NSDictionary *_faceFeature;
    int _faceStat;
    long long _defaultCameraDevicePosition;
    TBExtendedHitButton *_cancelButton;
    NSMutableArray *_faceMarkViews;
    _Bool _authCamera;
    _Bool _authMic;
    _Bool _immediatelyCallbackAfterDetecting;
    long long _faceDetectedFrameCount;
    UIView *_cameraPreviewView;
}

+ (void)setCurrentInstanceHandler:(id)arg1;
+ (id)currentInstanceHandler;
- (void)setMediaPickerMediaType;
- (void)checkCameraAuthorize;
- (void)dismiss;
- (_Bool)isCGSizeType:(id)arg1;
- (_Bool)isCGRectType:(id)arg1;
- (id)getFeaturePoint:(id)arg1 scale:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

