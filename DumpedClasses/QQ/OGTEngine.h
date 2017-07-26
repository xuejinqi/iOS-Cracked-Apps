//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LYStorage, OGTConfigModel, QQLockDictionary;

@interface OGTEngine : NSObject
{
    QQLockDictionary *_tipsDic;
    LYStorage *_storage;
    int _xo;
    OGTConfigModel *_NotUseOutsideCurrentModel;
}

+ (id)GetInstance;
@property(retain, nonatomic) OGTConfigModel *currentModel; // @synthesize currentModel=_NotUseOutsideCurrentModel;
- (void).cxx_destruct;
- (id)getSubGrapTipNameByTask:(id)arg1;
- (void)initTipsWithTasks:(id)arg1;
- (void)loadTipsDataFromDisk;
- (void)saveTipsDataToDisk;
- (void)setTipsConfigWithScene:(long long)arg1 accostType:(int)arg2 qqChatModel:(id)arg3 param:(id)arg4;
- (id)getOperationTipToShowWithScene:(long long)arg1 accostType:(int)arg2 qqChatModel:(id)arg3;
- (void)saveTipDisplayedTimesInCurrentPeriod:(id)arg1;
- (id)getTipsWithSceneType:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)saveRandomWordings:(id)arg1;
- (void)saveModelToDisk:(id)arg1;
- (void)addRandomWordingsToCurrentModelWithTasks:(id)arg1;
- (void)asynloadRandomWordingsFinished:(id)arg1;
- (void)asynloadTasksFinished:(id)arg1;
- (void)asynloadRandomWordings;
- (void)asynloadConfigTasksWithTaskIDs:(id)arg1;
- (id)loadModelFromDiskForUin:(id)arg1;
- (void)downloadFinished;
- (void)downloadConfigFileWithUrl:(id)arg1 md5:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)needDownloadConfigFileWithUrlList:(id)arg1 MD5List:(id)arg2;
- (void)setConfigDownloaded:(_Bool)arg1 WithUrl:(id)arg2 md5:(id)arg3;
- (_Bool)configHasBeenDownloaded:(id)arg1 md5:(id)arg2;
- (void)redownloadFailedConfigFilesIfNeeded;
- (void)deleteAllConfigFile;
- (void)updateConfigFileWithUrlList:(id)arg1 MD5List:(id)arg2;
- (void)deleteConfigTasksWithIDList:(id)arg1;
- (void)resetConfigModelTasks:(id)arg1;
- (void)parseResponseObject:(id)arg1 withUrl:(id)arg2 MD5:(id)arg3;
- (id)configModelCopyFromEngine;
- (id)init;

// Remaining properties
@property(retain, nonatomic) LYStorage *storage; // @dynamic storage;
@property(retain, nonatomic) QQLockDictionary *tipsDic; // @dynamic tipsDic;

@end

