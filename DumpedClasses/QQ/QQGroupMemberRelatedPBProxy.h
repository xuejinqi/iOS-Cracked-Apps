//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGroupMemberRelatedPBProxy : NSObject
{
}

+ (id)shareInstance;
- (id)parseGroupShutupMembersBuffer:(char *)arg1 len:(unsigned int)arg2;
- (id)getGroupShutupMembersBuffer:(unsigned long long)arg1;
- (id)parseGroupAdminBuffer:(char *)arg1 len:(int)arg2 errMsg:(basic_string_075b6133 *)arg3;
- (id)getGroupAdminBuffer:(unsigned long long)arg1;
- (id)getGroupAdminOIDBSSOPKG:(unsigned long long)arg1 command:(long long)arg2 serviceType:(long long)arg3;
- (id)getTransferGroupMemUinsOIDBSSOPKG:(unsigned long long)arg1 startUin:(unsigned long long)arg2 command:(long long)arg3 serviceType:(long long)arg4;
- (id)getSixGroupMemUinsBuffer:(unsigned long long)arg1;
- (id)getSixGroupMemUinsOIDBSSOPKG:(unsigned long long)arg1 command:(long long)arg2 serviceType:(long long)arg3;

@end

