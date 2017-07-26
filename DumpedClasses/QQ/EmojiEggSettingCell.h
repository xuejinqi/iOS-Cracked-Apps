//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface EmojiEggSettingCell : UITableViewCell
{
    _Bool _isAnimated;
    UIImageView *_iconView;
    UILabel *_emojiTitleLabel;
    UILabel *_emojiDetailLabel;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UILabel *emojiDetailLabel; // @synthesize emojiDetailLabel=_emojiDetailLabel;
@property(retain, nonatomic) UILabel *emojiTitleLabel; // @synthesize emojiTitleLabel=_emojiTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)shiningAnimation;
- (void)updateWithItem:(id)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

