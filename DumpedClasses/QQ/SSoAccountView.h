//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UIScrollView;

@interface SSoAccountView : UIControl
{
    UIImageView *_bgView;
    UIScrollView *_scrollView;
    id _target;
    SEL _action;
    unsigned long long _controlEvents;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)deleteMe:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)longPressBtn;
- (void)createAccountBtn:(struct CGRect)arg1 andUin:(long long)arg2 andNick:(id)arg3 andHead:(id)arg4 andAccountType:(int)arg5;
- (void)createAccountBtnView:(_Bool)arg1;
- (void)clearAccountBtnView;
- (void)addScrollBkTap:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

