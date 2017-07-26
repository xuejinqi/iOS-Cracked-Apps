//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapStreetNumber, NSArray, NSString;

@interface AMapAddressComponent : AMapSearchObject
{
    NSString *_internalCity;
    NSString *_province;
    NSString *_city;
    NSString *_citycode;
    NSString *_district;
    NSString *_adcode;
    NSString *_township;
    NSString *_towncode;
    NSString *_neighborhood;
    NSString *_building;
    AMapStreetNumber *_streetNumber;
    NSArray *_businessAreas;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *businessAreas; // @synthesize businessAreas=_businessAreas;
@property(retain, nonatomic) AMapStreetNumber *streetNumber; // @synthesize streetNumber=_streetNumber;
@property(copy, nonatomic) NSString *building; // @synthesize building=_building;
@property(copy, nonatomic) NSString *neighborhood; // @synthesize neighborhood=_neighborhood;
@property(copy, nonatomic) NSString *towncode; // @synthesize towncode=_towncode;
@property(copy, nonatomic) NSString *township; // @synthesize township=_township;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
- (void).cxx_destruct;
- (id)init;

@end

