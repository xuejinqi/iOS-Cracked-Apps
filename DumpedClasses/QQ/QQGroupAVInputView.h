//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface QQGroupAVInputView : UIView <UITextFieldDelegate>
{
    struct CGRect _origFrame;
    id <QQGroupAVInputViewDelegate> _delegate;
    UITextField *_inputTextField;
    UITextField *_inputTextFieldOpenkeyboard;
    UIButton *_joinGroupBnt;
    struct UIEdgeInsets _textFieldInset;
}

@property(retain, nonatomic) UIButton *joinGroupBnt; // @synthesize joinGroupBnt=_joinGroupBnt;
@property(nonatomic) struct UIEdgeInsets textFieldInset; // @synthesize textFieldInset=_textFieldInset;
@property(retain, nonatomic) UITextField *inputTextFieldOpenkeyboard; // @synthesize inputTextFieldOpenkeyboard=_inputTextFieldOpenkeyboard;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(nonatomic) __weak id <QQGroupAVInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openGroupCard:(id)arg1;
- (void)setInputEnable;
- (void)setShowJoinGroupBnt:(_Bool)arg1;
- (void)setInputDisableAndGrayTips:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)clearText;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (void)doInitUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

