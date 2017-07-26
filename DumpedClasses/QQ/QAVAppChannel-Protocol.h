//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol QAVAppChannel <NSObject>
- (_Bool)requestCmd:(NSData *)arg1 cmdName:(NSString *)arg2 result:(void (^)(int, NSString *, NSData *))arg3;
- (_Bool)requestAppCmd:(NSData *)arg1 roomId:(unsigned int)arg2 result:(void (^)(int, NSString *, NSData *))arg3;
- (_Bool)requestAppCmd:(NSData *)arg1 result:(void (^)(int, NSString *, NSData *))arg2;
- (unsigned long long)getTinyId;

@optional
- (_Bool)tinyIDToIdentifier:(NSArray *)arg1 ret:(void (^)(int, NSArray *))arg2;
- (_Bool)identifierToTinyId:(NSArray *)arg1 ret:(void (^)(int, NSArray *))arg2;
@end

