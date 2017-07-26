//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class APUnreadRedPointView, UIImageView, UILabel;

@interface UserSummaryMedalsView : UIButton
{
    UIImageView *_backgroundView;
    UIImageView *_medalsImageView;
    UILabel *_medalsCountLable;
    UIImageView *_noteDotView;
    APUnreadRedPointView *_unreadView;
}

@property(retain, nonatomic) APUnreadRedPointView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) UIImageView *noteDotView; // @synthesize noteDotView=_noteDotView;
@property(retain, nonatomic) UILabel *medalsCountLable; // @synthesize medalsCountLable=_medalsCountLable;
@property(retain, nonatomic) UIImageView *medalsImageView; // @synthesize medalsImageView=_medalsImageView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (id)imageWithColor:(id)arg1;
- (double)getMedalIconRight;
- (double)getMedalIconTop;
- (void)updateWithMedalsCount:(int)arg1;
- (void)updateLayout;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

