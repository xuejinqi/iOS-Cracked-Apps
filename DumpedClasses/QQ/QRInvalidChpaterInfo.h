//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSString;

@interface QRInvalidChpaterInfo : NSObject
{
    _Bool _isAllBookChange;
    NSString *_bookIDStr;
    NSString *_bookName;
    NSMutableArray *_invalidChapters;
    NSNumber *_timeStampNum;
    long long _minChangeChapter;
}

@property(nonatomic) long long minChangeChapter; // @synthesize minChangeChapter=_minChangeChapter;
@property(retain, nonatomic) NSNumber *timeStampNum; // @synthesize timeStampNum=_timeStampNum;
@property(nonatomic) _Bool isAllBookChange; // @synthesize isAllBookChange=_isAllBookChange;
@property(retain, nonatomic) NSMutableArray *invalidChapters; // @synthesize invalidChapters=_invalidChapters;
@property(copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy, nonatomic) NSString *bookIDStr; // @synthesize bookIDStr=_bookIDStr;
- (void).cxx_destruct;

@end

