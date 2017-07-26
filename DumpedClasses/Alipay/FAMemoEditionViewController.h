//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEScrollController.h"

#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextView;

@interface FAMemoEditionViewController : BEEScrollController <UITextViewDelegate>
{
    UITextView *_textView;
    UILabel *_textViewPlaceHolder;
    UILabel *_remainWordsLabel;
    double _textViewMaxHeight;
    NSString *_originalMemo;
    NSString *_relatedUserId;
    NSString *_bizNo;
    NSString *_bizType;
    NSString *_memo;
}

@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSString *relatedUserId; // @synthesize relatedUserId=_relatedUserId;
@property(retain, nonatomic) NSString *originalMemo; // @synthesize originalMemo=_originalMemo;
- (void).cxx_destruct;
- (void)editFinish;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

