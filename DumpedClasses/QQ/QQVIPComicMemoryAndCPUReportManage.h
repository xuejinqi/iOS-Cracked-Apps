//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface QQVIPComicMemoryAndCPUReportManage : NSObject
{
    NSTimer *_normalTimer;
    double _usedMemBeforeEnterReader;
    long long _startTimestamp;
    NSString *_comicId;
    _Bool _isDanmuOpen;
}

+ (id)shareManager;
@property(nonatomic) _Bool isDanmuOpen; // @synthesize isDanmuOpen=_isDanmuOpen;
@property(retain, nonatomic) NSString *comicId; // @synthesize comicId=_comicId;
- (void).cxx_destruct;
- (void)reportMemoryStatu;
- (void)normalTimeClock:(id)arg1;
- (void)resumeNormalTimer;
- (void)stopNormalTimer;
- (void)resetStatu;

@end

