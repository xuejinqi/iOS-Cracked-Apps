//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, NSArray, NSMutableArray;

@interface QZCFrameAnimationView : UIView
{
    CADisplayLink *_displayLink;
    long long _currentAnimateIndex;
    NSMutableArray *_cacheImages;
    _Bool _isCycle;
    id <QZCFrameAnimationViewDelegate> _frameAnimationDelegate;
    NSArray *_frameImagePaths;
    long long _frameRate;
    double _repeatCount;
}

@property(nonatomic) _Bool isCycle; // @synthesize isCycle=_isCycle;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(copy, nonatomic) NSArray *frameImagePaths; // @synthesize frameImagePaths=_frameImagePaths;
@property(nonatomic) __weak id <QZCFrameAnimationViewDelegate> frameAnimationDelegate; // @synthesize frameAnimationDelegate=_frameAnimationDelegate;
- (void).cxx_destruct;
- (void)resetDisplayLink;
- (void)setupDisplayLink;
- (void)onRender:(id)arg1;
- (void)doStopAnimating:(_Bool)arg1;
- (_Bool)canStartAnimating;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)isAnimating;
- (void)stopAnimating:(_Bool)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

