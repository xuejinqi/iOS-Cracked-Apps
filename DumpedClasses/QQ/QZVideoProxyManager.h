//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseVideoProxyManager.h"

#import "QZTXVideoSDKDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, QZVideoInfo;

@interface QZVideoProxyManager : QZBaseVideoProxyManager <QZTXVideoSDKDelegate>
{
    QZVideoInfo *_videoInfo;
    NSMutableDictionary *_changeVkeyMutlDict;
    NSMutableArray *_h5PlayInfo;
    NSMutableDictionary *_cacheVideoDebugInfo;
    NSMutableDictionary *_cacheVideoDebugInfoSwitch;
}

+ (id)instance;
- (void).cxx_destruct;
- (id)getVideoDebugInfo:(id)arg1;
- (void)updateVideoDebugInfo:(id)arg1 fileId:(id)arg2;
- (void)qzoneVideoH5Callback:(id)arg1;
- (id)getApnStrWithType:(long long)arg1;
- (void)willCreatePlayIDWithParam:(id)arg1;
- (long long)buildSectionPlayId:(long long)arg1 fileId:(id)arg2 videoInfo:(id)arg3;
- (long long)stopAllPreLoad;
- (long long)resumeAllPreLoad;
- (long long)pauseAllPreLoad;
- (int)downloadVideo:(id)arg1 videoid:(id)arg2 duration:(int)arg3 delegate:(id)arg4;
- (_Bool)preLoadCommonVideo:(id)arg1;
- (_Bool)preLoadCanvasVideo:(id)arg1 videoid:(id)arg2 duration:(long long)arg3;
- (_Bool)preLoadFeedModel:(id)arg1;
- (void)reindexPreloadWithFeeds:(id)arg1 currentIndex:(long long)arg2;
- (void)h5StopAll;
- (void)h5SetPlayState:(id)arg1;
- (id)h5BuildPlayList:(id)arg1;
- (id)multCDNUrls:(id)arg1 videoInfo:(id)arg2;
- (long long)buildPlayID:(id)arg1 fileId:(id)arg2 savePath:(id)arg3 withFileType:(long long)arg4 withFileSize:(long long)arg5 withFileDuration:(long long)arg6 extraInfo:(id)arg7;
- (id)createFileId:(id)arg1 videoFormat:(id)arg2 videoUrl:(id)arg3;
- (void)enterBackground:(id)arg1;
- (_Bool)videoClipIsCompleteOnDisk:(id)arg1 withClipNo:(int)arg2;
- (_Bool)hasCacheWithFileId:(id)arg1 withClipNo:(int)arg2;
- (long long)getClipFileSizeOnDisk:(id)arg1 videoFormat:(id)arg2 videoUrl:(id)arg3 withClipNo:(int)arg4;
- (void)QZTXVideoSDKDelegate:(long long)arg1 changePlayUrl:(id)arg2 videoInfo:(id)arg3 isRestartByChangeVkey:(_Bool)arg4;
- (void)onChangeVideoVKey:(long long)arg1 err:(id)arg2 svrCode:(long long)arg3 newUrl:(id)arg4 oldURL:(id)arg5;
- (void)processCallBack_StorageFileComplete:(id)arg1;
- (void)processCallBack_StorageFileConfict:(id)arg1;
- (void)processCallBack_StorageError:(id)arg1;
- (void)processCallBack_DownloadError:(id)arg1;
- (void)processCallBack_DownloadFinish:(id)arg1;
- (void)processCallBack_DownloadProgress:(id)arg1;
- (_Bool)testValidContentType:(id)arg1 whenEnvalidWithParams:(id)arg2;
- (void)processCallBack_GotFileSize:(id)arg1;
- (void)onQZVideoFirstKeyUpdate:(id)arg1;
- (_Bool)isSDKValid;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

