//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MQzoneShareHelper : NSObject
{
}

+ (void)saveAndShareToQzoneMood:(id)arg1 andCurrentViewController:(id)arg2;
+ (void)shareToQzoneMoodWithModel:(id)arg1 andCurrentViewController:(id)arg2 supportDraft:(_Bool)arg3;
+ (void)shareToQzoneMoodWithAsset:(id)arg1 andCurrentViewController:(id)arg2;
+ (void)shareToQzoneMood:(id)arg1 andCurrentViewController:(id)arg2;
+ (void)shareToQQWithImagePath:(id)arg1 andQQChatPhoto:(id)arg2 andCurrentViewController:(id)arg3;
+ (void)shareToQQWithImagePath:(id)arg1 andQQChatPhoto:(id)arg2 andCurrentViewController:(id)arg3 isPush:(_Bool)arg4 delegate:(id)arg5;
+ (void)shareToQQWithImage:(id)arg1 andCurrentViewController:(id)arg2;
+ (void)shareTOQQ:(id)arg1 videoUrl:(id)arg2 title:(id)arg3 summary:(id)arg4 image:(id)arg5 appId:(unsigned int)arg6 shareOutURL:(id)arg7 previewImageURL:(id)arg8 fromController:(id)arg9 isPushInViewController:(_Bool)arg10;
+ (int)shareToWechatWithMediaObject:(id)arg1 Message:(id)arg2 thumb:(id)arg3 scene:(int)arg4;
+ (int)shareUrlToWeixin:(id)arg1 message:(id)arg2 andThumb:(id)arg3 scene:(int)arg4;
+ (int)shareImageToWeChat:(id)arg1 message:(id)arg2 andThumb:(id)arg3 scene:(int)arg4;
+ (int)shareToWechatWithType:(int)arg1 thumbImage:(id)arg2 scene:(int)arg3 param:(id)arg4;

@end

