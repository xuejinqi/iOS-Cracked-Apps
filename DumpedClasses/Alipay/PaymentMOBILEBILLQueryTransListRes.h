//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PaymentMOBILEBILLBizResult;

@interface PaymentMOBILEBILLQueryTransListRes : NSObject
{
    int _pageCount;
    int _page;
    NSArray *_transList;
    long long _totalCount;
    PaymentMOBILEBILLBizResult *_bizResult;
}

+ (Class)transListElementClass;
@property(retain, nonatomic) PaymentMOBILEBILLBizResult *bizResult; // @synthesize bizResult=_bizResult;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int page; // @synthesize page=_page;
@property(nonatomic) int pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NSArray *transList; // @synthesize transList=_transList;
- (void).cxx_destruct;

@end

