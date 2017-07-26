//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QQSVideoTransferMgr : NSObject
{
    NSMutableArray *_videoUploadArrary;
    NSMutableArray *_videoDonwloadArrary;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *videoDonwloadArrary; // @synthesize videoDonwloadArrary=_videoDonwloadArrary;
@property(retain, nonatomic) NSMutableArray *videoUploadArrary; // @synthesize videoUploadArrary=_videoUploadArrary;
- (void)resendVideoWith:(id)arg1 chatTable:(id)arg2 state:(id)arg3;
- (void)startDownload;
- (void)startUpload;
- (_Bool)isVideoDownloading:(id)arg1 getVideoType:(int)arg2;
- (int)getDownloadCount;
- (void)stopSVideoDownload:(id)arg1 isManuel:(_Bool)arg2;
- (void)stopSVideoUpload:(id)arg1 isManuel:(_Bool)arg2;
- (void)forwardSVideo:(id)arg1 fromUin:(unsigned int)arg2 fromType:(unsigned long long)arg3 toUin:(unsigned int)arg4 toType:(unsigned long long)arg5;
- (void)downloadSVideo:(id)arg1;
- (void)uploadSVideo:(id)arg1;
- (void)sendHotPicVideo:(id)arg1;
- (void)handleDispatchSVideoMsg:(id)arg1;
- (void)dealloc;

@end

