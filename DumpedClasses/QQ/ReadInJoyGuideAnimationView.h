//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface ReadInJoyGuideAnimationView : UIView
{
    NSTimer *_repeatTimer;
    int _repeatTotalTimes;
    int _repeatTimes;
}

- (void)dealloc;
- (void)generateOneStar:(id)arg1;
- (void)starAnimationForButton;
- (void)startAnimation;
- (void)stopAnimation;
- (id)initWithAnimationWithTimes:(int)arg1;

@end

