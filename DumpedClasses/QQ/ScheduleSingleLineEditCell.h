//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ScheduleUITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSArray, NSString, UILabel, UITextField;

@interface ScheduleSingleLineEditCell : ScheduleUITableViewCell <UITextFieldDelegate>
{
    UITextField *_inputField;
    UILabel *_subTitle;
    long long _nCellId;
    NSString *_strSubTitle;
    id <UIControlCallBase> _delegate;
    NSString *_strPlaceHolder;
    long long _maxCharLength;
    NSArray *_constraits;
}

@property(copy, nonatomic) NSArray *constraits; // @synthesize constraits=_constraits;
@property(nonatomic) long long maxCharLength; // @synthesize maxCharLength=_maxCharLength;
@property(copy, nonatomic) NSString *strPlaceHolder; // @synthesize strPlaceHolder=_strPlaceHolder;
@property(nonatomic) id <UIControlCallBase> delegate; // @synthesize delegate=_delegate;
- (void)backgroundTap:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)resignInputField;
- (void)setDisableInput:(_Bool)arg1;
- (void)setFocus;
- (void)setInputText:(id)arg1;
- (void)dealloc;
- (void)updateSubTitleVisible:(_Bool)arg1;
- (void)addCellConstraints;
- (id)initWithStyle:(long long)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3;
- (id)initWithCellId:(long long)arg1 subTitle:(id)arg2 style:(long long)arg3 reuseIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

