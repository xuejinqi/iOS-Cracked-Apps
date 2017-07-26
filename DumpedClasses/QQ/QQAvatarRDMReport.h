//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQLockDictionary;

@interface QQAvatarRDMReport : NSObject
{
    QQLockDictionary *_timeTickDictForSAMEngine;
    QQLockDictionary *_timeTickDictForHTTP;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (id)getEventNameByIdentityTypeForHTTP:(int)arg1;
- (id)getEventNameByIdentityTypeForSAMEngine:(int)arg1;
- (id)getAvatarInfoKeyWithIdentity:(id)arg1 identityType:(int)arg2;
- (id)getSessionReportDataForHTTP:(id)arg1 isSucceed:(_Bool)arg2 error:(id)arg3 avatarInfoDict:(id)arg4;
- (void)reportForHTTP:(id)arg1 identityType:(int)arg2 isSucceed:(_Bool)arg3 failCode:(long long)arg4 reportDict:(id)arg5;
- (void)reportForSAMEngine:(id)arg1 identityType:(int)arg2 isSucceed:(_Bool)arg3 failCode:(long long)arg4 reportDict:(id)arg5;
- (long long)downloadTimeTickEndForHTTP:(id)arg1 identityType:(int)arg2;
- (void)downloadTimeTickBeginForHTTP:(id)arg1 identityType:(int)arg2;
- (long long)downloadTimeTickEndForSAMEngine:(id)arg1 identityType:(int)arg2;
- (void)downloadTimeTickBeginForSAMEngine:(id)arg1 identityType:(int)arg2;
- (void)logoutNotification;
- (id)init;

@end

