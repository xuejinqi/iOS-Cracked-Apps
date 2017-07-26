//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MASSCallback.h"
#import "MASSRequestDelegate.h"

@class NSCache, NSLock, NSMutableDictionary, NSString;

@interface MASSProxyClient : NSObject <MASSRequestDelegate, MASSCallback>
{
    unsigned int _nextDataId;
    NSLock *_cookieLock;
    NSMutableDictionary *_requestMap;
    NSCache *_failRequestPool;
}

+ (id)getIPv6StrFromv4:(id)arg1;
+ (_Bool)defaultNetInterfaceIPv6Only;
+ (_Bool)isFetchFilter;
+ (_Bool)clientSwitch;
+ (id)shareInstance;
@property(nonatomic) unsigned int nextDataId; // @synthesize nextDataId=_nextDataId;
@property(retain, nonatomic) NSCache *failRequestPool; // @synthesize failRequestPool=_failRequestPool;
@property(retain, nonatomic) NSMutableDictionary *requestMap; // @synthesize requestMap=_requestMap;
@property(retain) NSLock *cookieLock; // @synthesize cookieLock=_cookieLock;
- (void).cxx_destruct;
- (void)logWithRequest:(id)arg1 error:(id)arg2 ext:(id)arg3 userInfo:(id)arg4;
- (void)RecordingSuccFileName:(id)arg1 taskId:(id)arg2 fileId:(id)arg3 discriptions:(id)arg4 userInfo:(id)arg5;
- (id)uploadData:(id)arg1 timeoutInterval:(double)arg2 taskId:(id)arg3 needCrypto:(_Bool)arg4 hasNext:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)endContinueUploadOfTaskid:(id)arg1;
- (_Bool)continueUploadWithData:(id)arg1 taskid:(id)arg2;
- (id)startContinuingUploadWithFirstData:(id)arg1 timeOut:(double)arg2 needCrypto:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)taskStartExcute:(id)arg1;
- (void)cancel:(id)arg1 needCallback:(_Bool)arg2;
- (void)cancel:(id)arg1;
- (void)taskDemote:(id)arg1;
- (void)TfsDownloadFailTaskId:(id)arg1 UserInfo:(id)arg2;
- (void)TfsDownloadRcvedHeadTaskId:(id)arg1 head:(id)arg2;
- (void)TfsDownloadTaskId:(id)arg1 Percent:(float)arg2 partFile:(id)arg3 Downloaded:(long long)arg4 WholeSize:(long long)arg5;
- (void)TfsDownloadSuccTaskId:(id)arg1 Content:(id)arg2 head:(id)arg3 UserInfo:(id)arg4;
- (void)DownloadFileFailName:(id)arg1 taskId:(id)arg2 fileId:(id)arg3 userInfo:(id)arg4;
- (void)DownloadFileName:(id)arg1 taskId:(id)arg2 fileId:(id)arg3 percent:(float)arg4 downloaded:(long long)arg5 wholeSize:(long long)arg6 partlyData:(id)arg7;
- (void)DownloadFileSuccName:(id)arg1 taskId:(id)arg2 fileId:(id)arg3 content:(id)arg4 userInfo:(id)arg5;
- (void)RecordingFailTaskId:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
- (void)UploadFileFailName:(id)arg1 taskId:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)UploadFileComplatedName:(id)arg1 taskId:(id)arg2 fileId:(id)arg3 picZooms:(id)arg4 discriptions:(id)arg5 userInfo:(id)arg6;
- (void)UploadFile:(id)arg1 taskId:(id)arg2 percent:(float)arg3 uploaded:(long long)arg4 wholeSize:(long long)arg5;
- (void)finishNoCancelWithError:(id)arg1 request:(id)arg2;
- (void)finishWithError:(id)arg1 request:(id)arg2;
- (void)requestTimeOut:(id)arg1;
- (id)uploadData:(id)arg1 timeoutInterval:(double)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)downloadMark:(id)arg1 timeoutInterval:(double)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)MarkDownloadProgressTaskId:(id)arg1 percent:(float)arg2 downloaded:(long long)arg3 wholeSize:(long long)arg4;
- (void)MarkDownloadSuccTaskId:(id)arg1 Content:(id)arg2 UserInfo:(id)arg3;
- (id)downloadTFS:(id)arg1 timeoutInterval:(double)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 headReceive:(CDUnknownBlockType)arg5;
- (id)downloadTFS:(id)arg1 timeoutInterval:(double)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)uploadGeneral:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3 headRcv:(CDUnknownBlockType)arg4;
- (id)downloadFile:(id)arg1 timeoutInterval:(double)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getDjangoToken;
- (id)getDjangoUrlWithFileId:(id)arg1 isImage:(_Bool)arg2 imageZoom:(id)arg3 isHttps:(_Bool)arg4 isPublic:(_Bool)arg5;
- (id)getDjangoUrlWithFileId:(id)arg1 isImage:(_Bool)arg2 imageZoom:(id)arg3 isHttps:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

