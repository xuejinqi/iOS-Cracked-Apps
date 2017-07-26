//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APIPEditViewProtocol.h"

@class APIPEditView, NSDictionary, NSString, UIScrollView, UITextView;

@interface APIPEditorController : DTViewController <APIPEditViewProtocol>
{
    _Bool _isFirstAppear;
    CDUnknownBlockType _callback;
    UIScrollView *_scrollView;
    double _keyboardHeight;
    APIPEditView *_detailView;
    NSDictionary *_detailInfo;
    UITextView *_textView;
    struct CGSize _detailTextSize;
}

@property(nonatomic) struct CGSize detailTextSize; // @synthesize detailTextSize=_detailTextSize;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(copy, nonatomic) NSDictionary *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) APIPEditView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)editViewDidEndEditing:(id)arg1;
- (void)editViewDidStartEditing:(id)arg1;
- (void)done;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShowOrChange:(id)arg1;
- (void)setDetailAttributeText;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupEditModeContentSize:(id)arg1;
- (void)setNormalModeContentSize;
- (void)back;
- (void)viewDidLoad;
- (id)initWithDetailInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

