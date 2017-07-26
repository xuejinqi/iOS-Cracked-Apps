//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface QQProfileModel : NSObject <NSCopying>
{
    long long _uin;
    short _sex;
    int _age;
    int _birth;
    NSString *_nick;
    NSString *_sig;
    int _counrtyID;
    int _proviceID;
    int _cityID;
    int _qzoneID;
    NSMutableArray *_tags;
    int _hometownCountryID;
    int _hometownProvinceID;
    int _hometownCityID;
    int _hometownZoneID;
    int _constellation;
    int _occupation;
    int _hobbyTag;
    NSString *_email;
    NSString *_company;
    NSString *_school;
    NSString *_introduction;
    int _xo;
    long long _campusEnrolYear;
    long long _campusCollegeId;
    long long _campusSchoolId;
    NSString *_campusSchool;
    NSString *_campusCollege;
    NSString *_campusRealName;
    NSString *_campusClass;
}

@property(retain, nonatomic) NSString *campusClass; // @synthesize campusClass=_campusClass;
@property(retain, nonatomic) NSString *campusRealName; // @synthesize campusRealName=_campusRealName;
@property(retain, nonatomic) NSString *campusCollege; // @synthesize campusCollege=_campusCollege;
@property(retain, nonatomic) NSString *campusSchool; // @synthesize campusSchool=_campusSchool;
@property(nonatomic) long long campusSchoolId; // @synthesize campusSchoolId=_campusSchoolId;
@property(nonatomic) long long campusCollegeId; // @synthesize campusCollegeId=_campusCollegeId;
@property(nonatomic) long long campusEnrolYear; // @synthesize campusEnrolYear=_campusEnrolYear;
@property(nonatomic) int hometownCountryID; // @synthesize hometownCountryID=_hometownCountryID;
@property(retain, nonatomic) NSString *sig; // @synthesize sig=_sig;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property int qzoneID; // @synthesize qzoneID=_qzoneID;
@property int cityID; // @synthesize cityID=_cityID;
@property int proviceID; // @synthesize proviceID=_proviceID;
@property int counrtyID; // @synthesize counrtyID=_counrtyID;
@property int birth; // @synthesize birth=_birth;
@property int age; // @synthesize age=_age;
@property short sex; // @synthesize sex=_sex;
@property long long uin; // @synthesize uin=_uin;
- (void)syncToAccountsModel:(_Bool)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *company; // @dynamic company;
@property(nonatomic) int constellation; // @dynamic constellation;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) int hobbyTag; // @dynamic hobbyTag;
@property(nonatomic) int hometownCityID; // @dynamic hometownCityID;
@property(nonatomic) int hometownProvinceID; // @dynamic hometownProvinceID;
@property(nonatomic) int hometownZoneID; // @dynamic hometownZoneID;
@property(retain, nonatomic) NSString *introduction; // @dynamic introduction;
@property(nonatomic) int occupation; // @dynamic occupation;
@property(retain, nonatomic) NSString *school; // @dynamic school;
@property(retain, nonatomic) NSMutableArray *tags; // @dynamic tags;

@end

