//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class CFT_TPIDKeyboardView, CFT_TPKeyboardAvoidingScrollView, CFT_UIGroupStyleView, CFT_UITLTextField, NSMutableArray, NSString, UIButton, UIControl, UIImageView, UILabel, UITapGestureRecognizer, UITextField;

@interface CFT_RedGiftView : UIView <UIScrollViewDelegate>
{
    int _redgiftType;
    _Bool _supportOrientedRedGift;
    _Bool _isOrientedRedGift;
    _Bool _animating;
    UIControl *_receiverSelectBgView;
    CFT_UITLTextField *_RedGiftNumField;
    CFT_UITLTextField *_RedGiftMoneyField;
    NSMutableArray *_selectUinArray;
    UIView *_receiverSelectView;
    UILabel *_receiverPlaceholdLabel;
    UIView *_receiverTapContainer;
    CFT_TPIDKeyboardView *_redgiftNumboard;
    CFT_TPIDKeyboardView *_redgiftMoneyboard;
    UITextField *_memoField;
    CFT_UIGroupStyleView *_groupNumMoney;
    CFT_UIGroupStyleView *_gruopMemo;
    UIButton *_nextButton;
    CFT_TPKeyboardAvoidingScrollView *_scroll;
    UITapGestureRecognizer *_singleTouch;
    UILabel *_tipLabel;
    UIImageView *_huanfuPreviewImg;
    UIButton *_changeRedGiftButton;
    UILabel *_tipVipLabel;
}

@property(retain, nonatomic) UILabel *tipVipLabel; // @synthesize tipVipLabel=_tipVipLabel;
@property(retain, nonatomic) UIButton *changeRedGiftButton; // @synthesize changeRedGiftButton=_changeRedGiftButton;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool isOrientedRedGift; // @synthesize isOrientedRedGift=_isOrientedRedGift;
@property(nonatomic) _Bool supportOrientedRedGift; // @synthesize supportOrientedRedGift=_supportOrientedRedGift;
@property(retain, nonatomic) UIImageView *huanfuPreviewImg; // @synthesize huanfuPreviewImg=_huanfuPreviewImg;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UITapGestureRecognizer *singleTouch; // @synthesize singleTouch=_singleTouch;
@property(retain, nonatomic) CFT_TPKeyboardAvoidingScrollView *scroll; // @synthesize scroll=_scroll;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) CFT_UIGroupStyleView *gruopMemo; // @synthesize gruopMemo=_gruopMemo;
@property(retain, nonatomic) CFT_UIGroupStyleView *groupNumMoney; // @synthesize groupNumMoney=_groupNumMoney;
@property(retain, nonatomic) UITextField *memoField; // @synthesize memoField=_memoField;
@property(retain, nonatomic) CFT_TPIDKeyboardView *redgiftMoneyboard; // @synthesize redgiftMoneyboard=_redgiftMoneyboard;
@property(retain, nonatomic) CFT_TPIDKeyboardView *redgiftNumboard; // @synthesize redgiftNumboard=_redgiftNumboard;
@property(retain, nonatomic) UIView *receiverTapContainer; // @synthesize receiverTapContainer=_receiverTapContainer;
@property(retain, nonatomic) UILabel *receiverPlaceholdLabel; // @synthesize receiverPlaceholdLabel=_receiverPlaceholdLabel;
@property(retain, nonatomic) UIView *receiverSelectView; // @synthesize receiverSelectView=_receiverSelectView;
@property(retain, nonatomic) NSMutableArray *selectUinArray; // @synthesize selectUinArray=_selectUinArray;
@property(retain, nonatomic) CFT_UITLTextField *RedGiftMoneyField; // @synthesize RedGiftMoneyField=_RedGiftMoneyField;
@property(retain, nonatomic) CFT_UITLTextField *RedGiftNumField; // @synthesize RedGiftNumField=_RedGiftNumField;
@property(retain, nonatomic) UIControl *receiverSelectBgView; // @synthesize receiverSelectBgView=_receiverSelectBgView;
- (void)dealloc;
- (void)backgroundTap:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)onInputFinishClick;
- (void)layoutSubviews;
- (void)resetViewWithMoneyFile:(id)arg1 RedGiftNumFile:(id)arg2 MemoFile:(id)arg3;
- (id)initWithRedGiftType:(int)arg1 isOne2One:(_Bool)arg2 supportOrient:(_Bool)arg3 target:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

