//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString;

@interface QQNearByFilterModel : QQModel <NSCopying>
{
    long long _filterSex;
    int _filterAge;
    int _filterInsterestID;
    int _filterTime;
    int _filterContellation;
    int _filterProfessionID;
    NSString *_strProfession;
    NSString *_strHomeTown;
    int _filterHomeCountry;
    NSString *_strHomeCountry;
    int _filterHomeProvince;
    NSString *_strHomeProvince;
    int _filterHomeCity;
    NSString *_strHomeCity;
    NSString *_strProfessionTitle;
    int _xo;
    long long _filSubInterestID;
}

+ (id)interestTextWithTag:(long long)arg1;
+ (id)occupationIconTitleArray;
+ (id)occupationsArray;
+ (id)timesArray;
+ (id)constellationsArray;
+ (id)insterestArray;
+ (id)agesArray;
+ (id)nearByFilterAgeRange;
+ (id)nearByFilterTimeInterval;
+ (id)defaultFilterModel;
@property(nonatomic) long long filSubInterestID; // @synthesize filSubInterestID=_filSubInterestID;
- (void).cxx_destruct;
- (_Bool)isNotLimited;
- (id)insterestArray;
- (id)timesArray;
- (id)constellations;
- (id)agesArray;
- (_Bool)isEqualToFilterModel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) int filterAge; // @dynamic filterAge;
@property(nonatomic) int filterContellation; // @dynamic filterContellation;
@property(nonatomic) int filterHomeCity; // @dynamic filterHomeCity;
@property(nonatomic) int filterHomeCountry; // @dynamic filterHomeCountry;
@property(nonatomic) int filterHomeProvince; // @dynamic filterHomeProvince;
@property(nonatomic) int filterInsterestID; // @dynamic filterInsterestID;
@property(nonatomic) int filterProfessionID; // @dynamic filterProfessionID;
@property(nonatomic) long long filterSex; // @dynamic filterSex;
@property(nonatomic) int filterTime; // @dynamic filterTime;
@property(copy, nonatomic) NSString *strHomeCity; // @dynamic strHomeCity;
@property(copy, nonatomic) NSString *strHomeCountry; // @dynamic strHomeCountry;
@property(copy, nonatomic) NSString *strHomeProvince; // @dynamic strHomeProvince;
@property(copy, nonatomic) NSString *strHomeTown; // @dynamic strHomeTown;
@property(copy, nonatomic) NSString *strProfession; // @dynamic strProfession;
@property(copy, nonatomic) NSString *strProfessionTitle; // @dynamic strProfessionTitle;

@end

