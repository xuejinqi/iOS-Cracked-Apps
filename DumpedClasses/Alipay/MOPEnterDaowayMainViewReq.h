//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MOPEnterDaowayMainViewReq : NSObject
{
    int _showMode;
    int _pageNo;
    int _mapCityLevel;
    NSString *_system;
    NSString *_scene;
    NSString *_city;
    NSString *_securityId;
    NSString *_isDaoWeiAuthorized;
    double _longitude;
    NSString *_isOpenCityRequired;
    NSString *_allCityRequired;
    double _latitude;
    double _mapCenterLongitude;
    double _mapCenterLatitude;
    double _screenRangeLeftBottomLongtitude;
    double _screenRangeLeftBottomLatitude;
    double _rangeLeftBottomLongtitude;
    double _rangeLeftBottomLatitude;
    double _rangeRightTopLongtitude;
    double _rangeRightTopLatitude;
    NSString *_serviceType;
    NSString *_categoryId;
    double _zoomLevel;
    NSString *_selectedAggCityId;
    NSString *_selectedAggCityLevel;
    NSString *_locationDistinctCode;
    NSString *_timestamp;
    NSArray *_existedItemIds;
    NSString *_highlightItemId;
}

+ (Class)existedItemIdsElementClass;
@property(retain, nonatomic) NSString *highlightItemId; // @synthesize highlightItemId=_highlightItemId;
@property(retain, nonatomic) NSArray *existedItemIds; // @synthesize existedItemIds=_existedItemIds;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *locationDistinctCode; // @synthesize locationDistinctCode=_locationDistinctCode;
@property(retain, nonatomic) NSString *selectedAggCityLevel; // @synthesize selectedAggCityLevel=_selectedAggCityLevel;
@property(retain, nonatomic) NSString *selectedAggCityId; // @synthesize selectedAggCityId=_selectedAggCityId;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) int mapCityLevel; // @synthesize mapCityLevel=_mapCityLevel;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) double rangeRightTopLatitude; // @synthesize rangeRightTopLatitude=_rangeRightTopLatitude;
@property(nonatomic) double rangeRightTopLongtitude; // @synthesize rangeRightTopLongtitude=_rangeRightTopLongtitude;
@property(nonatomic) double rangeLeftBottomLatitude; // @synthesize rangeLeftBottomLatitude=_rangeLeftBottomLatitude;
@property(nonatomic) double rangeLeftBottomLongtitude; // @synthesize rangeLeftBottomLongtitude=_rangeLeftBottomLongtitude;
@property(nonatomic) double screenRangeLeftBottomLatitude; // @synthesize screenRangeLeftBottomLatitude=_screenRangeLeftBottomLatitude;
@property(nonatomic) double screenRangeLeftBottomLongtitude; // @synthesize screenRangeLeftBottomLongtitude=_screenRangeLeftBottomLongtitude;
@property(nonatomic) double mapCenterLatitude; // @synthesize mapCenterLatitude=_mapCenterLatitude;
@property(nonatomic) double mapCenterLongitude; // @synthesize mapCenterLongitude=_mapCenterLongitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *allCityRequired; // @synthesize allCityRequired=_allCityRequired;
@property(retain, nonatomic) NSString *isOpenCityRequired; // @synthesize isOpenCityRequired=_isOpenCityRequired;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int showMode; // @synthesize showMode=_showMode;
@property(retain, nonatomic) NSString *isDaoWeiAuthorized; // @synthesize isDaoWeiAuthorized=_isDaoWeiAuthorized;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *system; // @synthesize system=_system;
- (void).cxx_destruct;

@end

