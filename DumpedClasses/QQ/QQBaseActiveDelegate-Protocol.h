//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@protocol QQBaseActiveDelegate <NSObject>
- (NSNumber *)recordValueForKey:(NSString *)arg1;
- (void)closeRecord:(NSString *)arg1 value:(_Bool)arg2;
- (void)saveRecordFlag;
- (_Bool)GetCurrentRecord:(void (^)(NSString *, NSDictionary *))arg1;
- (void)loadRecord;
- (void)setChatType:(NSString *)arg1 withValue:(NSString *)arg2;
- (void)viewLoadAction:(unsigned long long)arg1;
@end

