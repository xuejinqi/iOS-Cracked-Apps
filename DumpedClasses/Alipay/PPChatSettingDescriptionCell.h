//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface PPChatSettingDescriptionCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIView *_topLine;
    UIView *_footerLine;
}

+ (double)heightForTitle:(id)arg1 Description:(id)arg2;
@property(retain, nonatomic) UIView *footerLine; // @synthesize footerLine=_footerLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 content:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

