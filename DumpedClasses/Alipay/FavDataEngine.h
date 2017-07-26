//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FavDataEngine : NSObject
{
    NSMutableArray *_rpcQueue;
}

@property(retain, nonatomic) NSMutableArray *rpcQueue; // @synthesize rpcQueue=_rpcQueue;
- (void).cxx_destruct;
- (void)sendRPCRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 silent:(_Bool)arg3;
- (void)sendRPCRequest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCollectionList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncCollections:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

