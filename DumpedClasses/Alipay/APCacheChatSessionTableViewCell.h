//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "APCacheChatSessionCheckBoxProtocol.h"

@class APCacheChatSessionCheckBox, APCacheChatSessionModel, NSString, UIImageView, UILabel, UIView;

@interface APCacheChatSessionTableViewCell : UITableViewCell <APCacheChatSessionCheckBoxProtocol>
{
    UIImageView *_avatar;
    UIImageView *_coverView;
    UILabel *_sizeText;
    UILabel *_titleText;
    APCacheChatSessionCheckBox *_selectCheck;
    UIView *_splitLine;
    _Bool _isLast;
    id <APCacheChatSessionTableViewCellProtocol> _delegate;
    APCacheChatSessionModel *_model;
}

@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(retain, nonatomic) APCacheChatSessionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) __weak id <APCacheChatSessionTableViewCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shouldUpdateSelection;
- (void)refreshAvatar;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

