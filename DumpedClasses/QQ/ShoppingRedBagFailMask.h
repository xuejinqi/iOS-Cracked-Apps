//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQAsynUrlImageView, ShoppingWindow, UIButton, UILabel;

@interface ShoppingRedBagFailMask : UIView
{
    QQAsynUrlImageView *_failImage;
    UIButton *_knowBtn;
    UILabel *_failTip;
    UIView *_bg;
    UIButton *_closeBtn;
    ShoppingWindow *_maskWindow;
    _Bool _isViewShow;
}

@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
- (void)updateViewWithModel:(id)arg1;
- (void)addViewToWindow:(id)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

