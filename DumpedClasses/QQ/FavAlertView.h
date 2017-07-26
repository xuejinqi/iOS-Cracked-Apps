//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIAlertView;

@interface FavAlertView : NSObject <UITextFieldDelegate, UIAlertViewDelegate>
{
    int _xo;
    NSString *_leftButtonTitle;
    NSString *_rightButtonTitle;
    _Bool _handleAfterDismissal;
    _Bool _singleButton;
    UIAlertView *_alertView;
    _Bool _inputMode;
    NSString *_title;
    NSString *_message;
    NSString *_inputText;
    _Bool _calculatingLimit;
    _Bool _limitByBytes;
    CDUnknownBlockType _leftButtonHandler;
    CDUnknownBlockType _rightButtonHandler;
    unsigned long long _textLimit;
}

+ (void)alertWithTitle:(id)arg1 message:(id)arg2 singleButton:(id)arg3;
@property(nonatomic) _Bool limitByBytes; // @synthesize limitByBytes=_limitByBytes;
@property(nonatomic) unsigned long long textLimit; // @synthesize textLimit=_textLimit;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(copy, nonatomic) CDUnknownBlockType rightButtonHandler; // @synthesize rightButtonHandler=_rightButtonHandler;
@property(copy, nonatomic) CDUnknownBlockType leftButtonHandler; // @synthesize leftButtonHandler=_leftButtonHandler;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)limitText:(id)arg1;
- (void)show;
- (void)showWithLeftHandler:(CDUnknownBlockType)arg1 rightHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 inputMode:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool handleAfterDismissal; // @dynamic handleAfterDismissal;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *leftButtonTitle; // @dynamic leftButtonTitle;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *rightButtonTitle; // @dynamic rightButtonTitle;
@property(nonatomic) _Bool singleButton; // @dynamic singleButton;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

