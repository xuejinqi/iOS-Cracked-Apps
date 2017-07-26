//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MOPItemThumbnail : NSObject
{
    _Bool _providerRealNamed;
    NSString *_itemId;
    NSString *_title;
    NSString *_img;
    NSString *_price;
    NSString *_priceUnit;
    NSArray *_tagList;
    NSString *_providerId;
    NSString *_providerImg;
    NSString *_providerZmScore;
    NSString *_providerGender;
    NSString *_providerNickname;
    NSString *_serviceSource;
    NSString *_target;
    NSString *_merchantName;
    NSString *_longitude;
    NSString *_latitude;
}

+ (Class)tagListElementClass;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *serviceSource; // @synthesize serviceSource=_serviceSource;
@property(nonatomic) _Bool providerRealNamed; // @synthesize providerRealNamed=_providerRealNamed;
@property(retain, nonatomic) NSString *providerNickname; // @synthesize providerNickname=_providerNickname;
@property(retain, nonatomic) NSString *providerGender; // @synthesize providerGender=_providerGender;
@property(retain, nonatomic) NSString *providerZmScore; // @synthesize providerZmScore=_providerZmScore;
@property(retain, nonatomic) NSString *providerImg; // @synthesize providerImg=_providerImg;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSString *priceUnit; // @synthesize priceUnit=_priceUnit;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

