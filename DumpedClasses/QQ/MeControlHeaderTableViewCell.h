//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FollowedAndFansNumberView;

@interface MeControlHeaderTableViewCell : UITableViewCell
{
    _Bool _isNightMode;
    FollowedAndFansNumberView *_followedNumberView;
    FollowedAndFansNumberView *_fansNumberView;
}

@property(retain, nonatomic) FollowedAndFansNumberView *fansNumberView; // @synthesize fansNumberView=_fansNumberView;
@property(retain, nonatomic) FollowedAndFansNumberView *followedNumberView; // @synthesize followedNumberView=_followedNumberView;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

