//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface APLogMgrInner : NSObject
{
    NSMutableArray *_currentTaskArray;
    NSOperationQueue *_networkQueue;
    NSObject<OS_dispatch_queue> *_oprationQueue;
    NSString *_serverURL;
}

@property(retain, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *oprationQueue; // @synthesize oprationQueue=_oprationQueue;
@property(retain, nonatomic) NSOperationQueue *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(retain, nonatomic) NSMutableArray *currentTaskArray; // @synthesize currentTaskArray=_currentTaskArray;
- (void).cxx_destruct;

@end

