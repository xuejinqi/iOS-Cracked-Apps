//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQWlxGlobalCache : NSObject
{
    NSMutableDictionary *_cacheDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (void)dealloc;
- (void)removeObjectForKey:(id)arg1;
- (id)getObjectForKey:(id)arg1;
- (void)inputObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

