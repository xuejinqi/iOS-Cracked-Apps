//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IHttpStateDelegate.h"
#import "IRichMediaPBTransferResult.h"

@class NSMutableArray, NSString;

@interface PBLongMsgManager : NSObject <IHttpStateDelegate, IRichMediaPBTransferResult>
{
    NSMutableArray *_longMsgDownloadTasks;
    NSMutableArray *_oldLongMsgDownloadTasks;
}

+ (id)replaceToHttpsUrl:(id)arg1;
+ (id)GetInstance;
- (void)stopLongMsgWithMsgid:(long long)arg1 andCode:(int)arg2;
- (void)cancellongMsgDownload:(int)arg1;
- (void)removeReqByMsgIdOfServiceRetryMsg:(long long)arg1;
- (id)getReqByMsgIdOfServiceRetryMsg:(long long)arg1;
- (int)getReportCode:(int)arg1;
- (_Bool)isMsgExpire:(id)arg1;
- (id)getDownloadUrlList:(id)arg1 isReuseIp:(_Bool *)arg2;
- (void)removeFailedIp:(id)arg1;
- (void)saveSuccessIp:(id)arg1;
- (void)updateLongMsgState:(id)arg1 andNeedNotify:(_Bool)arg2;
- (void)onHttpState:(int)arg1 transferType:(int)arg2 success:(_Bool)arg3 error:(id)arg4 isUnifiedDownloader:(_Bool)arg5;
- (void)onHttpDownloadSuccess:(int)arg1 receivedData:(id)arg2;
- (void)notifyDownloadReqResult:(_Bool)arg1 SsoSeq:(int)arg2 Err:(id)arg3 DownloadUrl:(id)arg4;
- (void)DownloadLongMsg:(id)arg1;
- (void)downloadServerFailLongMsg:(id)arg1;
- (void)richMediaStartDownloadLongMsg:(id)arg1 andUrls:(id)arg2 andResKey:(id)arg3 isTry:(_Bool)arg4;
- (void)richMediaDownloadLongMsg:(id)arg1 andData:(id)arg2 url:(id)arg3 result:(_Bool)arg4 error:(id)arg5;
- (void)richMediaDownloadPBFileMessageModel:(id)arg1 result:(_Bool)arg2 error:(id)arg3;
- (void)richMediaUploadPBFileMessageModel:(id)arg1 result:(_Bool)arg2 resId:(id)arg3 error:(id)arg4;
- (void)onForceOffLineNotify;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)getDownloadTaskWithPuin:(long long)arg1;
- (id)getDownloadTaskWithSeq:(int)arg1;
- (id)getDownloadTaskWithSessionId:(int)arg1;
- (_Bool)DownloadLongMsgWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

