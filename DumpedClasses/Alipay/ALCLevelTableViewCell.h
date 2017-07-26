//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALCClearTableViewCell.h"

@class CAShapeLayer, UILabel, UIView;

@interface ALCLevelTableViewCell : ALCClearTableViewCell
{
    UILabel *_levelLabel;
    UIView *_leftStrip;
    UIView *_rightStrip;
    UILabel *_badLabel;
    UILabel *_mediumLabel;
    UILabel *_goodLabel;
    UILabel *_betterLabel;
    UILabel *_perfectLabel;
    UILabel *_sectionLabel;
    UIView *_sectionView;
    CAShapeLayer *_sectionLayer;
}

+ (double)height;
@property(retain, nonatomic) CAShapeLayer *sectionLayer; // @synthesize sectionLayer=_sectionLayer;
@property(retain, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) UILabel *sectionLabel; // @synthesize sectionLabel=_sectionLabel;
@property(retain, nonatomic) UILabel *perfectLabel; // @synthesize perfectLabel=_perfectLabel;
@property(retain, nonatomic) UILabel *betterLabel; // @synthesize betterLabel=_betterLabel;
@property(retain, nonatomic) UILabel *goodLabel; // @synthesize goodLabel=_goodLabel;
@property(retain, nonatomic) UILabel *mediumLabel; // @synthesize mediumLabel=_mediumLabel;
@property(retain, nonatomic) UILabel *badLabel; // @synthesize badLabel=_badLabel;
@property(retain, nonatomic) UIView *rightStrip; // @synthesize rightStrip=_rightStrip;
@property(retain, nonatomic) UIView *leftStrip; // @synthesize leftStrip=_leftStrip;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
- (void).cxx_destruct;
- (id)getSectionLabelWithFrame:(struct CGRect)arg1 text:(id)arg2 fontSize:(double)arg3;
- (void)setLevel:(long long)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

