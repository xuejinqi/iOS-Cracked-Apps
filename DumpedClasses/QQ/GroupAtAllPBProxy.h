//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GroupAtAllPBProxy : NSObject
{
}

+ (int)removeSSOPkgHead:(CDStruct_7895f40e *)arg1 bodyBuffer:(basic_string_075b6133 *)arg2;
+ (id)getOIDBSSOPkg:(long long)arg1 serviceType:(long long)arg2 buffer:(id)arg3;
+ (id)getInstance;
- (id)parseGroupAtAllRspBuf:(CDStruct_7895f40e)arg1;
- (id)setGroupAtAllReqBuf:(long long)arg1 groupCode:(long long)arg2 command:(long long)arg3 serviceType:(long long)arg4;

@end

