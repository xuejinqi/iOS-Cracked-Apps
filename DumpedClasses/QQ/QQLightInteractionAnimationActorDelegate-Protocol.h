//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAAnimation, QQLightInteractionAnimationActor;

@protocol QQLightInteractionAnimationActorDelegate <NSObject>

@optional
- (void)animationDidStop:(QQLightInteractionAnimationActor *)arg1 anim:(CAAnimation *)arg2 finished:(_Bool)arg3;
- (void)animationDidStart:(QQLightInteractionAnimationActor *)arg1 anim:(CAAnimation *)arg2;
@end

