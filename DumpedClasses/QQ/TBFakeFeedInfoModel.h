//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString;

@interface TBFakeFeedInfoModel : QQModel
{
    _Bool _hasShareToDiscover;
    unsigned int _date;
    NSString *_feedID;
    NSArray *_videoInfo;
}

@property(nonatomic) _Bool hasShareToDiscover; // @synthesize hasShareToDiscover=_hasShareToDiscover;
@property(retain, nonatomic) NSArray *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void)dealloc;
- (id)getVidList:(unsigned int)arg1;
- (id)converToFeedInfoModel;
- (void)filterDuplicateVideoInfo;
- (_Bool)delBatchVideoInfoWithVid:(id)arg1;
- (void)delVideoInfo:(unsigned long long)arg1;
- (void)insertVideoInfo:(id)arg1;

@end

