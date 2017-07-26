//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, NSMutableDictionary;

@interface FundTransferOutManager : NSObject
{
    DTRpcAsyncCaller *_transferOutToBalanceCaller;
    DTRpcAsyncCaller *_transferOutToBankCardCaller;
    DTRpcAsyncCaller *_queryTransferOutToCardCaller;
    DTRpcAsyncCaller *_applyTransferOutToBalanceCaller;
    DTRpcAsyncCaller *_sendSmsTransferOutCaller;
    DTRpcAsyncCaller *_verifySmsCaller;
    DTRpcAsyncCaller *_transferOutForFamilyCaller;
    DTRpcAsyncCaller *_prepareSignLargeAmountCaller;
    DTRpcAsyncCaller *_openTradeAccountCaller;
    DTRpcAsyncCaller *_queryChannelInfoCaller;
    NSMutableDictionary *_doubleClickDictionary;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)queryChannelInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)openTradeAccountComplete:(CDUnknownBlockType)arg1;
- (void)prepareSignLargeAmount:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)transferOut:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)verifyTransferOutSms:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendTransferOutSms:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)transferOutToBankCard:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)transferOutToBalance:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)writeDoubleCommitLog:(id)arg1;
- (void)dismissAll;
- (id)init;

@end

