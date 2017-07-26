//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APGroupService.h"
#import "ContactService.h"
#import "UITextFieldDelegate.h"

@class APGroupService, NSString, UITextField;

@interface APContactService : NSObject <UITextFieldDelegate, ContactService, APGroupService>
{
    APGroupService *_groupService;
    UITextField *_alertTextfieldWeakRef;
}

@property(nonatomic) __weak UITextField *alertTextfieldWeakRef; // @synthesize alertTextfieldWeakRef=_alertTextfieldWeakRef;
@property(retain, nonatomic) APGroupService *groupService; // @synthesize groupService=_groupService;
- (void).cxx_destruct;
- (void)handleNewCards:(id)arg1;
- (void)homeCardDataDidUpdate:(id)arg1;
- (id)dictFromAPChatRoomInfo:(id)arg1 lastMsg:(id)arg2 senderName:(id)arg3;
- (id)queryJoinedChatRoomInfo:(id)arg1 type:(id)arg2 localCallback:(CDUnknownBlockType)arg3 rpcCallback:(CDUnknownBlockType)arg4;
- (id)setBlacked:(id)arg1 blacked:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldDidChange:(id)arg1;
- (void)withdrawMembers:(id)arg1 qrcode:(id)arg2 source:(id)arg3 groupId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)withdrawMembers:(id)arg1 qrcode:(id)arg2 groupId:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)setContactRemark:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)searchAllAccount:(id)arg1 showInview:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)searchAccount:(id)arg1 bizType:(id)arg2 showLoadingInView:(id)arg3 callback:(CDUnknownBlockType)arg4 willShowActionSheetCallback:(CDUnknownBlockType)arg5 needLoading:(_Bool)arg6;
- (void)searchAccount:(id)arg1 bizType:(id)arg2 showInview:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)searchAccount:(id)arg1 showInview:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addContactByAuthAlertWithContact:(id)arg1 source:(id)arg2 showInView:(id)arg3 bizType:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)addContactByAuthAlertWithContact:(id)arg1 source:(id)arg2 showInView:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)addContactWithContactList:(id)arg1 source:(id)arg2 showInview:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)tryAddContactAsyncWithContact:(id)arg1 source:(id)arg2;
- (void)addContactAutoWithContact:(id)arg1 source:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addContactWithContact:(id)arg1 withAuthText:(id)arg2 source:(id)arg3 bizType:(int)arg4 callback:(CDUnknownBlockType)arg5;
- (void)clearAlertTextFieldResponsor;
- (void)showAddAlertWith:(id)arg1 contactInfo:(id)arg2 source:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)addContactWithContact:(id)arg1 withAuthText:(id)arg2 source:(id)arg3 extraParams:(id)arg4 bizType:(int)arg5 callback:(CDUnknownBlockType)arg6;
- (void)dealDeleteFriendReq:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dealAddFriendReq2:(id)arg1 agree:(_Bool)arg2 extraParams:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)dealAddFriendReq:(id)arg1 agree:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)validateRecevierFullNameWithRecevierInfo:(id)arg1 verifyShowInView:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

