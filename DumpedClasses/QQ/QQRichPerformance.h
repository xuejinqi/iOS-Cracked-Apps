//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQLockDictionary;

@interface QQRichPerformance : NSObject
{
    QQLockDictionary *_lockDic;
    QQLockDictionary *_eventDic;
    _Bool _enable;
}

+ (id)sharedInstance;
- (void)allClean;
- (void)doReportWithEventName:(id)arg1 result:(_Bool)arg2 info:(id)arg3;
- (void)printEvent:(id)arg1 result:(id)arg2;
- (void)event:(id)arg1 result:(int)arg2;
- (void)setEnable:(_Bool)arg1;
- (void)remove:(id)arg1;
- (void)stop:(id)arg1;
- (void)start:(id)arg1;
- (void)dealloc;
- (id)init;

@end

