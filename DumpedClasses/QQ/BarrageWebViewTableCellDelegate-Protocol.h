//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@protocol BarrageWebViewTableCellDelegate <NSObject>

@optional
- (int)getVideoState;
- (NSString *)getVideoId;
- (NSString *)getVideoviewInfo;
- (void)setBarrageViewDelegate:(id <BarrageWebViewDelegate>)arg1;
- (UIView *)getBarrageViewParent;
@end

