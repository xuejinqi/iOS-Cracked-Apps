//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSDictionary, NSString;

@interface MOBILECSAShopRecommendGoodsRequest : MOBILECSABaseRpcRequest
{
    NSString *_shopId;
    NSString *_templateParams;
    NSString *_clientVersion;
    NSString *_tplVersion;
    NSString *_dtLogMonitor;
    NSDictionary *_ext;
}

+ (Class)extElementClass;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *tplVersion; // @synthesize tplVersion=_tplVersion;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

