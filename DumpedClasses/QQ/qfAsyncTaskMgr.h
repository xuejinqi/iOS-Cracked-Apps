//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface qfAsyncTaskMgr : NSObject
{
    NSMutableDictionary *_tasks;
}

- (void)clear;
- (void)cancelTask:(id)arg1;
- (void)onTaskExpired:(id)arg1;
- (id)getTask:(id)arg1;
- (void)setTimeout:(id)arg1 withExpired:(double)arg2;
- (void)dealloc;
- (id)init;

@end

