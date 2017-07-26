//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface QZSOCPluginManager : NSObject
{
    NSMutableDictionary *_downloadingPlugins;
    NSMutableArray *_timingArr;
    NSMutableArray *_pluginArr;
    NSMutableDictionary *_pluginClientVersionCache;
    NSObject<OS_dispatch_queue> *_handleFileQueue;
}

+ (id)getInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleFileQueue; // @synthesize handleFileQueue=_handleFileQueue;
- (void).cxx_destruct;
- (unsigned long long)getPluginTypeBypluginId:(id)arg1;
- (id)getPluginClassName:(id)arg1;
- (id)getTempMainPluginFilePathByID:(id)arg1;
- (id)getMainPluginFilePathByID:(id)arg1;
- (_Bool)isKeyExistInpluginCfgInfo:(id)arg1 withPluginDicKeyType:(unsigned long long)arg2;
- (_Bool)isNeedDebugInpluginCfgInfo:(id)arg1;
- (_Bool)isValidSOCPlugin:(id)arg1 pluginDir:(id)arg2;
- (id)defaultInfoForPlugin:(id)arg1 withInfoType:(unsigned long long)arg2;
- (id)getPluginInfoArr;
- (void)setPluginDownloadState:(id)arg1 isDownloading:(_Bool)arg2;
- (_Bool)isPluginDownloading:(id)arg1;
- (_Bool)downloadDefaultPkg:(id)arg1 dic:(id)arg2;
- (long long)numberValueForString:(id)arg1;
- (_Bool)isLocalOlderThanDefault:(id)arg1;
- (void)preDownloadDefaultPkg;
- (void)downloadPlugin:(id)arg1 fForce:(_Bool)arg2 dic:(id)arg3;
- (void)checkAndDownloadPlugin:(id)arg1 dic:(id)arg2;
- (void)forceDownloadPlugin:(id)arg1 dic:(id)arg2;
- (id)versionInfo;
- (void)syncPluginVersion;
- (void)synchClientVersion:(id)arg1;
- (_Bool)isClientVersionChanged:(id)arg1;
- (void)clearDecryptScripts:(id)arg1;
- (void)movePluginAfterDownload:(id)arg1;
- (void)copyAndUnzip:(id)arg1 zipPath:(id)arg2 toPath:(id)arg3;
- (void)moveUpdatedPlugins;
- (void)copyResourcePluginToRunningDir;
- (_Bool)createDirectoryAtPath:(id)arg1;
- (_Bool)decryptPluginSOCAndSave:(id)arg1;
- (_Bool)isSOCKeyExsit:(id)arg1;
- (_Bool)patchSocScripts:(id)arg1;
- (id)pluginVersionInDownloadDir:(id)arg1;
- (id)pluginVersionInDefaultDir:(id)arg1;
- (id)pluginInRunning:(id)arg1 configContentType:(unsigned long long)arg2;
- (_Bool)deleteSOCPluginAsync:(id)arg1;
- (_Bool)deleteFileAsync:(id)arg1;
- (_Bool)isSOCPlugin:(id)arg1;
- (id)getSOCPluginDirById:(id)arg1 withDirFunction:(unsigned long long)arg2;
- (id)getTempSOCPluginRunningDirById:(id)arg1;
- (id)getSOCPluginDirById:(id)arg1;
- (id)getSOCPluginDirWithDirType:(unsigned long long)arg1;
- (void)checkIfDuplicateInPlist;
- (void)doUnfinishedTask;
- (id)init;

@end

