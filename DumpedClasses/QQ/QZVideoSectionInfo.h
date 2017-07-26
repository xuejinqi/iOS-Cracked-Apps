//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZTVBase.h"

@class NSArray, NSString, QZVideoInfo;

@interface QZVideoSectionInfo : QZTVBase
{
    _Bool _notAdjustSeekTimeToZeroWhenIsEnd;
    NSString *_savePath;
}

+ (id)createStreamId:(id)arg1;
+ (id)dicParsedFromParamsString:(id)arg1;
@property(nonatomic) _Bool notAdjustSeekTimeToZeroWhenIsEnd; // @synthesize notAdjustSeekTimeToZeroWhenIsEnd=_notAdjustSeekTimeToZeroWhenIsEnd;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
- (void).cxx_destruct;
- (void)setVideoType:(long long)arg1;
- (void)reset;

// Remaining properties
@property(copy, nonatomic) NSArray *URLs; // @dynamic URLs;
@property(copy, nonatomic) NSArray *durations; // @dynamic durations;
@property(copy, nonatomic) NSString *feedVideoUrl; // @dynamic feedVideoUrl;
@property(copy, nonatomic) NSString *fileId; // @dynamic fileId;
@property(copy, nonatomic) NSString *formatString; // @dynamic formatString;
@property(nonatomic) _Bool isHLS; // @dynamic isHLS;
@property(nonatomic) long long liveStatus; // @dynamic liveStatus;
@property(nonatomic) long long retCode; // @dynamic retCode;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(copy, nonatomic) NSString *streamId; // @dynamic streamId;
@property(copy, nonatomic) NSString *vid; // @dynamic vid;
@property(retain, nonatomic) QZVideoInfo *videoInfo; // @dynamic videoInfo;
@property(copy, nonatomic) NSString *videoName; // @dynamic videoName;

@end

