//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseVideoProxyManager.h"

@class NSMutableArray;

@interface FAVideoSDKProxyManager : QZBaseVideoProxyManager
{
    NSMutableArray *_delegateArray;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)processCallBack_StorageFileComplete:(id)arg1;
- (void)processCallBack_StorageFileConfict:(id)arg1;
- (void)processCallBack_StorageError:(id)arg1;
- (void)processCallBack_DownloadError:(id)arg1;
- (void)processCallBack_DownloadFinish:(id)arg1;
- (void)processCallBack_DownloadProgress:(id)arg1;
- (void)stopPreload:(int)arg1;
- (long long)buildPlayID:(id)arg1 fileId:(id)arg2 savePath:(id)arg3 withFileType:(long long)arg4 withFileSize:(long long)arg5 withFileDuration:(long long)arg6 extraInfo:(id)arg7;
- (int)startPlayWithUrl:(id)arg1 withFileID:(id)arg2 withFileSize:(long long)arg3 withSavePath:(id)arg4 cookie:(id)arg5;
- (int)startPreLoadWithUrl:(id)arg1 withFileID:(id)arg2 withFileSize:(long long)arg3 withSavePath:(id)arg4 cookie:(id)arg5;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (long long)sdkMaxCacheSize;
- (_Bool)sdkEnableCache;
- (id)init;

@end

