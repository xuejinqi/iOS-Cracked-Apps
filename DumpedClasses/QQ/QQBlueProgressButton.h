//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BlueProgressView, NSString, UIButton;

@interface QQBlueProgressButton : UIView
{
    float _progress;
    UIButton *_button;
    NSString *_originalTitle;
    _Bool _enabled;
    int _xo;
    BlueProgressView *_progressView;
}

+ (id)progressBlueButtonForTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
- (void)stop;
- (_Bool)isDownloading;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
@property(nonatomic) float progress; // @dynamic progress;
- (id)initWithButton:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIButton *button; // @dynamic button;
@property(retain, nonatomic) NSString *originalTitle; // @dynamic originalTitle;

@end

