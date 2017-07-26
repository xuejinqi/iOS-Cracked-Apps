//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "UIAlertViewDelegate.h"

@class EmojiStoreUIAdapter, MagicEmojiAddBtn, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, PriorEmojiManager, QQLockDictionary;

@interface EmojiStore : NSObject <IEngineDispatchDelegate, UIAlertViewDelegate>
{
    NSString *_uin;
    NSMutableDictionary *_packageInfoDict;
    NSMutableDictionary *_magicPackageInfoDict;
    NSMutableArray *_qFaceSCPkgInfoDict;
    NSMutableDictionary *_reqSSODict;
    _Bool _createDirIfNotExist;
    NSMutableDictionary *_recommendFlagDict;
    _Bool _needSyncMagic;
    _Bool _canSyncMagic;
    int _wifiAutoDownloadStatus;
    PriorEmojiManager *_priorEmojiMgr;
    NSNumber *_canHideMagicTab;
    NSMutableArray *_magicPckDownloadQue;
    MagicEmojiAddBtn *_magicEmojiAddInfo;
    NSMutableDictionary *_pngFrameCache;
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _lastRecommendPackageId;
    NSArray *_emojiSeqArr;
    NSMutableArray *_systemEmojiCountArr;
    EmojiStoreUIAdapter *_aioDataSource_p;
    NSMutableDictionary *_dicQueue_png_enzip;
    NSMutableDictionary *_dicQueue_json_write;
    QQLockDictionary *_pngDownloadDic;
    NSMutableDictionary *_roamMagicPackages;
    NSMutableDictionary *_roamSmallPackages;
    NSMutableDictionary *_roamBigPackages;
    NSMutableArray *_roamEmojiSeqArr;
}

+ (void)setBlockStickerClearGuideDone;
+ (void)setEmojiStickerDetailGuideShown:(_Bool)arg1;
+ (void)setEmojiStickerClearGuideShown:(_Bool)arg1;
+ (void)setEmojiStickerGuideTipShown:(_Bool)arg1;
+ (void)setEmojiStickerGuideShown:(_Bool)arg1;
+ (_Bool)isNeedShowStickerDetailGuide;
+ (_Bool)isNeedShowStickerClearGuide;
+ (_Bool)isNeedBlockStickerClearGuide;
+ (_Bool)isNeedShowStickerRedPoint;
+ (_Bool)isNeedShowStickerGuideTip;
@property(retain, nonatomic) NSMutableArray *roamEmojiSeqArr; // @synthesize roamEmojiSeqArr=_roamEmojiSeqArr;
@property(retain, nonatomic) NSMutableDictionary *roamBigPackages; // @synthesize roamBigPackages=_roamBigPackages;
@property(retain, nonatomic) NSMutableDictionary *roamSmallPackages; // @synthesize roamSmallPackages=_roamSmallPackages;
@property(retain, nonatomic) NSMutableDictionary *roamMagicPackages; // @synthesize roamMagicPackages=_roamMagicPackages;
@property(nonatomic) QQLockDictionary *pngDownloadDic; // @synthesize pngDownloadDic=_pngDownloadDic;
@property(retain, nonatomic) NSMutableDictionary *dicQueue_json_write; // @synthesize dicQueue_json_write=_dicQueue_json_write;
@property(retain, nonatomic) NSMutableDictionary *dicQueue_png_enzip; // @synthesize dicQueue_png_enzip=_dicQueue_png_enzip;
@property(retain, nonatomic) EmojiStoreUIAdapter *aioDataSource_p; // @synthesize aioDataSource_p=_aioDataSource_p;
@property(nonatomic) int wifiAutoDownloadStatus; // @synthesize wifiAutoDownloadStatus=_wifiAutoDownloadStatus;
@property(retain, nonatomic) NSMutableArray *systemEmojiCountArr; // @synthesize systemEmojiCountArr=_systemEmojiCountArr;
@property(retain, nonatomic) NSArray *emojiSeqArr; // @synthesize emojiSeqArr=_emojiSeqArr;
@property(nonatomic) long long lastRecommendPackageId; // @synthesize lastRecommendPackageId=_lastRecommendPackageId;
@property(nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *pngFrameCache; // @synthesize pngFrameCache=_pngFrameCache;
@property(retain, nonatomic) MagicEmojiAddBtn *magicEmojiAddInfo; // @synthesize magicEmojiAddInfo=_magicEmojiAddInfo;
@property(retain, nonatomic) NSMutableArray *magicPckDownloadQue; // @synthesize magicPckDownloadQue=_magicPckDownloadQue;
@property(retain, nonatomic) NSNumber *canHideMagicTab; // @synthesize canHideMagicTab=_canHideMagicTab;
@property(retain, nonatomic) PriorEmojiManager *priorEmojiMgr; // @synthesize priorEmojiMgr=_priorEmojiMgr;
@property(nonatomic) _Bool canSyncMagic; // @synthesize canSyncMagic=_canSyncMagic;
@property(nonatomic) _Bool needSyncMagic; // @synthesize needSyncMagic=_needSyncMagic;
- (void)dealloc;
- (void)getPNGImagesFromPath:(id)arg1 imageView:(id)arg2 retNum:(long long)arg3 needAnimation:(_Bool)arg4 packageId:(long long)arg5;
- (void)getPNGImagesFromPath:(id)arg1 imageView:(id)arg2 packageId:(long long)arg3;
- (id)getPNGRetImage:(id)arg1 retNum:(long long)arg2 packageId:(long long)arg3;
- (unsigned long long)getFreeDiskSpace;
- (id)teaDecryptECB:(id)arg1 keyData:(id)arg2;
- (id)teaDecryptECB:(id)arg1 key:(id)arg2;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)onNetworkStateChanged:(id)arg1;
- (void)loader:(id)arg1 didUpdateStatus:(long long)arg2 userData:(id)arg3;
- (long long)priorityForLoader:(id)arg1;
- (void)downloadCloudEmoji:(id)arg1 keyword:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)responseOnEmojiKeywordSearch:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)requestCloudEmojiWithKeyword:(id)arg1 existEmojiIDs:(id)arg2 maxEmojiIDs:(id)arg3;
- (void)responseOnEmojiSort:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)responseOnEmojiForwardAuth:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)requestEmojiForwardAuth:(id)arg1;
- (void)responseOnEmojiCollectAuth:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)requestEmojiCollectAuth:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showCustomFaceOverflowAlertView;
- (void)addMarketFaceData:(id)arg1;
- (_Bool)addSelfImage:(id)arg1;
- (void)addFileImage:(id)arg1;
- (_Bool)isMantuFace:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)sendWupBuffer:(struct CPBMessageEncoder *)arg1 cmd:(id)arg2 subCmd:(unsigned int)arg3 context:(id)arg4 timeOut:(int)arg5;
- (void)responseOnAddSystemEmoji:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)requestAddSystemEmoji;
- (void)deletePackagesResource:(id)arg1;
- (void)responseOnPackageRemoved:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)requestPackageRemoved:(id)arg1;
- (void)packageKeysDidReceived:(id)arg1;
- (void)responseOnPackageEmojiKeys:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)requestPackageEmojiKeys:(id)arg1;
- (id)parseMagicEmojiPakcageInfo:(struct CPBMessageDecoder *)arg1;
- (id)parseEmojiPakcageInfo:(struct CPBMessageDecoder *)arg1;
- (void)packageInfosDidReceived:(id)arg1;
- (void)dealEmojiSeqBigEmoji:(id)arg1 magic:(id)arg2;
- (void)responseOnPackageInfos:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (_Bool)requestPackageDowload:(unsigned int)arg1;
- (void)reportEmojiPackagesSequence:(id)arg1;
- (_Bool)requestPackageInfosBeginWithSegment:(int)arg1 context:(id)arg2;
- (_Bool)requestPackageInfosBeginWithSegment:(int)arg1;
- (void)requestPackageInfosForceUpdateForEmojiManager;
- (void)requestPackageInfos:(_Bool)arg1;
- (void)cleanEmojiPackageInfos;
- (void)removeEmojiPackages:(id)arg1;
- (void)insertEmojiPackage:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isNeedShowStickerGuide;
- (void)respGetDownloadFlagsByNum:(char *)arg1 dataLen:(int)arg2 seq:(int)arg3;
- (void)requestGetEmojiDownloadFlagsByNum:(long long)arg1;
- (void)clearRecommendShowCount:(id)arg1;
- (int)getRecommendRuleId;
- (void)setHasShowRecommendAnimation:(unsigned long long)arg1;
- (_Bool)shouldShowRecommendAnimation:(unsigned long long)arg1;
- (void)dismissRecommendPackageRedPoint:(unsigned long long)arg1;
- (_Bool)recommendPackageIsShowRedPoint:(unsigned long long)arg1;
- (void)addRecommendPackageShowCount:(unsigned long long)arg1;
- (int)getRecommendPackageShowCount:(unsigned long long)arg1;
- (_Bool)isFirstDismissTabRedPoint;
- (void)setFirstDismissTabRedPoint;
- (_Bool)isRecommendTabRedPointShowed;
- (void)setRecommendTabRedPointShowed:(_Bool)arg1;
- (void)dismissRecommendTabRedPointShowFlag;
- (_Bool)getRecommendTabRedPointShowFlag;
- (int)getRecommendPackageMaxShowCount;
- (int)getRecommendPackageShowNum;
- (void)saveRecommendPackageFlagConfig;
- (id)makeRecommendPackageInfoByPB:(struct CPBMessageDecoder *)arg1;
- (void)responseOnRecommendReceived:(struct CPBMessageDecoder *)arg1 ret:(int)arg2 context:(id)arg3;
- (void)requestRecommendPackages;
- (void)requestRecommendPackagesIfNeeds;
- (int)recommendPackageShowIndex:(id)arg1;
- (_Bool)isRecommendPackage:(id)arg1;
- (_Bool)requestEmojiThumbnailDownload:(id)arg1 forType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getEmojiThumbnailLocalPath:(id)arg1;
- (void)downloademoji:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadMagicEmoji:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refushEmojiInfo:(id)arg1 FromJsonWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)requestEmojiDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)requestEmojiDownload:(id)arg1 key:(id)arg2 packageId:(unsigned long long)arg3 isMagic:(_Bool)arg4 rscType:(int)arg5 width:(unsigned long long)arg6 height:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
- (_Bool)getEmojiLocalPath:(id)arg1;
- (_Bool)fileExistsAtRecv:(id)arg1;
- (void)reportDownloadEventForRDM:(id)arg1;
- (void)updateMagicIndex;
- (void)uploadSequence:(id)arg1;
- (void)updatePackageStatusWhenDownloadEnd:(id)arg1;
- (void)updatePackageDownloadProgress:(id)arg1 count:(int)arg2;
- (void)finishDownloadEmoji:(id)arg1 package:(id)arg2 statusCode:(int)arg3 count:(int)arg4;
- (void)downloadEmoji:(id)arg1 package:(id)arg2 count:(int)arg3;
- (void)stopDownloadsForAllPackages;
- (void)stopDownloadEmojisInPackage:(id)arg1;
- (_Bool)isEmojiInPackage:(unsigned int)arg1;
- (_Bool)isPackageCompleted:(id)arg1;
- (_Bool)doStartDownloadEmojisInPackage:(id)arg1;
- (void)startDownloadEmojisInPackage:(id)arg1;
- (void)wifiAutoDownloadPackage;
- (void)requestEmojiPackageBrief:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)startDownloadRecommendImage:(id)arg1 forType:(int)arg2 downloadUrl:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startDownloadImage:(id)arg1 forType:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getGrayPreviewImage:(id)arg1 Withcompletion:(CDUnknownBlockType)arg2;
- (unsigned int)getPackageVersion:(id)arg1;
- (id)imagePathForType:(int)arg1;
- (void)emojiPackageDownloadFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (void)emojiPackageDidDownload:(id)arg1 jsonValue:(id)arg2;
- (void)dealWithEmojiKeyWords:(id)arg1 jsonValue:(id)arg2;
- (id)getEmojiSupportSize:(id)arg1;
- (void)dealPackageJson:(id)arg1 oldJson:(id)arg2;
- (id)getJsonDataFromLocal:(unsigned long long)arg1;
- (void)saveJsonData:(unsigned long long)arg1 info:(id)arg2;
- (void)removeJsonQueueName:(long long)arg1;
- (id)getQueue_json_write_WithPackageId:(long long)arg1 needCreate:(_Bool)arg2;
- (void)downloadEmojiPackageJsonForRoam:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dowloadEmojiPackageJson:(id)arg1 forRoam:(_Bool)arg2;
- (void)convertToPackage:(id)arg1 json:(id)arg2;
- (void)downloadEmojiJson:(unsigned int)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)emojiRecvDirPath;
- (id)emojiRecvThumbFilePath:(id)arg1;
- (id)emojiRecvSoundPath:(id)arg1;
- (id)emojiRecvFilePath:(id)arg1;
- (id)emojiPackageBriefFilePath:(unsigned long long)arg1;
- (id)emojiPackageDirPath:(id)arg1;
- (id)emojiPackageDirPathWithId:(unsigned long long)arg1;
- (id)systememojiCountFilePath;
- (id)emojiStoreConfigFilePath;
- (id)emojiStoreDirPath;
- (void)setTimestamp:(unsigned int)arg1;
- (unsigned int)timestamp;
- (id)getEmojiPackageWithId:(unsigned long long)arg1;
- (void)updateKeywordWithEmojiInfo:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)removeUnzipQueueName:(long long)arg1;
- (id)getQueue_png_enzipWithPackageId:(long long)arg1 needCreate:(_Bool)arg2;
- (id)staticRecommendPackageDict;
- (id)recommendPackages;
- (id)packagesAll;
- (unsigned long long)magicIndex;
- (id)aioDataSource;
- (void)syncSystemEmojisCountToLocal;
- (void)addExpressionEmojiType:(unsigned long long)arg1 emojiID:(unsigned long long)arg2;
- (void)saveLastRequestTime;
- (_Bool)canRequestWithLastTime;
- (void)startCheckRequestSystemEmoji;
- (void)syncPackageInfosToLocal;
- (void)initSystemEmojiCount;
- (void)initPackageInfos;
- (void)clearRoamTempData;
- (void)initEmojiSeq;
- (id)initWithUin:(id)arg1;
- (id)init;
- (id)loadLastModified;
- (void)storeLastModfied:(id)arg1;
- (void)requestMagicActivityWithComplete:(CDUnknownBlockType)arg1;
- (void)updateEmojiPackageJson:(id)arg1;
- (void)startUpdateEmojisInPackage:(id)arg1;
- (id)emojiStoreSmallPackageDirPath:(unsigned long long)arg1;
- (void)downloadSmallEmoji:(id)arg1 package:(id)arg2 count:(int)arg3;
- (void)doStartUpdateSmallEmojisInPackage:(id)arg1;
- (_Bool)doStartDownloadSmallEmojisInPackage:(id)arg1;
- (_Bool)isSmallEmojiPackageCompleted:(id)arg1;
- (void)downloadSmallEmojiPackage:(id)arg1 jsonValue:(id)arg2;
- (void)downloadSmallEmojiPackageJson:(unsigned int)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)loadSmallEmoji:(id)arg1 type:(unsigned long long)arg2 packageId:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setNeedsRetryDownload:(id)arg1;
- (void)makeCustomFaceThumb:(id)arg1;
- (_Bool)downLoadNextRoam;
- (void)updateRoamCollectionDownloadProgress:(id)arg1 package:(id)arg2 isSuccess:(_Bool)arg3;
- (void)downloadRoamPic:(id)arg1;
- (void)downloadEmojiCollectionResource:(id)arg1 package:(id)arg2;
- (void)downloadRoamMagicEmoji:(id)arg1 package:(id)arg2;
- (void)downloadJsonSuccess:(id)arg1 roamInfo:(id)arg2;
- (void)downloadRoamEmoji:(id)arg1;
- (id)getExistEmojiHistoryInfo:(id)arg1;
- (id)getH5HtmlPathById:(unsigned int)arg1;
- (unsigned int)getH5ChildIdById:(unsigned int)arg1;
- (_Bool)loadH5PackageJson:(id)arg1;
- (_Bool)isH5PackageAllCompleteInStore:(long long)arg1;
- (_Bool)isH5PackageFileComplete:(unsigned int)arg1;
- (_Bool)isH5PackageZipComplete:(long long)arg1;
- (_Bool)isPackageZipComplete:(long long)arg1;
- (void)magicPackageInfosDidReceived:(id)arg1;
- (void)startdownloadMagicPackage:(id)arg1 addToStore:(_Bool)arg2;
- (void)startdownloadMagicPackage:(id)arg1;
- (long long)magicEmojiIndexForId:(unsigned long long)arg1;
- (void)requestH5EmojiDownload:(id)arg1 key:(id)arg2 packageId:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestMagicEmojiDownload:(id)arg1 key:(id)arg2 packageId:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleDownlaodSuccess:(unsigned long long)arg1;
- (void)handleDownlaodFailed:(unsigned long long)arg1;
- (void)doStartDownloadMagicEmojisInPackage:(id)arg1;
- (void)stopDownloadMagicFaceEmojiSCPkg:(id)arg1;
- (id)getMagicFaceEmojiPkgWithId:(unsigned long long)arg1;
- (void)putMagicFirst;
- (void)addMagicEmoji:(id)arg1;
- (void)syncMagicPackageInfosToLocal;
- (void)sortMagicPackages;
- (void)startDownloadH5EmojisInPackage:(unsigned long long)arg1 emojiInfo:(id)arg2 callBack:(CDUnknownBlockType)arg3 isAddToStore:(_Bool)arg4;
- (void)startDownloadMagicEmojisInPackage:(unsigned long long)arg1 emojiInfo:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)loadExistsMagicEmojiPackage:(id)arg1;
- (_Bool)isMagicEmojiResExist:(unsigned long long)arg1;
- (id)h5MagicEmojiResDirPathWithId:(unsigned long long)arg1;
- (id)magicEmojiResDirPathWithId:(unsigned long long)arg1;
- (void)sortMagicEmojiPackages:(id)arg1;
- (void)removeEmojiMagicPackages:(id)arg1;
- (id)magicPackages;
- (id)magicPackagesAll;
- (void)initMagicPkgInfos;
- (id)emojiStoreMagicConfigFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

