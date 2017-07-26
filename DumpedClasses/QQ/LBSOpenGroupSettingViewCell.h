//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface LBSOpenGroupSettingViewCell : UIView
{
    UILabel *_titleLabel;
    UILabel *_moreLabel;
    UIImageView *_disclosureIcon;
    double cHeight;
    _Bool hasFollowSummary;
    UILabel *_followSummary;
    int cellType;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutBaseViews;
- (void)setBaseHeight;
- (void)setCellHeight:(double)arg1;
- (void)initBaseViews:(int)arg1 hasFollowSummary:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

