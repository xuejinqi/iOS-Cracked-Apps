//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIKeyInput.h"

@class NSObject<CLTokenViewDelegate>, NSString, UIImageView, UILabel;

@interface CLTokenView : UIView <UIKeyInput>
{
    _Bool _selected;
    NSObject<CLTokenViewDelegate> *_delegate;
    UIView *_backgroundView;
    UILabel *_label;
    UIView *_selectedBackgroundView;
    UILabel *_selectedLabel;
    NSString *_displayText;
    UIImageView *_iconImageView;
    UIImageView *_cornerIcon;
}

@property(retain, nonatomic) UIImageView *cornerIcon; // @synthesize cornerIcon=_cornerIcon;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) UIView *selectedBackgroundView; // @synthesize selectedBackgroundView=_selectedBackgroundView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak NSObject<CLTokenViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long keyboardType;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

