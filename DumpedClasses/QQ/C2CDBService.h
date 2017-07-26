//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IC2CDBService.h"

@class NSString, QQC2CMsgTable_Async;

@interface C2CDBService : NSObject <IC2CDBService>
{
    QQC2CMsgTable_Async *_c2cTable;
}

- (void)clearAllMessage;
- (void)updateAIOFeedMessage:(id)arg1 MsgID:(long long)arg2 content:(id)arg3 time:(int)arg4 actionUrl:(id)arg5;
- (_Bool)deleteAccostMsgsWithUin:(id)arg1;
- (int)asyncDeleteMessage:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)removeMessage:(id)arg1;
- (_Bool)updateMessage:(id)arg1;
- (_Bool)getPTTPICFileFromDB:(id)arg1 len:(int)arg2 type:(int)arg3 uin:(id)arg4;
- (double)maxValidMessageTimeOfUin:(id)arg1;
- (double)maxMessageTimeOfUin:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (int)asyncUpdateOnlineFileStateWithTime:(int)arg1 fromUin:(id)arg2 fileId:(unsigned int)arg3 newState:(int)arg4 userdata:(id)arg5 callback:(id)arg6;
- (int)asyncUpdateOnlineFileState:(id)arg1 fileId:(unsigned int)arg2 newState:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncUpOfflineFileMsg:(id)arg1 time:(int)arg2 forRead:(int)arg3 userdata:(id)arg4 callback:(id)arg5;
- (int)asyncDeleteMsgWithContentArr:(id)arg1:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
- (int)asyncDeleteMsgsWithUin:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (int)asyncUpVideMsg:(double)arg1 read:(int)arg2 content:(id)arg3 userdata:(id)arg4 callback:(id)arg5;
- (void)updateC2CRichMsgState:(int)arg1 msgTime:(int)arg2 state:(int)arg3 uin:(id)arg4;
- (void)updatePlaceholderFileMsg:(int)arg1 content:(id)arg2 uin:(id)arg3;
- (void)transferOnlineFileToOffline:(int)arg1 newContent:(id)arg2 fromUin:(id)arg3 msgTime:(int)arg4 fileId:(unsigned int)arg5;
- (void)updateOnlineFileStateWithTime:(int)arg1 fromUin:(id)arg2 fileId:(unsigned int)arg3 newState:(int)arg4;
- (void)updateOnlineFileState:(id)arg1 fileId:(unsigned int)arg2 newState:(int)arg3;
- (void)upOfflineFileMsg:(id)arg1 time:(int)arg2 forRead:(int)arg3;
- (void)setQQFailStateWithUUid:(id)arg1 uin:(id)arg2;
- (void)deleteMsgWithContent:(id)arg1 forUin:(id)arg2;
- (void)deleteMsgsWithUin:(id)arg1;
- (id)QQRomaMessageWithUin:(id)arg1 startTime:(unsigned long long)arg2 pageSize:(unsigned long long)arg3;
- (_Bool)batchInsertReceivedMessages:(id)arg1;
- (_Bool)batchInsertSendMessages:(id)arg1;
- (_Bool)insertSendMessage:(id)arg1;
- (void)upVideMsg:(double)arg1 read:(int)arg2 content:(id)arg3 uin:(id)arg4;
- (id)c2cTable;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

