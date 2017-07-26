//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseDialogViewController.h"

#import "TPQRCodeDelegate.h"
#import "UITextFieldDelegate.h"

@class CFT_UICustomTextField, NSString, UIButton, UILabel, UIView;

@interface CFT_UITransferQRCodeInputViewController : CFT_UIBaseDialogViewController <UITextFieldDelegate, TPQRCodeDelegate>
{
    CFT_UICustomTextField *moneyField;
    CFT_UICustomTextField *explainField;
    UILabel *titleLabel;
    UIView *titleLineView;
    UILabel *moneyLabel;
    UIView *moneyLineView;
    UIView *endLineView;
    double _transferAccountMax;
    NSString *_inputMoney;
    UIButton *_nextButton;
}

@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSString *inputMoney; // @synthesize inputMoney=_inputMoney;
@property(nonatomic) double transferAccountMax; // @synthesize transferAccountMax=_transferAccountMax;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

