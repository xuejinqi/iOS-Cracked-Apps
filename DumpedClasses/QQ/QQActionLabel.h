//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface QQActionLabel : UIView
{
    _Bool _alignCenter;
    _Bool _underline;
    UILabel *_titleLabel;
    UIButton *_touchButton;
    NSString *_actionUrl;
    NSString *_titleStr;
    int _type;
    id <QQActionLabelDelegate> _touchActionDelegate;
    int _xo;
    long long textAlignment;
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment;
- (void)touchAction;
- (void)dealloc;
@property(nonatomic) _Bool alignCenter; // @dynamic alignCenter;
- (void)setUnderline:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setWapTitle:(id)arg1;
- (void)setActionUrl:(id)arg1;
- (void)setTitle:(id)arg1 actionText:(id)arg2;
- (void)setShadowColor:(id)arg1 shadowOffset:(struct CGSize)arg2;
- (void)setActionTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <QQActionLabelDelegate> touchActionDelegate; // @dynamic touchActionDelegate;
@property(nonatomic) int type; // @dynamic type;

@end

