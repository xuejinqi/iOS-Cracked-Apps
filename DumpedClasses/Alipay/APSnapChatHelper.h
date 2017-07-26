//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APSnapChatHelper : NSObject
{
}

+ (double)getSnapchatPicPreviewTimeLimit;
+ (void)setSnapchatModeOfSession:(id)arg1 isInSnapChatMode:(_Bool)arg2;
+ (_Bool)isInSnapchatModeOfSession:(id)arg1;
+ (long long)alignmentType:(id)arg1;
+ (long long)calculateTimeOfText:(id)arg1;
+ (id)userType:(id)arg1;
+ (id)sessionId:(id)arg1;
+ (id)clientMsgID:(id)arg1;
+ (id)orignalTemplateId:(id)arg1;
+ (id)templateId:(id)arg1;
+ (void)deleteMsg:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)postTimerUpdateNotifyWith:(id)arg1;
+ (id)isInTimeCounterState:(id)arg1;
+ (void)removeFromTimeCounter:(id)arg1;
+ (void)addToTimeCounter:(id)arg1;
+ (void)markAsRead:(id)arg1;
+ (void)replyToSender:(id)arg1;

@end

