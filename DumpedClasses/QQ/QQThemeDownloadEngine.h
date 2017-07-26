//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSMutableArray, NSString;

@interface QQThemeDownloadEngine : NSObject <ISCListenerCallback, ISCBusinessCallback>
{
    NSMutableArray *_taskArrary;
    unsigned int _themeSuitId;
}

+ (id)getInstance;
- (void)uniLogUpload:(id)arg1 model:(id)arg2;
- (void)didDownloadFail:(id)arg1;
- (void)didDownloadSuccess:(id)arg1;
- (void)unZipThemePacket:(id)arg1;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (void)onProgress:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 progressCur:(unsigned long long)arg4 progressMax:(unsigned long long)arg5;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (id)themeZipPath:(id)arg1;
- (id)parseThemeId:(id)arg1;
- (void)themeDownloadTaskDone:(id)arg1;
- (_Bool)taskExist;
- (void)cancelThemeSuitDownloadH5:(unsigned int)arg1;
- (void)cancelThemeDownloadH5:(int)arg1;
- (void)cancelDownload:(id)arg1;
- (void)cancelAllDownload;
- (void)requestThemeDownload:(id)arg1;
- (void)requestThemeSuitDownload:(unsigned int)arg1 with:(id)arg2;
- (void)startDownload:(id)arg1;
- (id)getThemeCfgScid:(unsigned int)arg1;
- (_Bool)isThemeIdTaskExist:(int)arg1;
- (_Bool)isThemeTaskExist:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

