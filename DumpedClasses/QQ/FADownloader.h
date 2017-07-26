//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FADownDoEndDelegate.h"
#import "FADownHttpDelegate.h"
#import "FADownRequestDelegate.h"

@class FADownDoEndC2C, FADownHttp, FADownRequest, FATaskInfoDownload, NSString;

@interface FADownloader : NSObject <FADownRequestDelegate, FADownHttpDelegate, FADownDoEndDelegate>
{
    int _logId;
    FATaskInfoDownload *_fileInfo;
    id <FADownloadDelegate> _delegate;
    FADownRequest *_filedownRequest;
    FADownHttp *_filedownHttp;
    FADownDoEndC2C *_filedownDoEnd;
    _Bool _isRetryReqUrl;
    int _xo;
}

- (void)dealloc;
- (void)OnDoEndResult:(_Bool)arg1;
- (void)OnHttpResult:(_Bool)arg1 isInvalidUrl:(_Bool)arg2 info:(id)arg3;
- (void)retryReqUrl;
- (void)OnThumbnailProgress:(id)arg1 progress:(double)arg2;
- (void)OnHttpProgress:(id)arg1;
- (void)OnThumbnailDone:(id)arg1;
- (void)OnThumbnailHttpFail:(id)arg1;
- (void)OnThumbnailRequestFail:(id)arg1;
- (void)OnRequestResult:(_Bool)arg1 tmpName:(id)arg2 url:(id)arg3 info:(id)arg4;
- (void)stop;
- (void)cancel;
- (void)cancelWithNotifyFailCode:(int)arg1 errMsg:(id)arg2;
- (void)start:(id)arg1;
- (void)createComponent;
- (id)init:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FATaskInfoDownload *fileInfo; // @dynamic fileInfo;
@property(retain, nonatomic) FADownDoEndC2C *filedownDoEnd; // @dynamic filedownDoEnd;
@property(retain, nonatomic) FADownHttp *filedownHttp; // @dynamic filedownHttp;
@property(retain, nonatomic) FADownRequest *filedownRequest; // @dynamic filedownRequest;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

