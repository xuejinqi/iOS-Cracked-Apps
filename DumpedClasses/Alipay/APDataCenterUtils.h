//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APDataCenterUtils : NSObject
{
}

+ (void)startCheckFreeSpaceInBackground;
+ (id)prettyBytesFormat:(unsigned long long)arg1;
+ (unsigned long long)totalDiskSpace;
+ (unsigned long long)freeDiskSpace;
+ (unsigned long long)sandboxSize;
+ (unsigned long long)folderSizeAtPath:(id)arg1;
+ (unsigned long long)_folderSizeAtPath:(const char *)arg1;

@end

