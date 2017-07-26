//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSArray, NSDictionary, NSString, O2OCommentDetailListItem, O2OListViewController;

@interface O2OCommentDetailListModel : O2OMistModel
{
    O2OListViewController *_vc;
    NSString *_commendId;
    O2OCommentDetailListItem *_detailItem;
    NSDictionary *_monitorDic;
    NSArray *_responseList;
}

@property(retain, nonatomic) NSArray *responseList; // @synthesize responseList=_responseList;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) O2OCommentDetailListItem *detailItem; // @synthesize detailItem=_detailItem;
@property(retain, nonatomic) NSString *commendId; // @synthesize commendId=_commendId;
@property(nonatomic) __weak O2OListViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (id)operationType;
- (id)responseObjects:(id)arg1;
- (_Bool)shouldDowngrade;
- (id)templateConfig;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

