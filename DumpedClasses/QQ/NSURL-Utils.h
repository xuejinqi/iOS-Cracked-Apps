//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (Utils)
+ (_Bool)isOrgURLHasParam:(id)arg1 orgOpenURL:(id)arg2;
+ (id)removeCredentialsFromURLString2:(id)arg1 orgOpenURL:(id)arg2;
+ (id)removeCredentialsFromURLString_Inner:(id)arg1;
+ (id)removeCredentialsFromURLString:(id)arg1 orgOpenURL:(id)arg2;
+ (id)removeCredentialsFromURLString:(id)arg1;
+ (id)encodeUrl:(id)arg1;
+ (id)decodeUrl:(id)arg1;
+ (_Bool)isSharedDocumentUrl:(id)arg1;
+ (_Bool)isOfficalAccountJumpPage:(id)arg1;
+ (id)queryComponentsOfUrlStringWithoutHashCheck:(id)arg1;
+ (id)queryComponentsOfUrlString:(id)arg1;
+ (id)parseQueryComponentsFromQueryString:(id)arg1 includingDuplicateParamName:(_Bool)arg2;
+ (id)parseQueryComponentsFromQueryString:(id)arg1;
+ (id)encodedURIComponent:(id)arg1;
- (id)URLByAppendingRandomToken;
- (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4 query:(id)arg5 fragment:(id)arg6;
- (id)URLByReplacingQuery:(id)arg1;
- (id)URLByRemovingQueryComponents:(id)arg1;
- (id)URLByAppendingQueryComponentNamed:(id)arg1 value:(id)arg2;
- (id)queryComponentNamed:(id)arg1 index:(long long)arg2;
- (id)queryComponentNamed:(id)arg1;
- (id)joinQueryComponents:(id)arg1;
- (id)queryComponentsIgnoringDuplicateParamName;
- (id)queryComponents;
@end

