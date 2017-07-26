//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseDialogViewController.h"

#import "QQFriendSelectedViewControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class CFT_TPIDKeyboardView, NSString, UIButton, UITextField, UIViewController;

@interface CFT_UIQQTransferAccountViewController : CFT_UIBaseDialogViewController <UITextFieldDelegate, QQFriendSelectedViewControllerDelegate>
{
    unsigned long long _style;
    UIButton *_nextButton;
    UIButton *_friendListButton;
    UITextField *_numberField;
    UITextField *_moneyField;
    UITextField *_transferRemark;
    CFT_UIQQTransferAccountViewController *qqtransfer;
    CFT_UIQQTransferAccountViewController *qqtransferinput;
    float large_transfer_remind_fee;
    UIButton *transferBut;
    _Bool memoTextToChange;
    NSString *_appinfo;
    NSString *_skey;
    NSString *_skeyType;
    NSString *_comeFrom;
    id <QQTransferAccountFinishDelegate> _delegate;
    UIViewController *_prevc;
    NSString *_selfuin;
    NSString *_transferName;
    NSString *_large_transfer_remind_msg;
    CFT_TPIDKeyboardView *_numKeyboard;
}

@property(retain, nonatomic) CFT_TPIDKeyboardView *numKeyboard; // @synthesize numKeyboard=_numKeyboard;
@property(copy, nonatomic) NSString *large_transfer_remind_msg; // @synthesize large_transfer_remind_msg=_large_transfer_remind_msg;
@property(copy, nonatomic) NSString *transferName; // @synthesize transferName=_transferName;
@property(copy, nonatomic) NSString *selfuin; // @synthesize selfuin=_selfuin;
@property(nonatomic) UIViewController *prevc; // @synthesize prevc=_prevc;
@property(nonatomic) id <QQTransferAccountFinishDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *comeFrom; // @synthesize comeFrom=_comeFrom;
@property(copy, nonatomic) NSString *skeyType; // @synthesize skeyType=_skeyType;
@property(copy, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(copy, nonatomic) NSString *appinfo; // @synthesize appinfo=_appinfo;
- (void)setStaictransferUin:(id)arg1;
- (void)actionGetUserInfo:(id)arg1;
- (void)onPaySuccNotify:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)friendSelectedViewController:(id)arg1 didSelectFriend:(id)arg2 type:(int)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)qpay_unified_config;
- (void)getLimitedInfo;
- (void)onBackgroundTapped;
- (void)clickCloseButton:(id)arg1;
- (void)clickBackbutton:(id)arg1;
- (void)gotoTransferViewController:(_Bool)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)nextButtonClick:(id)arg1;
- (void)qpayment_transaction;
- (void)transfer_payment;
- (void)clickTransferButton:(id)arg1;
- (_Bool)checkTranferParam;
- (void)selectFriend:(id)arg1;
- (void)startQQTransferAccount:(id)arg1;
- (void)layoutSubviewsOnView;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)initQQTransferView;
- (void)initbgView;
- (void)viewDidLoad;
- (void)initparam:(unsigned long long)arg1 parentVC:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

