//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ARUPUtil : NSObject
{
}

+ (id)xiamiSign:(id)arg1;
+ (id)getAppName;
+ (id)getUtdid;
+ (id)getFromFileWithKey:(id)arg1;
+ (void)saveToFileKey:(id)arg1 value:(id)arg2;
+ (void)logToLocalFile:(id)arg1;
+ (id)getOxcNum:(int)arg1;
+ (id)getTraceId;
+ (void)dealErrorResponse:(id)arg1 body:(id)arg2;
+ (id)getMd5FromData:(id)arg1;
+ (unsigned long long)nowMillSecond;
+ (id)getSecuritySign:(id)arg1;
+ (id)getAppVersion;
+ (id)getFileID;

@end

