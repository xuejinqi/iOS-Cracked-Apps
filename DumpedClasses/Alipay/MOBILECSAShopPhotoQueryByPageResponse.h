//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSABaseRpcResponse.h"

@class NSArray;

@interface MOBILECSAShopPhotoQueryByPageResponse : MOBILECSABaseRpcResponse
{
    _Bool _hasNextPage;
    int _pageSize;
    int _pageOffset;
    NSArray *_goods;
    NSArray *_tabs;
}

+ (Class)tabsElementClass;
+ (Class)goodsElementClass;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSArray *goods; // @synthesize goods=_goods;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) int pageOffset; // @synthesize pageOffset=_pageOffset;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;

@end

