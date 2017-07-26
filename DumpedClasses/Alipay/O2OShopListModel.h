//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSDictionary, NSString;

@interface O2OShopListModel : O2OHTTPListModel
{
    NSString *_shopId;
    NSString *_itemId;
    double _longitude;
    double _latitude;
    long long _totolShops;
    NSDictionary *_monitorDic;
    NSString *_lastShopId;
}

@property(retain, nonatomic) NSString *lastShopId; // @synthesize lastShopId=_lastShopId;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(readonly, nonatomic) long long totolShops; // @synthesize totolShops=_totolShops;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)operationType;
- (id)responseObjects:(id)arg1;
- (_Bool)raise1002Exception;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (long long)pageSize;
- (id)rpcRequest;

@end

