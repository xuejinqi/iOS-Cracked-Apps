//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MTMImageBaker : NSObject
{
    NSMutableDictionary *_imgToCache;
    NSMutableDictionary *_imgCache;
    NSMutableDictionary *_imgInfos;
    int _currentMapIndex;
    char *_imgMapBase;
    long long _imgMapLen;
    long long _pageSize;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)saveHotImgsAndInfos;
- (void)recordHotImg:(id)arg1 img:(id)arg2;
- (void)saveHotImgsWithMapIndex:(int)arg1 imgsContainer:(id)arg2 infosContainer:(id)arg3;
- (id)hotImg:(id)arg1;
- (char *)mapFile:(int)arg1 returnMapLen:(long long *)arg2;
- (void)recordHotImgInfo:(id)arg1 name:(id)arg2 imgIndex:(int)arg3 width:(double)arg4 height:(double)arg5;
- (_Bool)hotImgInfo:(id)arg1 returnImgIndex:(int *)arg2 returnWidth:(double *)arg3 returnHight:(double *)arg4;
- (void)loadHotImgInfos;
- (void)saveHotImgInfosWithMapIndex:(int)arg1 infosContainer:(id)arg2;
- (void)checkAppVersionChanged;
- (id)imgMapPathName:(int)arg1;
- (id)imgMetadataPathName;
- (void)delCacheDir;
- (void)makeCacheDir;
- (void)doBakeImages;
- (void)recordHotImage:(id)arg1 img:(id)arg2;
- (id)hotImage:(id)arg1;
- (_Bool)isSwitchOpen;
- (id)init;

@end

