//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGroupMemberShutupPbProxy : NSObject
{
}

+ (id)sharedInstance;
- (id)parseAnonymousSetMemberShutupPush:(char *)arg1 bufferLen:(unsigned int)arg2;
- (id)parseSetMemberShutupPush:(char *)arg1 bufferLen:(unsigned int)arg2;
- (id)parseSetAllMembersShutupBuffer:(char *)arg1 bufferLen:(unsigned int)arg2;
- (id)parseSetManagerVerifyBuffer:(char *)arg1 bufferLen:(unsigned int)arg2;
- (id)getModifyGroupProfileBufferByHotChat:(long long)arg1 groupNotice:(id)arg2;
- (id)getModifyGroupProfileBuffer:(id)arg1;
- (id)getAllowManagerVerifyBuffer:(unsigned long long)arg1 uins:(id)arg2 flag:(_Bool)arg3;
- (id)getGroupJoinQuestionAndAnwserBuffer:(unsigned long long)arg1 question:(id)arg2 answer:(id)arg3;
- (id)getOnlyMemberInviteBuffer:(unsigned long long)arg1 flag:(_Bool)arg2;
- (id)getAllowGroupMemberInviteBuffer:(unsigned long long)arg1 flag:(_Bool)arg2;
- (id)getSetAllMembersShutupBuffer:(unsigned long long)arg1 setOrCancel:(_Bool)arg2;
- (id)parseSetMemberShutupRsp:(char *)arg1 bufferLen:(unsigned int)arg2;
- (id)getSetMemberShutupBuffer:(unsigned long long)arg1 shutupMembers:(id)arg2 operation:(unsigned char)arg3;
- (int)removeSSOPkgHead:(char *)arg1 bufferLen:(unsigned int)arg2 bodyBuffer:(basic_string_075b6133 *)arg3;

@end

