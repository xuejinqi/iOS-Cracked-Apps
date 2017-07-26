//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISearchConditionService.h"
#import "SearchConditionServiceImplCallback.h"

@class NSString, RegionModel, SearchConditionReqManager, SearchConditionServiceImpl;

@interface SearchConditionEngine : NSObject <ISearchConditionService, SearchConditionServiceImplCallback>
{
    RegionModel *_regionRoot;
    RegionModel *_saveRegionRoot;
    NSString *_saveRegionRootKey;
    int _dwSessionID;
    SearchConditionServiceImpl *_impl;
    SearchConditionReqManager *_requestManager;
}

+ (id)getInstance;
@property(retain, nonatomic) SearchConditionReqManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SearchConditionServiceImpl *impl; // @synthesize impl=_impl;
- (void).cxx_destruct;
- (void)removeRegionPath;
- (id)regionPath;
- (id)getRegionModelWithCode:(int)arg1 atArray:(id)arg2;
- (id)parseRegionNamesWithCounCode:(int)arg1 proCode:(int)arg2 cityCode:(int)arg3 areaCode:(int)arg4;
- (void)removeRegionConfig:(id)arg1;
- (void)parseRegionConfig;
- (id)addSubregionsIfNeedWithPrevModel:(id)arg1 regionModel:(id)arg2;
- (int)parseRegionCodeWithString:(id)arg1;
- (void)parseRegionConfigStart:(id)arg1;
- (void)refreshRegionRoot;
- (void)releaseRegionRoot;
- (id)getRegionRoot;
- (void)onRequestSearchResultCallback:(id)arg1;
- (int)requestCondSearch:(id)arg1 pageCount:(int)arg2 session:(int)arg3 flag:(int)arg4;
- (void)savaDefaultConditionModel:(id)arg1;
- (id)getDefaultConditionModel;
- (void)saveSearchConditionModelCache:(id)arg1;
- (id)loadSearchConditionModelCache;
- (void)clearSearchConditionModelCache;
- (_Bool)isExistSearchConditionModelCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

