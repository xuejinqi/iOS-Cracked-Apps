//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QzoneLibInterface : NSObject
{
}

+ (void)showLog:(id)arg1;
+ (_Bool)isDevelopeVersion;
+ (void)playerLog:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 EFDict:(id)arg5 msg:(id)arg6;
+ (void)log:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 EFDict:(id)arg5 msg:(id)arg6;
+ (void)initLogDelegate:(id)arg1;
+ (id)delegate;

@end

