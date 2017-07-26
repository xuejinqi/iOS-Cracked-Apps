//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class DetailPraiseAndReward, MFAttributeLabel, SUImageView;

@interface HCInfoListCell : UITableViewCell
{
    SUImageView *_headImageView;
    MFAttributeLabel *_titleLabel;
    id <APCommonItemProtocol> _item;
    DetailPraiseAndReward *_widgetRP;
    SUImageView *_fuCardView;
}

@property(retain, nonatomic) SUImageView *fuCardView; // @synthesize fuCardView=_fuCardView;
@property(retain, nonatomic) DetailPraiseAndReward *widgetRP; // @synthesize widgetRP=_widgetRP;
@property(retain, nonatomic) id <APCommonItemProtocol> item; // @synthesize item=_item;
@property(retain, nonatomic) MFAttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SUImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)configureCellWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshFucarView;
- (void)refreshTitle;
- (void)refreshHeadView;

@end

