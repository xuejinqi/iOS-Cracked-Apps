//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller;

@interface APDetailManager : NSObject
{
    DTRpcAsyncCaller *_reqDetailRpc;
}

+ (id)shareInstance;
@property(retain, nonatomic) DTRpcAsyncCaller *reqDetailRpc; // @synthesize reqDetailRpc=_reqDetailRpc;
- (void).cxx_destruct;
- (void)asyncLogABTestWithLFCPBFeed:(id)arg1;
- (void)requestDetailRPC:(id)arg1 bizType:(id)arg2 sceneCode:(id)arg3 complete:(CDUnknownBlockType)arg4;

@end

