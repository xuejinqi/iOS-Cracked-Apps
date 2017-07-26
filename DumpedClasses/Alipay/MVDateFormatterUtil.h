//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MVDateFormatterUtil : NSObject
{
}

+ (id)expiredInfoBeforeDate:(id)arg1 limitNumberForShow:(int)arg2;
+ (id)today;
+ (_Bool)isToday:(id)arg1;
+ (id)dateStringFromDate:(id)arg1 dateFormat:(id)arg2;
+ (id)formalDateStringFromDate:(id)arg1;
+ (_Bool)isDayAfterTomorrow:(id)arg1;
+ (_Bool)isDayAfterToday:(id)arg1;
+ (id)formatCommentTime:(id)arg1;
+ (id)formatShowTimeForOrder:(id)arg1;
+ (id)dateFromSeconds:(id)arg1;
+ (id)dateFromTimeString:(id)arg1;
+ (id)dateStringFromSeconds:(id)arg1 dateFormat:(id)arg2;
+ (id)dateStringFromSeconds:(id)arg1;
+ (double)secondsFromDate:(id)arg1;
+ (void)resetDateFormatter;
+ (id)dateFormatter;
+ (id)specialDatePrefixForDate:(id)arg1;
+ (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;

@end

