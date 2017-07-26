//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IUrlImageService.h"

@class NSLock, NSMutableArray;

@interface UrlImageService : NSObject <IUrlImageService>
{
    NSLock *_downloadUrlListLock;
    NSMutableArray *_downloadUrlList;
}

+ (void)destroyInstance;
+ (id)getInstance;
- (void)notifyImageDownloadError:(id)arg1;
- (void)notifyImageFinish:(id)arg1;
- (void)downloadImage:(id)arg1;
- (void)asynLoadImageWithUrl:(id)arg1;
- (void)asyncGetImageWithUrl:(id)arg1;
- (id)getImageUUIDwithUrl:(id)arg1;
- (id)getLocalImageWithUrl:(id)arg1;
- (id)getImageWithUrl:(id)arg1;
- (void)asynRequestImageWithUrl:(id)arg1;
- (void)asyncGetImageWithUrl:(id)arg1 needRequest:(_Bool)arg2;
- (void)removeImageFromDisk:(id)arg1;
- (_Bool)isImageExist:(id)arg1;
- (void)dealloc;
- (id)init;

@end

