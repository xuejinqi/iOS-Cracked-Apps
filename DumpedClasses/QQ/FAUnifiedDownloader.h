//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FADownHttpDelegate.h"

@class FAUnifedDownTaskInfo, FAUnifiedDownHttp, NSString;

@interface FAUnifiedDownloader : NSObject <FADownHttpDelegate>
{
    int _logId;
    FAUnifedDownTaskInfo *_fileInfo;
    id <FADownloadDelegate> _delegate;
    FAUnifiedDownHttp *_filedownHttp;
}

@property(retain, nonatomic) FAUnifiedDownHttp *filedownHttp; // @synthesize filedownHttp=_filedownHttp;
@property(retain, nonatomic) FAUnifedDownTaskInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
- (void)dealloc;
- (void)OnThumbnailHttpFail:(id)arg1;
- (void)OnThumbnailDone:(id)arg1;
- (void)OnHttpResult:(_Bool)arg1 isInvalidUrl:(_Bool)arg2 info:(id)arg3;
- (void)OnHttpProgress:(id)arg1;
- (id)generateUnifiedDownUrl;
- (id)getTmpSavePath;
- (void)stop;
- (void)cancel;
- (void)cancelWithNotifyFailCode:(int)arg1 errMsg:(id)arg2;
- (void)start:(id)arg1;
- (id)init:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

