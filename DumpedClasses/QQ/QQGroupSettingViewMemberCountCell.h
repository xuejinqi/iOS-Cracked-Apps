//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupSettingViewCell.h"

@class NSArray, NSMutableArray, UIImageView, UILabel;

@interface QQGroupSettingViewMemberCountCell : QQGroupSettingViewCell
{
    UILabel *_memCountLabel;
    UIImageView *_iconImageView;
    NSMutableArray *_circleViewArr;
    _Bool _hasBeenShowed;
    NSArray *_distriModelArr;
    long long _memberNum;
    _Bool _isShowingMemberDistributionCell;
}

@property(nonatomic) _Bool isShowingMemberDistributionCell; // @synthesize isShowingMemberDistributionCell=_isShowingMemberDistributionCell;
- (void)showCircleAnimation:(double)arg1;
- (void)setMemberCircleDictribution:(id)arg1 withMemberNum:(long long)arg2;
- (void)setupCircleViews;
- (void)layoutSubviews;
- (void)setMemberCountDesc:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

