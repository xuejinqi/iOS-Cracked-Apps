//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QZLVSoundPlaySource;

@protocol QZLVSoundPlaySourceDelegate <NSObject>
- (void)audioSource:(QZLVSoundPlaySource *)arg1 changeDuration:(int)arg2 totalDuration:(int)arg3;
- (void)audioSource:(QZLVSoundPlaySource *)arg1 changeToState:(long long)arg2 fromState:(long long)arg3;
@end

