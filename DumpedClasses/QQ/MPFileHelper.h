//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPFileHelper : NSObject
{
}

+ (id)GetInstance;
- (id)GetIndexOfGroup:(int)arg1;
- (id)GetTaskTypeDescription:(int)arg1;
- (id)GetChannelTypeDescription:(int)arg1;
- (id)GetJsonForConnectInfo:(long long)arg1;
- (id)EncryptData:(id)arg1 withTeaKey:(id)arg2;
- (id)calcMd5ForString:(id)arg1;
- (id)calcMd5ForBinary:(id)arg1;
- (char *)calcMd5:(char *)arg1 length:(unsigned int)arg2;

@end

