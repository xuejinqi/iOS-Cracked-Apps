//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APResourceLoaderTask, NSDate, NSError, NSString;

@interface APMediaPlayerLogInfo : NSObject
{
    _Bool _needCache;
    _Bool _foundInCache;
    _Bool _success;
    int _stallCounts;
    NSString *_identifer;
    NSString *_business;
    NSDate *_startDate;
    NSDate *_loadedDate;
    NSDate *_readyDate;
    NSDate *_displayDate;
    NSError *_error;
    double _totalDuration;
    double _durationWatched;
    double _durationLoaded;
    APResourceLoaderTask *_firstTask;
}

@property(retain, nonatomic) APResourceLoaderTask *firstTask; // @synthesize firstTask=_firstTask;
@property(nonatomic) double durationLoaded; // @synthesize durationLoaded=_durationLoaded;
@property(nonatomic) double durationWatched; // @synthesize durationWatched=_durationWatched;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) int stallCounts; // @synthesize stallCounts=_stallCounts;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(retain, nonatomic) NSDate *readyDate; // @synthesize readyDate=_readyDate;
@property(retain, nonatomic) NSDate *loadedDate; // @synthesize loadedDate=_loadedDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool foundInCache; // @synthesize foundInCache=_foundInCache;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
- (void).cxx_destruct;

@end

