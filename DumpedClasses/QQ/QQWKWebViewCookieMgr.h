//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSLock, NSMutableDictionary;

@interface QQWKWebViewCookieMgr : NSObject
{
    NSMutableDictionary *_dictDomainKeys;
    NSMutableDictionary *_dictDomainSKeys;
    NSLock *_domainKeysLock;
    NSMutableDictionary *_dictDomainSessionCookies;
    NSLock *_sessionCookiesLock;
    NSMutableDictionary *_dictRequestingKeys;
    NSDateFormatter *_formatter;
}

+ (id)getInstance;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSMutableDictionary *dictRequestingKeys; // @synthesize dictRequestingKeys=_dictRequestingKeys;
@property(retain, nonatomic) NSLock *sessionCookiesLock; // @synthesize sessionCookiesLock=_sessionCookiesLock;
@property(retain, nonatomic) NSMutableDictionary *dictDomainSessionCookies; // @synthesize dictDomainSessionCookies=_dictDomainSessionCookies;
@property(retain, nonatomic) NSLock *domainKeysLock; // @synthesize domainKeysLock=_domainKeysLock;
@property(retain, nonatomic) NSMutableDictionary *dictDomainSKeys; // @synthesize dictDomainSKeys=_dictDomainSKeys;
@property(retain, nonatomic) NSMutableDictionary *dictDomainKeys; // @synthesize dictDomainKeys=_dictDomainKeys;
- (void).cxx_destruct;
- (void)clearAllCookies;
- (void)syncWKWebViewCookieToCookieStorage;
- (id)getSessionCookieForDomain:(id)arg1;
- (void)setSessionCookieForDomain:(id)arg1 cookie:(id)arg2;
- (void)requestDidSucceeded:(id)arg1;
- (id)getCookieHeaderAndJSScriptForRequest:(id)arg1;
- (id)init;

@end

