//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface QRSerializedBookInfo : NSObject
{
    NSString *_bookId;
    NSString *_title;
    NSString *_updateDate;
    NSString *_lastUpdateChapterId;
    long long _version;
    long long _maxFreeChapter;
    long long _bookType;
    long long _downloadType;
    NSString *_downloadUrl;
    NSArray *_chapters;
    _Bool _needrc;
    long long _packageSize;
    NSString *_discount;
    NSString *_bookDiscount;
    NSString *_formatTypeStr;
    long long _totalBookPrice;
    int _xo;
    long long _specialPrice;
    NSString *_specialPriceMsg;
    NSString *_createdAt;
    unsigned long long _age;
    long long _vipDiscount;
    long long _vip2Discount;
}

@property(nonatomic) long long vip2Discount; // @synthesize vip2Discount=_vip2Discount;
@property(nonatomic) long long vipDiscount; // @synthesize vipDiscount=_vipDiscount;
@property(nonatomic) unsigned long long age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *specialPriceMsg; // @synthesize specialPriceMsg=_specialPriceMsg;
@property(nonatomic) long long specialPrice; // @synthesize specialPrice=_specialPrice;
- (_Bool)isExpiredInDB;
- (id)initWithJsonDic:(id)arg1;
- (_Bool)isHasVipDiscountInfo;
- (CDStruct_627e0f85)getDiscount;
- (_Bool)isFreeChapter:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *bookDiscount; // @dynamic bookDiscount;
@property(copy, nonatomic) NSString *bookId; // @dynamic bookId;
@property(nonatomic) long long bookType; // @dynamic bookType;
@property(copy, nonatomic) NSArray *chapters; // @dynamic chapters;
@property(copy, nonatomic) NSString *discount; // @dynamic discount;
@property(nonatomic) long long downloadType; // @dynamic downloadType;
@property(copy, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(copy, nonatomic) NSString *formatTypeStr; // @dynamic formatTypeStr;
@property(copy, nonatomic) NSString *lastUpdateChapterId; // @dynamic lastUpdateChapterId;
@property(nonatomic) long long maxFreeChapter; // @dynamic maxFreeChapter;
@property(nonatomic) _Bool needrc; // @dynamic needrc;
@property(nonatomic) long long packageSize; // @dynamic packageSize;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long totalBookPrice; // @dynamic totalBookPrice;
@property(copy, nonatomic) NSString *updateDate; // @dynamic updateDate;
@property(nonatomic) long long version; // @dynamic version;

@end

