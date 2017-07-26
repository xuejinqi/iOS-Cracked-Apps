//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSDictionary;

@interface UIButtonForAVControlBar : UIButton
{
    int _buttonState;
    int _enable;
    int _extra;
    _Bool weatherRelease;
    _Bool removeMark;
    NSDictionary *extraInfoDic;
    struct UIEdgeInsets touchEdgeInsets;
}

@property(nonatomic) int _buttonState; // @synthesize _buttonState;
@property(nonatomic) int _enable; // @synthesize _enable;
@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets;
@property(nonatomic) _Bool removeMark; // @synthesize removeMark;
@property(retain, nonatomic) NSDictionary *extraInfoDic; // @synthesize extraInfoDic;
- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)getEnable;
- (void)setEnable:(int)arg1;
- (int)getState;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 Enable:(int)arg2;
- (id)imageWithImage:(id)arg1 Alpha:(double)arg2;
- (void)updateStateInfo;
- (void)updateEnableInfo;
- (void)updateAccessibilityStringInfo;
- (int)indexOfState;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setExtra:(int)arg1;
- (void)ChangeAlphaWithAlpha:(double)arg1;
- (void)reloadStyle;
- (void)setBaseInfo;
- (id)initWithButtonInfo:(id)arg1;

@end

