//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol QQStructureMsgUtilityDelegate <NSObject>

@optional
- (void)uploadShareImageFailed:(int)arg1;
- (void)uploadShareImageSuccess:(NSString *)arg1;
- (void)getShortUrlsFailed:(NSArray *)arg1 errorCode:(int)arg2;
- (void)getShortUrlsSuccess:(NSArray *)arg1;
@end

