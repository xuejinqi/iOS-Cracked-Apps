//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TALLYCOREToString.h"

@class NSArray, TALLYCORETallyClientSyncHeaderDTO;

@interface TALLYCORETallyScenesContext : TALLYCOREToString
{
    TALLYCORETallyClientSyncHeaderDTO *_header;
    NSArray *_versionList;
    NSArray *_logList;
    NSArray *_updateFlowMonths;
}

+ (Class)updateFlowMonthsElementClass;
+ (Class)logListElementClass;
+ (Class)versionListElementClass;
@property(retain, nonatomic) NSArray *updateFlowMonths; // @synthesize updateFlowMonths=_updateFlowMonths;
@property(retain, nonatomic) NSArray *logList; // @synthesize logList=_logList;
@property(retain, nonatomic) NSArray *versionList; // @synthesize versionList=_versionList;
@property(retain, nonatomic) TALLYCORETallyClientSyncHeaderDTO *header; // @synthesize header=_header;
- (void).cxx_destruct;

@end

