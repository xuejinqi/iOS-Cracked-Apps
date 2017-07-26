//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabaseQueue, NSObject<OS_dispatch_queue>;

@interface PCCService : NSObject
{
    FMDatabaseQueue *_dbQueueInstance;
    NSObject<OS_dispatch_queue> *_pccQueue;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pccQueue; // @synthesize pccQueue=_pccQueue;
@property(retain, nonatomic) FMDatabaseQueue *dbQueueInstance; // @synthesize dbQueueInstance=_dbQueueInstance;
- (void).cxx_destruct;
- (void)loginSuccess;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)dbQueue;
- (id)userPathInHome;
- (id)pathComponentInHome:(id)arg1;
- (id)homeDirectory;
- (id)init;

@end

