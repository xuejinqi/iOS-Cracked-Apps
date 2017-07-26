//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"

@class CLLocation, NSArray, NSMutableArray, NSString;

@interface QQStoryVideoFilterMgr : NSObject <TBBizNetworkLogicDelegate>
{
    _Bool _hasUpdate;
    _Bool _updating;
    _Bool _downloading;
    _Bool _needUpdateLbs;
    int _temperature;
    int _speed;
    double _firstlocationTime;
    CLLocation *_beforeLocation;
    unsigned int _reqWeatherTimes;
    NSArray *_currentFilters;
    NSMutableArray *_currentFilterInfos;
    NSString *_country;
    NSString *_city;
    NSString *_district;
    NSMutableArray *_cacheFilterInfos;
    NSString *_cacheDir;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(retain, nonatomic) NSMutableArray *cacheFilterInfos; // @synthesize cacheFilterInfos=_cacheFilterInfos;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSMutableArray *currentFilterInfos; // @synthesize currentFilterInfos=_currentFilterInfos;
@property(readonly, retain, nonatomic) NSArray *currentFilters; // @synthesize currentFilters=_currentFilters;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)handleEndGetLocation:(id)arg1;
- (void)addLbsNotification;
- (void)removeLbsNotification;
- (void)requestLbsAndWeather;
- (void)onTimerUpdateLbs;
- (void)refreshLbsDataDuringVideoCaptue;
- (void)unListenNotification;
- (void)listenNotification;
- (void)didDownloadFail:(id)arg1;
- (void)startProcessForDownload:(id)arg1;
- (_Bool)isValidLocalData:(id)arg1;
- (id)filterInvalidData:(id)arg1 withGps:(_Bool)arg2 withMediaType:(unsigned long long)arg3 withMediaSource:(unsigned long long)arg4;
- (id)defaultFiltersWithGps;
- (id)cachePath;
- (void)saveCache:(id)arg1;
- (void)retransferFilterInfo;
- (void)loadCacheData;
- (_Bool)isInternalVideoFilter:(long long)arg1;
- (id)getInfoByIndex:(long long)arg1;
- (int)getSpeed;
- (int)getWeather;
- (void)requestUpgrade;
- (id)init;
- (void)dealloc;
- (id)getVideoFiltersWithGps:(_Bool)arg1 withMediaType:(unsigned long long)arg2 withMediaSource:(unsigned long long)arg3;
- (id)getVideoFiltersWithGps:(_Bool)arg1 withMediaType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

