//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLCache.h"

@class NSLock;

@interface DTURLCache : NSURLCache
{
    NSLock *_cacheLock;
}

+ (id)etagRequest:(id)arg1;
+ (_Bool)hasETagInResponse:(id)arg1;
+ (id)CalculateETag:(id)arg1;
+ (id)diskPath;
+ (id)sharedCache;
+ (void)cleanDTURLCache;
+ (void)cleanNSURLCache;
@property(retain, nonatomic) NSLock *cacheLock; // @synthesize cacheLock=_cacheLock;
- (void).cxx_destruct;
- (id)ETagForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;

@end

