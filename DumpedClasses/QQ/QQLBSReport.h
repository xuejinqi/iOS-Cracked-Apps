//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQLBSReport : NSObject
{
    _Bool _hasReportFirstLBS;
}

+ (id)lbsSystemFailUserInfo:(id)arg1;
+ (id)lbsSystemSuccessUserInfo:(id)arg1;
+ (long long)lbsSystemDisableType:(id)arg1;
+ (void)lbsReportBySystem:(_Bool)arg1 elapse:(unsigned long long)arg2 disableType:(long long)arg3 userInfo:(id)arg4;
+ (void)lbsReport:(_Bool)arg1 elapse:(unsigned long long)arg2 retryTimes:(int)arg3 userInfo:(id)arg4;
+ (id)getInstance;
- (void)lbsReportByBusiness:(Class)arg1 businessNumber:(id)arg2 url:(id)arg3 cacheTime:(long long)arg4 isBackGround:(_Bool)arg5;

@end

