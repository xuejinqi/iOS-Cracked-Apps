//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol QZVideoFloatingWindowDelegate <NSObject>

@optional
- (void)videoFloatingWindowClose;
- (void)videoFloatingWindowClicked;
- (void)videoFloatingWindowPlayFailed:(NSError *)arg1;
- (void)videoFloatingWindowPlayEnd;
- (void)videoFloatingWindowBeginPlay;
@end

