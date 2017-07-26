//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "AvatarServiceDelegate.h"
#import "QQDynamicAvatarViewDelegate.h"

@class CALayer, NSString, QQAvatarPendantPresenter, QQDynamicAvatarView, UIImage, UIImageView, UIView;

@interface QQAvatarView : UIButton <QQDynamicAvatarViewDelegate, AvatarServiceDelegate>
{
    NSString *_identity;
    int _identityType;
    int _avatarSize;
    int _avatarShape;
    UIImage *_defaultImage;
    QQAvatarPendantPresenter *_avatarPendantPresenter;
    int _xo;
    UIImageView *_offView;
    UIImageView *_subView;
    UIView *_blackMaskView;
    QQDynamicAvatarView *_dynamicAvatar;
    unsigned long long _msgTime;
    unsigned long long _pendantId;
    id <QQAvatarViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QQAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long pendantId; // @synthesize pendantId=_pendantId;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(retain, nonatomic) QQDynamicAvatarView *dynamicAvatar; // @synthesize dynamicAvatar=_dynamicAvatar;
@property(retain, nonatomic) QQAvatarPendantPresenter *avatarPendantPresenter; // @synthesize avatarPendantPresenter=_avatarPendantPresenter;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, nonatomic) int avatarShape; // @synthesize avatarShape=_avatarShape;
@property(readonly, nonatomic) int avatarSize; // @synthesize avatarSize=_avatarSize;
@property(readonly, nonatomic) int identityType; // @synthesize identityType=_identityType;
@property(readonly, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)loadAnonymousChatImageWithPortraitIdx:(int)arg1;
- (void)loadHeadImageByOpenID:(id)arg1 appID:(id)arg2;
- (void)setSubImage:(id)arg1;
- (void)setSubImage:(id)arg1 originX:(float)arg2 originY:(float)arg3;
- (void)setSubImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)loadBlackMaskViewForClosedGroup;
- (void)setGroupHeadMark:(unsigned long long)arg1;
- (void)setBlockEmblem:(int)arg1;
- (void)clearContent;
- (void)setImage:(id)arg1;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)loadDiscussGroupAvatar:(id)arg1;
- (void)loadAvatarByUrl:(id)arg1 shape:(int)arg2;
- (void)loadAvatarByUrl:(id)arg1;
- (void)loadAvatar:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 expiration:(double)arg5;
- (void)loadGroupOrganizationMemberAvatar:(id)arg1 GroupCode:(id)arg2;
- (void)loadLtAvatar:(id)arg1;
- (void)loadPhoneAvatar:(id)arg1;
- (void)loadEncounterAvatarByUin:(id)arg1;
- (void)loadEncounterAvatarByTinyId:(id)arg1;
- (void)loadGroupAvatar:(id)arg1;
- (void)loadQQAvatar:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)setFaceRingBackgroundImage:(id)arg1;
@property(retain, nonatomic) CALayer *faceRingLayer;
- (void)onDynamicAvatarReadyToPlayOnce:(id)arg1;
- (_Bool)shouldPlayOnceDynamicAvatar:(id)arg1;
- (void)onDynamicAvatarPlayFail:(id)arg1;
- (void)onDynamicAvatarPlayEnd:(id)arg1;
- (void)onDynamicAvatarPlayStart:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)loadDynamicAvatar:(double)arg1;
- (void)configDynamicAvatar;
@property(nonatomic) __weak id <QQDynamicAvatarViewDelegate> dynamicDelegate;
@property(readonly, nonatomic) unsigned long long avatarStatus;
@property(nonatomic) _Bool showDynamicAvatar;
- (int)avatarPendantFileSize;
- (struct CGRect)frameForAvatarPendant;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateAvatarPendantWhenCellReuse;
- (void)setAvatarpendantPlay:(id)arg1;
- (void)stopAnimateAvatarPendant:(long long)arg1;
- (void)stopAnimateAvatarPendant;
- (void)showAnimatePendantAndLoadStaticRes;
- (void)animateAvatarPendant;
@property(nonatomic) _Bool avatarPendantUserInteractionEnabled;
@property(nonatomic) long long avatarPendantID;
@property(nonatomic) _Bool shouldShowAvatarPendant;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

