//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSMutableDictionary;

@interface QQPerformanceURLCacher : NSObject
{
    NSMutableDictionary *_cacheURLs;
    NSMutableArray *_recordURLs;
    NSDate *_dayilyDate;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSDate *dayilyDate; // @synthesize dayilyDate=_dayilyDate;
@property(retain, nonatomic) NSMutableArray *recordURLs; // @synthesize recordURLs=_recordURLs;
@property(retain, nonatomic) NSMutableDictionary *cacheURLs; // @synthesize cacheURLs=_cacheURLs;
- (void).cxx_destruct;
- (void)asynSave;
- (_Bool)alreadyHandled:(id)arg1;
- (_Bool)isPerformanceSuccess:(id)arg1 URL:(id)arg2;
- (id)getWholeNewURL:(id)arg1 URL:(id)arg2;
- (_Bool)cacheToMost;
- (_Bool)isTimeToClean;
- (_Bool)alreadyHandledWithMsg:(id)arg1;
- (_Bool)alreadyHandledWithMsg:(id)arg1 URL:(id)arg2;
- (id)getUrlList:(id)arg1 URL:(id)arg2;
- (void)readCache;
- (id)init;

@end

