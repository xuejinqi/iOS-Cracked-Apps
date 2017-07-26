//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"

@class NSDictionary, NSString, NSURL;

@protocol DTSchemeService <DTService>
- (_Bool)isApplicationSchemeWithURL:(NSURL *)arg1;
- (_Bool)handleURL:(NSURL *)arg1 userInfo:(NSDictionary *)arg2;
- (long long)indexOfClass:(Class)arg1;
- (void)unregisterHandlerClass:(Class)arg1;
- (_Bool)registerHandlerClass:(Class)arg1 atIndex:(long long)arg2;
- (_Bool)registerHandlerClass:(Class)arg1;
- (NSURL *)lastURL;

@optional
- (_Bool)setSchemeValue:(id)arg1 forKey:(NSString *)arg2;
- (id)getSchemeValueForKey:(NSString *)arg1;
- (_Bool)canHandleURL:(NSURL *)arg1;
- (void)unregisterDomainHandlerClass:(Class)arg1;
- (_Bool)registerDomainHandlerClass:(Class)arg1 atIndex:(long long)arg2;
- (_Bool)registerDomainHandlerClass:(Class)arg1;
@end

