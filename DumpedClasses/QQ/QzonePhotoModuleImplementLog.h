//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQMultiImagePickerControllerDelegate.h"
#import "QZPhotoModuleEngineInterfaceDelegate.h"

@class NSString;

@interface QzonePhotoModuleImplementLog : NSObject <QQMultiImagePickerControllerDelegate, QZPhotoModuleEngineInterfaceDelegate>
{
}

+ (id)sharedInstance;
- (void)likePhotoWithFeedModel:(id)arg1 from:(long long)arg2 userParam:(id)arg3;
- (void)addPhotoComment:(id)arg1 feedModel:(id)arg2 isPrivate:(_Bool)arg3;
- (id)urlWithoutDomainNorPoundSign:(id)arg1;
- (void)addAlbumComment:(id)arg1 feedModel:(id)arg2 isPrivate:(_Bool)arg3;
- (void)likeAlbumWithLikeKey:(id)arg1 isMyLiked:(_Bool)arg2;
- (void)saveImageToMem:(id)arg1 url:(id)arg2 clientKey:(id)arg3 clipper:(id)arg4;
- (id)makeKey:(long long)arg1 primaryKey:(id)arg2 subKey:(id)arg3 cmtID:(id)arg4;
- (_Bool)string:(id)arg1 hasContainStr:(id)arg2;
- (void)setAccountSettingWithPurgeItem:(id)arg1 withKey:(id)arg2;
- (id)getAccountSettingWithPurgeItem:(id)arg1;
- (void)handleOpenUrl:(id)arg1 backendOff:(_Bool)arg2 param:(id)arg3 viewController:(id)arg4 leftclickreturn:(_Bool)arg5;
- (void)handleOpenUrl:(id)arg1 backendOff:(_Bool)arg2 param:(id)arg3 viewController:(id)arg4 leftclickreturn:(_Bool)arg5 webStyle:(int)arg6 appendSid:(_Bool)arg7 presentMode:(_Bool)arg8;
- (id)fillUrl:(id)arg1 withParams:(id)arg2;
- (void)jumpToAlbumTemplatePreview:(id)arg1 itemid:(id)arg2;
- (void)jumpToAlbumTemplateStore:(id)arg1 albumid:(id)arg2 entry:(id)arg3;
- (_Bool)isDeviceLow4;
- (id)QQConfigStorageGlobalValueForKey:(id)arg1;
- (void)QQConfigStorageSetGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)QZoneWebViewControllerWith:(id)arg1 forStyle:(long long)arg2;
- (struct CGSize)QZoneText:(id)arg1 QZoneSizeWithFont:(id)arg2;
- (id)GAStretchableImage:(id)arg1 leftCapWidth:(long long)arg2 topCapHeight:(long long)arg3;
- (void)addTaskByModels:(id)arg1 batchId:(long long)arg2 scaleType:(long long)arg3;
- (long long)getCurrentModelScaleType;
- (long long)getCompressBatchID;
- (void)showLoginFailedWithReason:(id)arg1;
- (void)showLoadingTipsImmediately:(id)arg1;
- (void)showOverWindowWithMessage:(id)arg1 mode:(long long)arg2 dismissAfterDelay:(double)arg3;
- (void)showLoadingTips;
- (void)showFailedTipsWithText:(id)arg1;
- (void)showLoadingTips:(id)arg1 lockFullScreen:(_Bool)arg2 afterDelay:(double)arg3;
- (void)showState:(id)arg1 success:(_Bool)arg2;
- (_Bool)getImage:(id)arg1 clientKey:(id)arg2 delegate:(id)arg3;
- (void)cacheData:(id)arg1 forKey:(id)arg2 isResource:(_Bool)arg3 forCurrentUin:(_Bool)arg4;
- (id)loadDataForKey:(id)arg1 isResource:(_Bool)arg2 forCurrentUin:(_Bool)arg3;
- (id)photoUploadJobStatistics:(id)arg1;
- (long long)defaultIntervalForRetryCount:(long long)arg1;
- (_Bool)fakeUploadPhotosWithFeed:(id)arg1 withClientKey:(id)arg2;
- (void)saveClientKey:(id)arg1 url:(id)arg2;
- (void)saveClientKey:(id)arg1 urls:(id)arg2;
- (void)progressHudDismiss;
- (_Bool)isVip;
- (long long)yellowType;
- (long long)yellowLevel;
- (id)getNicknameByAccount:(long long)arg1;
- (id)loginUserNickName;
- (long long)getCurrentUin;
- (id)obtainWebView:(id)arg1;
- (void)runOCSPluginInvokeService:(id)arg1 withOCSPluginId:(id)arg2 isNeedShowDownloadVC:(_Bool)arg3 fromeNavi:(id)arg4 sucessBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (void)RDMEventTaskReport:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 reportImmediately:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

