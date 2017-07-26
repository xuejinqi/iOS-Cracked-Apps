//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"

@class EIMColleague, NSString, QQAvatarView, UIImageView, UILabel;

@interface EIMUserSummaryHeadView : UIView <UIActionSheetDelegate>
{
    UIImageView *_imgvBackground;
    UILabel *_displayNameLabel;
    UILabel *_subNameLabel;
    UIImageView *_flagVerify;
    QQAvatarView *_vHead;
    UIImageView *headbackimgView;
    NSString *_strUin;
    id <EIMUserSummaryHeaderViewDelegate> _delegate;
    EIMColleague *_datasource;
}

@property(retain, nonatomic) EIMColleague *datasource; // @synthesize datasource=_datasource;
@property(nonatomic) id <EIMUserSummaryHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *strUin; // @synthesize strUin=_strUin;
- (void)onHeadViewTap:(id)arg1;
- (double)heightInitValueForVisibile;
- (struct CGRect)headViewFrame;
- (void)updateHeadImage;
- (id)subTitle;
- (double)marginBottomForHeadImage;
- (void)resetUI;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)initUI;
- (void)dealloc;
- (id)initWithUin:(id)arg1 datasource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

