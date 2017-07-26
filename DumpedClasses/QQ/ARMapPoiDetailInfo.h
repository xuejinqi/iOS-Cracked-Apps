//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString;

@interface ARMapPoiDetailInfo : QQModel <NSCopying>
{
    unsigned int _type;
    unsigned int _appID;
    unsigned long long _poiId;
    double _lat;
    double _lng;
    NSString *_name;
    NSString *_addr;
    unsigned long long _adCode;
    NSString *_iconUrl;
    NSString *_bannerUrl;
    NSString *_photoUrl;
}

@property(nonatomic) unsigned int appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(copy, nonatomic) NSString *bannerUrl; // @synthesize bannerUrl=_bannerUrl;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long adCode; // @synthesize adCode=_adCode;
@property(copy, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) unsigned long long poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

