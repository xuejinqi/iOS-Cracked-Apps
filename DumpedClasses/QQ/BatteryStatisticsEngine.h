//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BatteryStatisticsEngine : NSObject
{
}

+ (id)shareInstance;
- (void)usageResultProcess:(id)arg1 sampleDuration:(unsigned long long)arg2;
- (void)usageResultPreprocess:(id)arg1;
- (void)batteryUsageFeatch;
- (_Bool)checkNecessary;
- (void)batteryStatisticsToBeacon:(id)arg1;
- (_Bool)isWx:(id)arg1;
- (_Bool)isQQ:(id)arg1;

@end

