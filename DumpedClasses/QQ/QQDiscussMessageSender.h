//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPbMsgSenderBase.h"

@interface QQDiscussMessageSender : QQPbMsgSenderBase
{
}

+ (id)getInstance;
- (_Bool)OnReceiveSendMsgRespOfSendSeq:(unsigned int)arg1 ResultCode:(unsigned int)arg2 ErrMsg:(const basic_string_075b6133 *)arg3 ReqSendTimeFromServer:(unsigned int)arg4;
- (void)add18BirthdayAvatarInfo:(struct RichText *)arg1;
- (struct RoutingHead *)genRoutingHead:(id)arg1;
- (int)getMsgSendType:(id)arg1;
- (long long)getSendUin:(id)arg1;

@end

