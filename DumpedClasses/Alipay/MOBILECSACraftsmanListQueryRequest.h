//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSString;

@interface MOBILECSACraftsmanListQueryRequest : MOBILECSABaseRpcRequest
{
    int _pageNo;
    int _pageSize;
    NSString *_shopId;
}

@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

