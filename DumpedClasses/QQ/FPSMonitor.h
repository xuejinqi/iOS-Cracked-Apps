//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FPSBtnTouchedDelegate.h"

@class CADisplayLink, NSString;

@interface FPSMonitor : NSObject <FPSBtnTouchedDelegate>
{
    id <FPSBtnTouchedDelegate> _fpsBtnTouchedDelegate;
    unsigned long long _fps;
    CADisplayLink *_displayLink;
    unsigned long long _sumFrameInterval;
    double _lastUpdateTime;
}

+ (id)shareInstance;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) unsigned long long sumFrameInterval; // @synthesize sumFrameInterval=_sumFrameInterval;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned long long fps; // @synthesize fps=_fps;
@property(nonatomic) __weak id <FPSBtnTouchedDelegate> fpsBtnTouchedDelegate; // @synthesize fpsBtnTouchedDelegate=_fpsBtnTouchedDelegate;
- (void).cxx_destruct;
- (void)fpsBtnTouched;
- (void)onDisplayLink;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

