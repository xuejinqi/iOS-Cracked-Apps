//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQPerformanceMemory : NSObject
{
    double _totalMemory;
    double _pageSize;
    struct MemoryNode _usedMemNode;
    struct MemoryNode _availableMemNode;
    struct MemoryNode _appMaxMemNode;
}

+ (id)getInstance;
- (double)appMaxMemory;
- (double)availableMemory;
- (double)usedMemory;
- (double)totalMemory;
- (void)reportMemoryRDM;
- (id)getReportParam;
- (_Bool)isNeedReport;
- (void)_delayStatisticsMemory;
- (void)didEnterBackGround;
- (void)_recordMemoryNode;
- (double)_getPageSize;
- (void)_initMemoryNode;
- (void)dealloc;
- (id)init;

@end

