//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSDate;

@interface APSortOperation : NSOperation
{
    _Bool _firstLoad;
    NSArray *_sortArray;
    NSDate *_date;
    NSDate *_totalDate;
}

@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) NSDate *totalDate; // @synthesize totalDate=_totalDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSArray *sortArray; // @synthesize sortArray=_sortArray;
- (void).cxx_destruct;
- (void)main;

@end

