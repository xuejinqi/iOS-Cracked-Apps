//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CALayer, UIColor, UIImageView;

@interface QZVideoPlayerSlider : UIControl
{
    CALayer *_minimumTrackLayer;
    CALayer *_maximumTrackLayer;
    CALayer *_loadTrackLayer;
    UIImageView *_thumbView;
    struct CGPoint _preMovePoint;
    _Bool _isDragging;
    _Bool _lineCapRound;
    _Bool _continuous;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _loadValue;
    UIColor *_minimumTrackTintColor;
    UIColor *_maximumTrackTintColor;
    UIColor *_loadTrackTintColor;
    UIColor *_thumbTintColor;
}

@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *loadTrackTintColor; // @synthesize loadTrackTintColor=_loadTrackTintColor;
@property(retain, nonatomic) UIColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maximumTrackTintColor;
@property(retain, nonatomic) UIColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minimumTrackTintColor;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) double loadValue; // @synthesize loadValue=_loadValue;
@property(nonatomic) _Bool lineCapRound; // @synthesize lineCapRound=_lineCapRound;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)beginDragging;
- (void)endDragging;
- (void)delayReleaseDragging;
- (struct CGRect)trackRect;
- (double)trackLength;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
- (_Bool)isDragging;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

