//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QQVipDanmuPageView, QQVipDanmuTextView;

@protocol QQVipDanmuPageViewDataSource <NSObject>
- (_Bool)tryPauseDisplay:(QQVipDanmuPageView *)arg1;
- (_Bool)tryStartDisplay:(QQVipDanmuPageView *)arg1;
- (_Bool)shouldDisplayNext:(QQVipDanmuPageView *)arg1 withEndBullet:(QQVipDanmuTextView *)arg2;
- (_Bool)shouldSlowNext:(QQVipDanmuPageView *)arg1 withEndBullet:(QQVipDanmuTextView *)arg2;
- (NSArray *)bulletForRightNext:(QQVipDanmuPageView *)arg1 withEndBullet:(QQVipDanmuTextView *)arg2;
@end

