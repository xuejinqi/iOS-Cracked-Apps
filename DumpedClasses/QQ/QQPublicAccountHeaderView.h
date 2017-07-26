//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AvatarServiceDelegate.h"

@class NSString, QQAvatarView, QQPublicAccountFaceImageView, QQPublicAccountHeaderViewModel, QQVisualEffectView, UIButton, UIImageView, UILabel;

@interface QQPublicAccountHeaderView : UIView <AvatarServiceDelegate>
{
    double _offset;
    id <QQPublicAccountHeaderViewDelegate> _delegate;
    UIButton *_shareBtn;
    UIButton *_btnBack;
    QQAvatarView *_iconView;
    UILabel *_nickLabel;
    UILabel *_certificateLabel;
    UILabel *_summaryLabel;
    QQPublicAccountFaceImageView *_headBackgroundOLImageView;
    UIView *_headBackgroundOLView;
    QQVisualEffectView *_headVisualEffectView;
    UIImageView *_headBackgroundImageView;
    QQPublicAccountHeaderViewModel *_viewModel;
    UIImageView *_headbackimgView;
    UIView *_iconViewMask;
    UIImageView *_flagView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *flagView; // @synthesize flagView=_flagView;
@property(retain, nonatomic) UIView *iconViewMask; // @synthesize iconViewMask=_iconViewMask;
@property(retain, nonatomic) UIImageView *headbackimgView; // @synthesize headbackimgView=_headbackimgView;
@property(retain, nonatomic) QQPublicAccountHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *headBackgroundImageView; // @synthesize headBackgroundImageView=_headBackgroundImageView;
@property(retain, nonatomic) QQVisualEffectView *headVisualEffectView; // @synthesize headVisualEffectView=_headVisualEffectView;
@property(retain, nonatomic) UIView *headBackgroundOLView; // @synthesize headBackgroundOLView=_headBackgroundOLView;
@property(retain, nonatomic) QQPublicAccountFaceImageView *headBackgroundOLImageView; // @synthesize headBackgroundOLImageView=_headBackgroundOLImageView;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *certificateLabel; // @synthesize certificateLabel=_certificateLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) QQAvatarView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(nonatomic) id <QQPublicAccountHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)blurryImage:(id)arg1 withBlurLevel:(double)arg2;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (id)getPartOfImage:(id)arg1 rect:(struct CGRect)arg2;
- (void)shareClicked;
- (void)CloseParentViewController;
- (void)resetUIRect:(double)arg1 fOffset:(double)arg2;
- (void)relayoutWhenDidScroll:(double)arg1 tableHeight:(double)arg2;
- (void)resetUIRectWithTableOffset:(double)arg1;
- (double)getHeaderSize;
- (double)getHEADIMAGEBeginY;
- (double)getFlagIconSize;
- (double)getHEADIMAGESize;
- (double)getVisualEffectViewSize;
- (double)getSummaryPaddingTop;
- (double)getNickPaddingTop;
- (double)getNickFontSize:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)setCertifiedGrade:(long long)arg1 certificate:(id)arg2;
- (void)setNick:(id)arg1;
- (void)setBackgroudImageUrl:(id)arg1;
- (void)setBackgroudMask:(id)arg1;
- (void)setUin:(id)arg1;
- (void)insertViewBelowVisualEffectView:(id)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

