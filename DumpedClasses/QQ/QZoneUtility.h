//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZSkStoreLoadDelegate.h"

@class NSMutableArray, NSString;

@interface QZoneUtility : NSObject <QZSkStoreLoadDelegate>
{
    NSMutableArray *_preLoadedAppStore;
    NSString *_QQVersionNum;
}

+ (void)goToh5DownLoadQzone:(id)arg1;
+ (struct CGRect)convertToWindowWithView:(id)arg1;
+ (id)getHDVideoCompressParam;
+ (id)getVideoCompressParam;
+ (void)runOCSPluginInvokeService:(id)arg1 withOCSPluginId:(id)arg2 isNeedShowDownloadVC:(_Bool)arg3 fromeNavi:(id)arg4 sucessBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
+ (void)showSendBoxViewController:(id)arg1;
+ (void)openQZPhotoGifRecommendPlugin:(id)arg1 sucessBlock:(CDUnknownBlockType)arg2;
+ (void)openQZPhotoGifRecommendPlugin:(id)arg1 sucessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (void)openQZMoodQuickPublishedPlugin:(id)arg1 sucessBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
+ (struct CGRect)mainScreenBounds;
+ (id)currentNetTypeForReport;
+ (id)convertRouteIPType:(long long)arg1;
+ (id)convertAPNType:(long long)arg1;
+ (_Bool)isHLSFromat:(id)arg1;
+ (void)addShadowToView:(id)arg1 withOpacity:(float)arg2 shadowRadius:(double)arg3 andCornerRadius:(double)arg4;
+ (id)saveImageExifInfo:(id)arg1 exifInfo:(id)arg2;
+ (id)readImageExifInfo:(id)arg1;
+ (unsigned long long)gettickcount;
+ (id)getCustomDateWithHour:(long long)arg1;
+ (_Bool)isBetweenFromHour:(long long)arg1 toHour:(long long)arg2;
+ (long long)onMarkFaceNotify:(id)arg1 feeds:(id)arg2;
+ (_Bool)shouldUseNewVideoURL:(id)arg1;
+ (_Bool)isCanAutoPlayVideo:(id)arg1 feedModel:(id)arg2;
+ (_Bool)canAutoPlayGifInSetting;
+ (_Bool)canAutoPlayVideoInSetting;
+ (long long)jumpFrom:(id)arg1 schema:(id)arg2 url:(id)arg3;
+ (void)jumpToFontStore:(id)arg1;
+ (void)jumpToCustomVipWithCustomVipId:(long long)arg1 viewController:(id)arg2;
+ (void)jumpToAlbumTemplatePreview:(id)arg1 itemid:(id)arg2;
+ (void)jumpToAlbumTemplateStore:(id)arg1 albumid:(id)arg2 entry:(id)arg3;
+ (void)jumpToCoverMall:(id)arg1 from:(id)arg2 hostUin:(long long)arg3;
+ (void)jumpToMedalProfile:(id)arg1 feedModel:(id)arg2;
+ (void)jumpToSweetVipMainPage:(id)arg1 from:(id)arg2 uin:(long long)arg3 askVip:(_Bool)arg4;
+ (void)jumpToVipProfile:(id)arg1;
+ (void)jumpToGiftList:(id)arg1 sended:(long long)arg2 model:(id)arg3;
+ (void)jumpToAvatarCoverStoreWithCateId:(long long)arg1 viewController:(id)arg2 from:(id)arg3 hostUin:(long long)arg4;
+ (void)jumpToAvatarDecoWithDecoId:(long long)arg1 decoUrl:(id)arg2 decoType:(long long)arg3 viewController:(id)arg4 from:(id)arg5 hostUin:(long long)arg6;
+ (void)jumpToAvatarCoverStoreWithCoverId:(long long)arg1 viewController:(id)arg2 from:(id)arg3 hostUin:(long long)arg4;
+ (void)jumpToAvatarCoverStore:(id)arg1 from:(id)arg2 hostUin:(long long)arg3;
+ (void)jumpToFamousHomepage:(id)arg1 uin:(long long)arg2 nickname:(id)arg3;
+ (void)jumpToFeedCoverWithCateId:(long long)arg1 viewController:(id)arg2 refer:(id)arg3;
+ (void)jumpToFeedCoverWithCoverId:(long long)arg1 viewController:(id)arg2 refer:(id)arg3;
+ (void)jumpToFeedCover:(id)arg1 refer:(id)arg2;
+ (void)jumpToSingIn:(id)arg1 url:(id)arg2;
+ (id)getAntispamInfo:(id)arg1 cell:(id)arg2;
+ (id)getAntispamInfo:(id)arg1;
+ (id)extractPushSchema:(id)arg1;
+ (id)filterSecurityInfoOfUrl:(id)arg1;
+ (void)handleOpenWebView:(id)arg1 viewController:(id)arg2 withUrl:(id)arg3 andReportName:(id)arg4;
+ (void)handleOpenPhotoWall:(long long)arg1 viewController:(id)arg2;
+ (void)handleOpenUserVisitorList:(long long)arg1 viewController:(id)arg2;
+ (void)handleOpenVisitorList:(long long)arg1 feedModel:(id)arg2 viewController:(id)arg3;
+ (id)appStoreIDFromUrl:(id)arg1;
+ (id)storeController:(id)arg1 appid:(id)arg2 cookie:(id)arg3 isPreload:(_Bool)arg4;
+ (_Bool)openAppstoreLinkInApp:(id)arg1 withAppId:(id)arg2 viewController:(id)arg3;
+ (_Bool)openAppstoreLinkInApp:(id)arg1 withAppId:(id)arg2 withParam:(id)arg3 viewController:(id)arg4;
+ (id)encodeBase62:(id)arg1;
+ (id)videoFilePathWithClientkey:(id)arg1;
+ (id)truncatesTheChineseStr:(id)arg1 maxChineseCount:(unsigned long long)arg2 addDot:(_Bool)arg3;
+ (_Bool)isFileDirectoryExistAndNoEmpty:(id)arg1;
+ (id)instance;
+ (void)setPayExtCookies;
+ (id)imageWithDefaultOrientation:(id)arg1;
+ (id)imageWithDefaultOrientation:(id)arg1 curInterfaceOrientation:(long long)arg2 isCameraFront:(_Bool)arg3;
+ (id)clippedImage:(id)arg1 withSize:(struct CGSize)arg2 scale:(double)arg3 clipOption:(long long)arg4;
+ (id)screenShoot;
+ (id)resizeImage:(id)arg1 newSize:(struct CGSize)arg2;
@property(copy, nonatomic) NSString *QQVersionNum; // @synthesize QQVersionNum=_QQVersionNum;
@property(retain, nonatomic) NSMutableArray *preLoadedAppStore; // @synthesize preLoadedAppStore=_preLoadedAppStore;
- (void).cxx_destruct;
- (void)videoDebugInfo:(_Bool)arg1;
- (void)QZSkStoreViewController:(id)arg1 withStartTime:(double)arg2 andCookie:(id)arg3 loadComplete:(_Bool)arg4;
- (id)getDeviceInfo;
- (void)onMemWarning;
- (void)releaseQQAudioDeviceFromH5;
- (_Bool)requestQQAudioDeviceFromH5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

