//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@protocol QQStoryPermissionViewControllerDelegate <NSObject>

@optional
- (void)QQStoryPermissionFinishWithForbiddenList:(_Bool)arg1;
- (void)QQStoryPermissionFinishWithSelectedMemList:(NSMutableArray *)arg1 selectedType:(unsigned long long)arg2;
- (void)QQStoryPermissionSyncGroupModelStateWithShowlist:(NSMutableArray *)arg1 shieldList:(NSMutableArray *)arg2;
@end

