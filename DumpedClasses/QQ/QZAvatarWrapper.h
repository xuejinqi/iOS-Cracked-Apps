//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IQZUrlDownloaderDelegate.h"

@class HeadIconThumbView, NSString, QZAvatarDecoView, QZVipIconAdvInfo, QzoneCommCombineVipInfo, QzoneCustomVipInfo, UIButton, UIImageView;

@interface QZAvatarWrapper : UIView <IQZUrlDownloaderDelegate>
{
    long long _uin;
    HeadIconThumbView *_avatarView;
    QZAvatarDecoView *_avatarDecoView;
    UIImageView *_ribandView;
    UIImageView *_vipIconView;
    UIImageView *_vipBgView;
    UIButton *_openVipButton;
    QzoneCommCombineVipInfo *_combineVipInfo;
    QzoneCustomVipInfo *_customVipInfo;
    UIImageView *_advImageView;
    UIButton *_advCloseButton;
    QZVipIconAdvInfo *_advInfo;
    NSString *_refer;
    id <QZAvatarWidgetDelegate> _delegate;
}

@property(retain, nonatomic) QzoneCommCombineVipInfo *combineVipInfo; // @synthesize combineVipInfo=_combineVipInfo;
@property(nonatomic) __weak id <QZAvatarWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QZAvatarDecoView *avatarDecoView; // @synthesize avatarDecoView=_avatarDecoView;
@property(retain, nonatomic) HeadIconThumbView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)removeVipIconAdv;
- (void)onCloseVipIconAdv;
- (void)clickVipIconAdv;
- (void)onVipIconAdvClick;
- (void)requestFinished:(id)arg1;
- (void)onUpdateVipIconAdv:(id)arg1;
- (void)onUpdateVipBgViewStatus:(id)arg1;
- (void)onUpdateCustomDiamond:(id)arg1;
- (void)onCombineVipInfoChanage:(id)arg1;
- (void)onClickVipIcon;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickAvatarView;
- (void)updateVipView:(_Bool)arg1;
- (void)updateVipStatus;
- (void)updateVipStatus:(id)arg1 customVipInfo:(id)arg2;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)avatarAnimation:(_Bool)arg1;
- (void)loadDefaultAvatarWrapper;
- (void)setAvatar:(long long)arg1;
- (void)registerNotification;
- (void)dealloc;
- (void)initVipView;
- (void)initAvatarDecoView:(long long)arg1;
- (void)initAvatarView:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 uin:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

