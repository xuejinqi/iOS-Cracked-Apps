//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GO2OShopService.h"

@interface GO2OShopServiceImpl : NSObject <GO2OShopService>
{
}

- (id)locationStringWithLongitude:(id)arg1 latitude:(id)arg2;
- (id)shopListSearchResultWithRpcResult:(id)arg1;
- (id)o2oSuggestResultFrom:(id)arg1;
- (id)channelParamsFrom:(id)arg1;
- (id)payInfoFrom:(id)arg1;
- (id)blocksFrom:(id)arg1;
- (id)blockTemplateFrom:(id)arg1;
- (id)shopInfoFrom:(id)arg1;
- (id)o2oHomePageResponseFrom:(id)arg1;
- (id)shopDetailWithRequest:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)searchShopListWithRequst:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3 options:(long long)arg4;
- (id)searchSuggestWithRequest:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)homePageDataWithRequest:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;

@end

