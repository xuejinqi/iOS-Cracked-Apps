//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APLocalNotificationManager : NSObject
{
}

+ (id)languageKeyForLocalNotification;
+ (id)dateFormatter;
+ (id)dateFromDate:(id)arg1 afterDays:(long long)arg2 atHour:(long long)arg3;
+ (id)calcFirstFireDateFromConfig:(id)arg1 registerDate:(id)arg2;
+ (_Bool)isConfigVersionChanged:(id)arg1;
+ (_Bool)registerLocalNotificationWithIdentifier:(id)arg1 fromConfig:(id)arg2 fromLanguageChanged:(_Bool)arg3;
+ (_Bool)unregisterLocalNotificationWithIdentifier:(id)arg1;
+ (void)clearOldLocalNotifications;
- (void)dealloc;

@end

