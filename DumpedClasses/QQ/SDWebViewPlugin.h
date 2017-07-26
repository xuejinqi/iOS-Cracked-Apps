//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFAChooserDelegate.h"
#import "IMiniFileTransferDelegate.h"
#import "ISetDeviceVasFlagDelegate.h"
#import "QQApplePayManagerDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "SSOJsbridgeDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class DeviceObject, NSArray, NSDictionary, NSMutableArray, NSString, ProductInfo, QQWebShareActionSheet, QQWebViewController<SDWebViewPluginDelegate>, SDLightAppSettingInfo, SDScanManager;

@interface SDWebViewPlugin : NSObject <SSOJsbridgeDelegate, QQApplePayManagerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, QQMultiImagePickerControllerDelegate, IMiniFileTransferDelegate, UIAlertViewDelegate, ISetDeviceVasFlagDelegate, IFAChooserDelegate>
{
    NSArray *payRst;
    int _sendFileCount;
    QQWebViewController<SDWebViewPluginDelegate> *_viewController;
    NSDictionary *_extraDict;
    DeviceObject *_deviceInfo;
    NSString *_din;
    SDLightAppSettingInfo *_lightAppSetting;
    ProductInfo *_productInfo;
    QQWebShareActionSheet *_webShareActionSheet;
    NSDictionary *_shareObjectJson;
    NSDictionary *_paramDict;
    NSDictionary *_requestQuery;
    NSMutableArray *_sendFileSuccArray;
    NSMutableArray *_sendFileFailArray;
    NSMutableArray *_cookieArray;
    NSString *_sendFileCallback;
    SDScanManager *_sdcodeMgr;
    NSString *_goBindParam;
}

@property(retain, nonatomic) NSString *goBindParam; // @synthesize goBindParam=_goBindParam;
@property(retain, nonatomic) SDScanManager *sdcodeMgr; // @synthesize sdcodeMgr=_sdcodeMgr;
@property(retain, nonatomic) NSString *sendFileCallback; // @synthesize sendFileCallback=_sendFileCallback;
@property(nonatomic) int sendFileCount; // @synthesize sendFileCount=_sendFileCount;
@property(retain, nonatomic) NSMutableArray *cookieArray; // @synthesize cookieArray=_cookieArray;
@property(retain, nonatomic) NSMutableArray *sendFileFailArray; // @synthesize sendFileFailArray=_sendFileFailArray;
@property(retain, nonatomic) NSMutableArray *sendFileSuccArray; // @synthesize sendFileSuccArray=_sendFileSuccArray;
@property(retain, nonatomic) NSDictionary *requestQuery; // @synthesize requestQuery=_requestQuery;
@property(retain, nonatomic) NSDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(retain, nonatomic) NSDictionary *shareObjectJson; // @synthesize shareObjectJson=_shareObjectJson;
@property(retain, nonatomic) QQWebShareActionSheet *webShareActionSheet; // @synthesize webShareActionSheet=_webShareActionSheet;
@property(retain, nonatomic) ProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) SDLightAppSettingInfo *lightAppSetting; // @synthesize lightAppSetting=_lightAppSetting;
@property(retain, nonatomic) NSString *din; // @synthesize din=_din;
@property(retain, nonatomic) DeviceObject *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSDictionary *extraDict; // @synthesize extraDict=_extraDict;
@property(nonatomic) __weak QQWebViewController<SDWebViewPluginDelegate> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)setStartDate;
- (id)OCSDealUploadMiniFileDic:(id)arg1;
- (id)translateIPAddress;
- (void)invokeJsBridgeCallback:(id)arg1 argumentsFormat:(id)arg2 arguments:(char *)arg3;
- (void)invokeJsBridgeCallbackWithQuery:(id)arg1 argumentsFormat:(id)arg2;
- (id)buildCallbackArgumentStringWithFormat:(id)arg1 args:(char *)arg2;
- (void)executeJsCallback:(id)arg1 argmentsFormat:(id)arg2;
- (void)sendCallBack:(id)arg1 callbackId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

