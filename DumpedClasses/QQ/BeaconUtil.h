//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BeaconUtil : NSObject
{
}

+ (id)addParamWithSIdForUploadUrl:(id)arg1 sessionId:(id)arg2;
+ (id)generateAesKey;
+ (_Bool)isInternalEvent:(id)arg1;
+ (id)getIDFA;
+ (id)getIDFV;
+ (_Bool)isHTTPEnable;
+ (id)getCustomDateWithHour:(long long)arg1 minute:(long long)arg2;
+ (_Bool)isBetweenFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4;
+ (id)stringFromDate:(id)arg1 format:(id)arg2;
+ (_Bool)isSameDay:(id)arg1 toDate:(id)arg2;

@end

