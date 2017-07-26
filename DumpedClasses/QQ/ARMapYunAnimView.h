//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface ARMapYunAnimView : UIView
{
    UIImageView *_yunLeftAboveView;
    UIImageView *_yunLeftBottomView;
    UIImageView *_yunRightAboveView;
    UIImageView *_yunRightBottomView;
    _Bool _isPlaying;
    id <ARMapYunAnimViewDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak id <ARMapYunAnimViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopAnimation;
- (id)createKeyframeAnimation:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 fromScale:(double)arg3 toScale:(double)arg4 duration:(double)arg5 beginTime:(double)arg6 timing:(id)arg7 delegate:(id)arg8;
- (void)startAnimation;
- (void)update:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

