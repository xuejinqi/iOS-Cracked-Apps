//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class AUParagraphInputDelegateProxy, NSString, UILabel, UITextView;

@interface AUParagraphInputBox : UIView <UIScrollViewDelegate>
{
    UITextView *_textView;
    long long _maxInputLen;
    UIView *_topSplitLine;
    UIView *_bottomSplitLine;
    UILabel *_placeHolderLabel;
    UILabel *_inputLenLabel;
    AUParagraphInputDelegateProxy *_delegateProxy;
}

+ (_Bool)textView:(id)arg1 shouldChangeRange:(struct _NSRange)arg2 replacementString:(id)arg3 maxLength:(int)arg4;
@property(retain, nonatomic) AUParagraphInputDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) UILabel *inputLenLabel; // @synthesize inputLenLabel=_inputLenLabel;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UIView *bottomSplitLine; // @synthesize bottomSplitLine=_bottomSplitLine;
@property(retain, nonatomic) UIView *topSplitLine; // @synthesize topSplitLine=_topSplitLine;
@property(nonatomic) long long maxInputLen; // @synthesize maxInputLen=_maxInputLen;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)updateInputLenLabelState:(id)arg1;
- (void)maxInputLengthWithTextView:(id)arg1;
- (void)setPlaceHolder:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 placeHolder:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

