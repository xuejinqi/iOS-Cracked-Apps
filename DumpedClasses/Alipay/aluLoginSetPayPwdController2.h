//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBaseViewController.h"

#import "aluSetPayPwdBoxDelegate.h"

@class AUGUnifyLoginRes, NSString, UILabel, aluButton, aluCheckBox, aluRPC, aluSetPayPwdBox;

@interface aluLoginSetPayPwdController2 : aluBaseViewController <aluSetPayPwdBoxDelegate>
{
    _Bool _optionStatus;
    aluRPC *_setPayPwdRpc;
    AUGUnifyLoginRes *_loginResult;
    id <aluOnBackDelegate> _backDelegate;
    NSString *_showOptionalInfo;
    NSString *_agreementURL;
    aluSetPayPwdBox *_pwdBox;
    aluButton *_nextBtn;
    aluCheckBox *_checkBox;
    UILabel *_optionalInfoLabel;
}

@property(nonatomic) __weak UILabel *optionalInfoLabel; // @synthesize optionalInfoLabel=_optionalInfoLabel;
@property(nonatomic) __weak aluCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) __weak aluButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak aluSetPayPwdBox *pwdBox; // @synthesize pwdBox=_pwdBox;
@property(nonatomic) _Bool optionStatus; // @synthesize optionStatus=_optionStatus;
@property(copy, nonatomic) NSString *agreementURL; // @synthesize agreementURL=_agreementURL;
@property(copy, nonatomic) NSString *showOptionalInfo; // @synthesize showOptionalInfo=_showOptionalInfo;
@property(nonatomic) __weak id <aluOnBackDelegate> backDelegate; // @synthesize backDelegate=_backDelegate;
@property(retain, nonatomic) AUGUnifyLoginRes *loginResult; // @synthesize loginResult=_loginResult;
@property(retain, nonatomic) aluRPC *setPayPwdRpc; // @synthesize setPayPwdRpc=_setPayPwdRpc;
- (void).cxx_destruct;
- (void)dismissKeyboard;
- (void)doSetPayPassword;
- (void)aluSetPayPwdBoxDone:(id)arg1;
- (void)aluSetPayPwdBoxInputDidChange:(id)arg1;
- (id)checkBoxBtton;
- (id)confirmButton;
- (id)viewController;
- (void)onCheckBox:(id)arg1;
- (void)onNext;
- (void)onBack;
- (void)didReceiveMemoryWarning;
- (void)linkBtnClicked;
- (void)creatSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

