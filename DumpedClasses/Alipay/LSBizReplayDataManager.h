//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface LSBizReplayDataManager : NSObject
{
    NSDictionary *_replayDataDict;
    NSMutableDictionary *_replayRawData;
    NSOperationQueue *_optionQueue;
    NSMutableArray *_optionTasks;
}

@property(retain, nonatomic) NSMutableArray *optionTasks; // @synthesize optionTasks=_optionTasks;
@property(retain, nonatomic) NSOperationQueue *optionQueue; // @synthesize optionQueue=_optionQueue;
@property(retain, nonatomic) NSMutableDictionary *replayRawData; // @synthesize replayRawData=_replayRawData;
@property(readonly, nonatomic) NSDictionary *replayDataDict; // @synthesize replayDataDict=_replayDataDict;
- (void).cxx_destruct;
- (id)mOptionTasks;
- (void)clearAllReplayOperation;
- (_Bool)needRetryResourceWithError:(id)arg1;
- (id)replayDataWithRawDict:(id)arg1;
- (id)parseReplayData:(id)arg1;
- (void)doReplayFileDownTask;
- (void)addReplayInfoDownloadTask:(id)arg1;
- (id)init;

@end

