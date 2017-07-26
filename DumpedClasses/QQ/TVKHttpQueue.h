//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue;

@interface TVKHttpQueue : NSObject
{
    NSOperationQueue *_internalQueue;
    NSMutableArray *_operationSet;
}

+ (id)sharedQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleEndingOfRequest:(id)arg1;
- (void)scheduleQueueWithSubtractedRequest:(id)arg1;
- (void)scheduleQueueWithAppendedRequest:(id)arg1;
- (void)setMaxConcurrentCount:(int)arg1;
- (void)addRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

