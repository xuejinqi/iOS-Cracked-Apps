//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTimer.h"

@interface NSTimer (BlockSupport)
+ (void)fxInvokeTimerBlock:(id)arg1;
+ (void)fxInvokeBlock:(id)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 timerBlock:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
@end

