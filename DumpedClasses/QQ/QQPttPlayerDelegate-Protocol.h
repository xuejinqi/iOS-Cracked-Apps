//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QQAIOMsgModel, UIView;

@protocol QQPttPlayerDelegate <NSObject>
- (NSArray *)getPttList;

@optional
- (void)onPttPlayError:(int)arg1;
- (void)onPttPlayFinish;
- (struct CGRect)getVoiceRouteBtnFrame;
- (UIView *)getRouteTipParentView;
- (UIView *)getVoiceRouteBtnParentView;
- (void)onAutoPlay:(QQAIOMsgModel *)arg1;
@end

