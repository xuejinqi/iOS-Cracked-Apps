//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQCircularScrollView, UIView;

@protocol QQCircularScrollViewDataSource <NSObject>
- (struct CGSize)cellSizeOfCircularScrollView:(QQCircularScrollView *)arg1;
- (long long)numberOfCellsInCircularScrollView:(QQCircularScrollView *)arg1;
- (UIView *)circularScrollView:(QQCircularScrollView *)arg1 cellAtIndex:(long long)arg2;
@end

