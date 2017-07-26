//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSRecursiveLock;

@interface BLYAbstractLogic : NSOperation
{
    _Bool _shouldRetry;
    _Bool _logicExecuting;
    _Bool _logicFinished;
    _Bool _logicReady;
    _Bool _logicCanceled;
    unsigned long long _executionTimes;
    CDUnknownBlockType _completion;
    unsigned long long _logicNumber;
    NSError *_error;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property _Bool logicCanceled; // @synthesize logicCanceled=_logicCanceled;
@property _Bool logicReady; // @synthesize logicReady=_logicReady;
@property _Bool logicFinished; // @synthesize logicFinished=_logicFinished;
@property _Bool logicExecuting; // @synthesize logicExecuting=_logicExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long logicNumber; // @synthesize logicNumber=_logicNumber;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long executionTimes; // @synthesize executionTimes=_executionTimes;
- (void).cxx_destruct;
- (id)errorWithDescription:(id)arg1;
- (id)jceCMDString;
- (long long)persistType;
- (id)persistFileKey;
- (void)executeWithCompletion:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)cancel;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (_Bool)isCancelled;
- (_Bool)isReady;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (id)init;

@end

