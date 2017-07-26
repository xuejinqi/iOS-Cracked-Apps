//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface BLRootBillModel : NSObject
{
    _Bool _hasMore;
    NSString *_nextQueryPageType;
    NSMutableArray *_monthList;
}

@property(retain, nonatomic) NSMutableArray *monthList; // @synthesize monthList=_monthList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *nextQueryPageType; // @synthesize nextQueryPageType=_nextQueryPageType;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)splitByMonth:(id)arg1;
- (void)appendData:(id)arg1;
- (void)clear;
- (id)monthBillAtIndex:(long long)arg1;
- (id)recordAtIndexPath:(id)arg1;
- (_Bool)removeRecordAtIndexPath:(id)arg1;
- (long long)recordCount;
- (long long)monthCount;
- (void)appendList:(id)arg1;
- (id)init:(id)arg1;
- (id)init;

@end

