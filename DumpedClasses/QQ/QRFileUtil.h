//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QRFileUtil : NSObject
{
}

+ (_Bool)removeItemAtPath:(id)arg1;
+ (_Bool)zipDecode:(id)arg1:(id)arg2;
+ (id)getGCDQueue;
+ (int)unzipFile:(int)arg1:(char *)arg2:(struct _cxFile)arg3:(struct _cxFile)arg4;
+ (_Bool)moveFileFrom:(id)arg1 toDestinationPath:(id)arg2 overwrite:(_Bool)arg3;
+ (_Bool)isFileExistAtPath:(id)arg1;
+ (void)removePath:(id)arg1;
+ (id)getRelativePathToHome:(id)arg1;
+ (void)checkConfigPathIsExist;
+ (id)currentUserSpacePath;
+ (id)currentReadCenterPath;
+ (id)currentUserSpacePathAndCheckIsExist;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (_Bool)osNeedBackup;
+ (id)cacheDir;
+ (id)docPath;
+ (id)tempPath;
+ (id)homePath;

@end

