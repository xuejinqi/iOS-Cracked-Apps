//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVUserModel, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIFont;

@protocol IGroupAudioChatService
- (void)setIsOpenSDKLiveStreaming:(_Bool)arg1;
- (void)showGroupVideoStarupView:(unsigned long long)arg1;
- (int)getPstnStrategy;
- (NSString *)getCountryCodeWithMobilePhone:(NSString *)arg1;
- (NSString *)getNoCountryPhoneWithMobilePhone:(NSString *)arg1;
- (NSString *)getOpenIDWithTinyID:(NSString *)arg1;
- (void)setOpenID:(NSString *)arg1 withTinyID:(NSString *)arg2;
- (NSString *)getFixedString:(NSString *)arg1 withPx:(double)arg2 withFont:(UIFont *)arg3;
- (void)switchToGroupAV:(NSString *)arg1 withPhones:(NSArray *)arg2;
- (_Bool)iscreateDissGroup;
- (void)createDissGroupCallBack:(int)arg1 withDiscussUin:(NSString *)arg2 withPhones:(NSArray *)arg3;
- (void)createDissGroup:(NSString *)arg1 withFriendUin:(NSString *)arg2;
- (void)JoinConference:(int)arg1 subject:(NSString *)arg2 bySig:(NSString *)arg3 discUin:(NSString *)arg4 roleName:(NSString *)arg5 busiType:(NSString *)arg6 isSelfInterviewer:(_Bool)arg7 type:(_Bool)arg8;
- (void)AddHRConfMember:(unsigned long long)arg1 memUin:(unsigned long long)arg2;
- (void)QuitConference:(NSString *)arg1;
- (void)RequestMemberNickNames:(NSString *)arg1 memUin:(NSString *)arg2;
- (NSString *)GetConferenceNickName:(unsigned long long)arg1 memUin:(unsigned long long)arg2;
- (_Bool)isHRConfDiscuss:(unsigned long long)arg1;
- (_Bool)isHRInterviewer:(unsigned long long)arg1;
- (void)didRecievedRandomPush:(unsigned long long)arg1 memberNum:(unsigned int)arg2 data:(NSString *)arg3;
- (void)didRecievedOfflineMsg:(unsigned long long)arg1:(int)arg2:(char *)arg3:(int)arg4;
- (_Bool)needRemoveDuplicate:(NSString *)arg1;
- (_Bool)isAddingMem:(unsigned long long)arg1;
- (void)AddDiscussGroupMemDone:(unsigned long long)arg1 withResult:(NSDictionary *)arg2;
- (void)updateChatStates:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getPstnCountInChatting;
- (AVUserModel *)getChatListDictChattingSecondMem:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (AVUserModel *)getChatListDictChattingMem:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (NSMutableArray *)getChatListDictList:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getChatListDictChattingNum:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)getChatListDictChatState:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (_Bool)GroupAudioBackGroudChatting;
- (NSString *)getRelationID;
- (_Bool)isFullScreenChatting;
- (_Bool)isFloatAudioChatting;
- (_Bool)isFloatVideoChatting;
- (_Bool)IsRecvingBuddyShare;
- (_Bool)InOneBuddyShare;
- (_Bool)InOneGroup;
- (void)forceSuspendAVChat;
- (void)noticeBarMoveEnd:(struct CGPoint)arg1;
- (void)cencealFloatChattingWindow;
- (void)remainFloatChattingWindow;
- (void)remainGroupChattingWindow;
- (void)GetRoomInfo:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)MultiCheckGroupAudioChat:(unsigned long long)arg1 roomInfoArray:(NSArray *)arg2;
- (int)CheckGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;
- (int)QuitGroupAudioChat:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3 closeReasion:(int)arg4;
- (int)StartConsortiumAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5 info:(NSDictionary *)arg6;
- (int)StartRandomMultiAVChat:(int)arg1 withAVType:(int)arg2 withAVSubType:(int)arg3 withEntrance:(int)arg4 additionDict:(NSMutableDictionary *)arg5;
- (int)StartMultiAVChatWithStrategy:(int)arg1 withRelationType:(int)arg2 withRelationID:(unsigned long long)arg3 withAVType:(int)arg4 withAVSubType:(int)arg5 withEntrance:(int)arg6 withMembers:(NSArray *)arg7 pstnConfId:(int)arg8;
- (int)StartMultiAVChatWithStrategy:(int)arg1 withRelationType:(int)arg2 withRelationID:(unsigned long long)arg3 withAVType:(int)arg4 withAVSubType:(int)arg5 withEntrance:(int)arg6 withMembers:(NSArray *)arg7;
- (int)StartMultiAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5 pstnConfId:(int)arg6;
- (int)StartMultiAVChat:(int)arg1 withRelationID:(unsigned long long)arg2 withAVType:(int)arg3 withAVSubType:(int)arg4 withEntrance:(int)arg5;
- (int)ReturnGroupAudioChat;
@end

