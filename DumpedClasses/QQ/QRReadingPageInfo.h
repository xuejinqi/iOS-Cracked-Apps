//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface QRReadingPageInfo : NSObject
{
    _Bool _isCoverPage;
    _Bool _isLoadingNewChapter;
    _Bool _isOnlineReadingError;
    long long _chapterId;
    NSString *_chapterTitle;
    _Bool _isFree;
    NSString *_chapterPreContent;
    UIImage *_pageImage;
    long long _chapterPrice;
    long long _bookPrice;
    long long _priceFree;
    long long _balance;
    long long _balanceFree;
    long long _discount;
    long long _reasonForShowPageViewCover;
    int _xo;
    int _onlineReadingErrorType;
    long long _onlineReadingErrorValue;
    long long _vipDiscount;
    long long _vip2Discount;
    long long _specialPrice;
    NSString *_specialPriceMsg;
}

@property(copy, nonatomic) NSString *specialPriceMsg; // @synthesize specialPriceMsg=_specialPriceMsg;
@property(nonatomic) long long specialPrice; // @synthesize specialPrice=_specialPrice;
@property(nonatomic) long long vip2Discount; // @synthesize vip2Discount=_vip2Discount;
@property(nonatomic) long long vipDiscount; // @synthesize vipDiscount=_vipDiscount;
@property(nonatomic) long long onlineReadingErrorValue; // @synthesize onlineReadingErrorValue=_onlineReadingErrorValue;
@property(nonatomic) int onlineReadingErrorType; // @synthesize onlineReadingErrorType=_onlineReadingErrorType;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long balance; // @dynamic balance;
@property(nonatomic) long long balanceFree; // @dynamic balanceFree;
@property(nonatomic) long long bookPrice; // @dynamic bookPrice;
@property(nonatomic) long long chapterId; // @dynamic chapterId;
@property(retain, nonatomic) NSString *chapterPreContent; // @dynamic chapterPreContent;
@property(nonatomic) long long chapterPrice; // @dynamic chapterPrice;
@property(retain, nonatomic) NSString *chapterTitle; // @dynamic chapterTitle;
@property(nonatomic) long long discount; // @dynamic discount;
@property(nonatomic) _Bool isCoverPage; // @dynamic isCoverPage;
@property(nonatomic) _Bool isFree; // @dynamic isFree;
@property(nonatomic) _Bool isLoadingNewChapter; // @dynamic isLoadingNewChapter;
@property(nonatomic) _Bool isOnlineReadingError; // @dynamic isOnlineReadingError;
@property(retain, nonatomic) UIImage *pageImage; // @dynamic pageImage;
@property(nonatomic) long long priceFree; // @dynamic priceFree;
@property(nonatomic) long long reasonForShowPageViewCover; // @dynamic reasonForShowPageViewCover;

@end

