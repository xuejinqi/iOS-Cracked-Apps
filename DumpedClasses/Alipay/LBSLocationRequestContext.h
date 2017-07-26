//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSError, NSLock, NSObject<OS_dispatch_semaphore>, NSString;

@interface LBSLocationRequestContext : NSObject
{
    _Bool _success;
    _Bool _background;
    _Bool _isCancelled;
    NSString *_uniqueKey;
    NSString *_bizType;
    double _startTime;
    double _desiredAccuracy;
    double _timeout;
    double _acceptInterval;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    CDUnknownBlockType _locatingBlock;
    NSLock *_resultLock;
    CLLocation *_location;
    NSError *_error;
}

@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property _Bool background; // @synthesize background=_background;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSLock *resultLock; // @synthesize resultLock=_resultLock;
@property(copy, nonatomic) CDUnknownBlockType locatingBlock; // @synthesize locatingBlock=_locatingBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) double acceptInterval; // @synthesize acceptInterval=_acceptInterval;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
- (void).cxx_destruct;

@end

