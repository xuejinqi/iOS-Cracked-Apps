//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQView.h"

@class QQAvatarView, UIImageView, UILabel;

@interface UserSummaryLtHeaderView : QQView
{
    UIImageView *_bgView;
    UIImageView *_shadowView;
    UIImageView *_headViewBg;
    QQAvatarView *_headImageView;
    UILabel *_nickLabel;
    UILabel *_genderLabel;
}

@property(retain, nonatomic) UILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) QQAvatarView *headImageView; // @synthesize headImageView=_headImageView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;

@end

