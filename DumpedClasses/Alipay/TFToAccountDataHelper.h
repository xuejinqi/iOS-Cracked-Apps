//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, UIView;

@interface TFToAccountDataHelper : NSObject
{
    UIView *_receiverWarningInfoView;
    DTRpcAsyncCaller *_fundChannelRPCCaller;
    CDUnknownBlockType _finishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) DTRpcAsyncCaller *fundChannelRPCCaller; // @synthesize fundChannelRPCCaller=_fundChannelRPCCaller;
@property(retain, nonatomic) UIView *receiverWarningInfoView; // @synthesize receiverWarningInfoView=_receiverWarningInfoView;
- (void).cxx_destruct;
- (int)getCurrentChannelType:(id)arg1;
- (void)getDefaultFundChannelInfoWithReceiverUserId:(id)arg1 startBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (id)getWarningViewWithWarningInfo:(id)arg1;
- (void)hideReciverAccountWarningInfo;
- (void)showReciverAccountWarningInfo:(id)arg1 inView:(id)arg2;
- (void)clearAll;
- (void)dealloc;

@end

