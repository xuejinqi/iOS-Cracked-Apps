//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseInfoModel, NSDictionary;

@protocol FavAddDelegate <NSObject>

@optional
- (void)OnModifyCallback:(int)arg1 errorType:(int)arg2 model:(BaseInfoModel *)arg3 userInfo:(NSDictionary *)arg4;
- (void)OnAdderCallback:(int)arg1 errorType:(int)arg2 model:(BaseInfoModel *)arg3 userInfo:(NSDictionary *)arg4;
@end

