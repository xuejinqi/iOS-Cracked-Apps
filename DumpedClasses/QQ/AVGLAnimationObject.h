//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSTimer, QQAVShowPanelRestruct;

@interface AVGLAnimationObject : NSObject
{
    int _animationStep;
    double _animationDuration;
    long long _animationCurve;
    id _animationDelegate;
    int _animationType;
    SEL _animationStopSelector;
    NSTimer *_animationTimer;
    NSMutableArray *_animationListener;
    NSString *_animationKey;
    QQAVShowPanelRestruct *_animationBaseView;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) QQAVShowPanelRestruct *animationBaseView; // @dynamic animationBaseView;
@property(nonatomic) long long animationCurve; // @dynamic animationCurve;
@property(nonatomic) id animationDelegate; // @dynamic animationDelegate;
@property(nonatomic) double animationDuration; // @dynamic animationDuration;
@property(copy, nonatomic) NSString *animationKey; // @dynamic animationKey;
@property(retain, nonatomic) NSMutableArray *animationListener; // @dynamic animationListener;
@property(nonatomic) int animationStep; // @dynamic animationStep;
@property(nonatomic) SEL animationStopSelector; // @dynamic animationStopSelector;
@property(retain, nonatomic) NSTimer *animationTimer; // @dynamic animationTimer;
@property(nonatomic) int animationType; // @dynamic animationType;

@end

