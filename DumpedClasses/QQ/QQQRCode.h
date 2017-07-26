//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TCQRCodeTextRequestHelper;

@interface QQQRCode : NSObject
{
    TCQRCodeTextRequestHelper *_qrcodeTextHelper;
    CDUnknownBlockType _qrcodeImageCallback;
}

+ (id)RestartReadQRCode:(id)arg1;
+ (id)handleDecodeQRCodeImageDelay:(id)arg1;
+ (id)handleDecodeQRCodeImage:(id)arg1;
+ (id)queryComponentsOfURL:(id)arg1;
+ (id)getMQQRCodeBizUrl:(id)arg1;
+ (id)dealOtherAppQRCodeResultDelay:(id)arg1;
+ (void)dealOtherAppQRCodeResult:(id)arg1;
+ (id)createQRCodeImage:(id)arg1;
+ (id)generateQRCode:(id)arg1;
+ (id)readQRCode:(id)arg1;
+ (id)GetQrcodeLogoutManagerController;
+ (id)doRequest:(id)arg1;
+ (id)GetInstance;
@property(copy, nonatomic) CDUnknownBlockType qrcodeImageCallback; // @synthesize qrcodeImageCallback=_qrcodeImageCallback;
@property(retain, nonatomic) TCQRCodeTextRequestHelper *qrcodeTextHelper; // @synthesize qrcodeTextHelper=_qrcodeTextHelper;
- (void).cxx_destruct;
- (id)dispatch:(id)arg1;
- (id)init;

@end

