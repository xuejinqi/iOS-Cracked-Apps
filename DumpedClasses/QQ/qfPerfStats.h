//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface qfPerfStats : NSObject
{
}

+ (void)flush;
+ (void)actResult:(id)arg1 withModule:(const char *)arg2 withFile:(const char *)arg3 withLine:(int)arg4 withResult:(int)arg5 withElapse:(long long)arg6 withSize:(long long)arg7 withError:(const char *)arg8 withObject:(id)arg9;
+ (void)actTrace:(id)arg1 withModule:(const char *)arg2 withFile:(const char *)arg3 withLine:(int)arg4 withObject:(id)arg5;
+ (id)dictToString:(id)arg1;
+ (id)nameFromPath:(const char *)arg1;

@end

