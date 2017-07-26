//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSString;

@interface APPassPreviewModel : O2OHTTPListModel
{
    NSString *_passType;
    NSString *_clientVersion;
    NSString *_appId;
    NSString *_tempId;
    NSString *_partnerId;
}

@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *tempId; // @synthesize tempId=_tempId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *passType; // @synthesize passType=_passType;
- (void).cxx_destruct;
- (id)operationType;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (_Bool)raise1002Exception;
- (_Bool)isPBResponse;
- (struct requestConfig)requestConfig;

@end

