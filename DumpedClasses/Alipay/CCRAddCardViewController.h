//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRTableBaseViewController.h"

#import "ALPDatePickerDelegate.h"
#import "CCRBankListViewControllerDelegate.h"

@class ALPDatePicker, APButton, AUInputBox, CCRBankInfo, CCRSectionObject, CCRSwitch, NSString;

@interface CCRAddCardViewController : CCRTableBaseViewController <CCRBankListViewControllerDelegate, ALPDatePickerDelegate>
{
    _Bool _needQueryBill;
    _Bool _judgeCardBinFlag;
    _Bool _cancelScanCard;
    _Bool _canChangeBank;
    int _type;
    NSString *_scanedCreditCardNum;
    AUInputBox *_cardInputBox;
    AUInputBox *_nameInputBox;
    APButton *_submitButton;
    ALPDatePicker *_datePicker;
    CCRBankInfo *_bankInfo;
    NSString *_remindDay;
    CCRSwitch *_remindSwitch;
    NSString *_defaultName;
    CCRSectionObject *_remindSection;
}

@property(retain, nonatomic) CCRSectionObject *remindSection; // @synthesize remindSection=_remindSection;
@property(nonatomic) _Bool canChangeBank; // @synthesize canChangeBank=_canChangeBank;
@property(retain, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(retain, nonatomic) CCRSwitch *remindSwitch; // @synthesize remindSwitch=_remindSwitch;
@property(nonatomic) _Bool cancelScanCard; // @synthesize cancelScanCard=_cancelScanCard;
@property(nonatomic) _Bool judgeCardBinFlag; // @synthesize judgeCardBinFlag=_judgeCardBinFlag;
@property(retain, nonatomic) NSString *remindDay; // @synthesize remindDay=_remindDay;
@property(retain, nonatomic) CCRBankInfo *bankInfo; // @synthesize bankInfo=_bankInfo;
@property(retain, nonatomic) ALPDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) APButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) AUInputBox *nameInputBox; // @synthesize nameInputBox=_nameInputBox;
@property(retain, nonatomic) AUInputBox *cardInputBox; // @synthesize cardInputBox=_cardInputBox;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *scanedCreditCardNum; // @synthesize scanedCreditCardNum=_scanedCreditCardNum;
@property(nonatomic) _Bool needQueryBill; // @synthesize needQueryBill=_needQueryBill;
- (void).cxx_destruct;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)requestCardDetail:(id)arg1 needQueryBill:(_Bool)arg2;
- (void)reloadBankSection;
- (void)textFieldTextDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)cancelDatePicker:(id)arg1;
- (void)datePicker:(id)arg1 text:(id)arg2;
- (void)cancelDatePicker;
- (void)getDatePickerInstance;
- (void)viewWillDestroy;
- (void)back;
- (_Bool)checkSubmitButtonWithAlert;
- (void)checkSubmitButton;
- (_Bool)checkExistEnglishChar:(id)arg1;
- (void)onSubmitInfo;
- (void)onConfirmButtonPressed;
- (void)requestAddCardCCDC;
- (void)requestBankExInfoOperation;
- (void)requestAddCard:(id)arg1;
- (void)switchValueWillChange:(id)arg1;
- (id)cellObjectForRepayRemindDay:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForRepayRemind:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForUserName:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForBankInfo:(id)arg1 OtherParam:(id)arg2;
- (id)cellObjectForCardNumber:(id)arg1 OtherParam:(id)arg2;
- (void)layoutWillChange;
- (void)bankListViewController:(id)arg1 bankInfo:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithType:(int)arg1 bank:(id)arg2 canChangeBank:(_Bool)arg3;
- (id)initWithType:(int)arg1 bank:(id)arg2 withName:(id)arg3;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

