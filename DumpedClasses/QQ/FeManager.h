//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GReport, PReport;

@interface FeManager : NSObject
{
    GReport *gReport;
    PReport *pReport;
    _Bool _forceReport;
    _Bool _isReporting;
}

+ (id)sharedInstance;
@property _Bool isReporting; // @synthesize isReporting=_isReporting;
@property(nonatomic) _Bool forceReport; // @synthesize forceReport=_forceReport;
- (void).cxx_destruct;
- (_Bool)canDoJob;
- (void)doJob;
- (id)init;

@end

