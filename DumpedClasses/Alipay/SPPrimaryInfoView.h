//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPIPluggableMarginSetCard.h"
#import "UITextFieldDelegate.h"

@class APContactInfo, APSwitch, NSArray, NSNumber, NSString, SPStrangerChatView, UIButton, UIControl, UIImageView, UILabel;

@interface SPPrimaryInfoView : UIView <SPIPluggableMarginSetCard, UITextFieldDelegate>
{
    UIView *_view_otherAddMe;
    UIView *_view_IAddOther;
    _Bool _localConfig;
    _Bool _hideAvatarTip;
    UIButton *_bgAreaBtn;
    UIButton *_headView;
    UIImageView *_userGradeView;
    UILabel *_nameView;
    UIControl *_signatureControl;
    UILabel *_signatureView;
    UIButton *_setSignatureBtn;
    NSArray *_buttons;
    id <SPICardContainer> _container;
    id _containerUserData;
    NSString *_bgImageUrl;
    NSString *_headImageUrl;
    NSString *_signature;
    NSString *_name;
    NSString *_gender;
    NSString *_userGrade;
    NSArray *_buttonsDefine;
    APSwitch *_showRealNameSwitch;
    UIView *_bottomSeparateView_addMe;
    SPStrangerChatView *_chatView_addMe;
    UILabel *_addMeRealNameLabel;
    UIImageView *_editNickView;
    UIButton *_addFriendBtn;
    UIButton *_addSentBtn;
    UIView *_bottomSeparateView_addOther;
    UIImageView *_bgViewPassedIn;
    UIImageView *_headViewInternal;
    UIView *_selfSetAvatarView;
    UIView *_whiteBgView;
    UIView *_blacklistRemind;
    UIView *_btnsAreaView;
    UILabel *_avatarTip;
    UIView *_avatarTipActionView;
    APContactInfo *_contactInfo;
    NSArray *_findContactMsgArr;
    NSNumber *_hadAddOther;
    NSString *_source;
    long long _cardTag;
}

+ (double)getBgVisibleHeight;
+ (double)bgHeight;
+ (id)defaultBlurredHeadImage;
@property(nonatomic) _Bool hideAvatarTip; // @synthesize hideAvatarTip=_hideAvatarTip;
@property(nonatomic) long long cardTag; // @synthesize cardTag=_cardTag;
@property(nonatomic) _Bool localConfig; // @synthesize localConfig=_localConfig;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber *hadAddOther; // @synthesize hadAddOther=_hadAddOther;
@property(retain, nonatomic) NSArray *findContactMsgArr; // @synthesize findContactMsgArr=_findContactMsgArr;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) UIView *avatarTipActionView; // @synthesize avatarTipActionView=_avatarTipActionView;
@property(retain, nonatomic) UILabel *avatarTip; // @synthesize avatarTip=_avatarTip;
@property(retain, nonatomic) UIView *btnsAreaView; // @synthesize btnsAreaView=_btnsAreaView;
@property(retain, nonatomic) UIView *blacklistRemind; // @synthesize blacklistRemind=_blacklistRemind;
@property(retain, nonatomic) UIView *whiteBgView; // @synthesize whiteBgView=_whiteBgView;
@property(retain, nonatomic) UIView *selfSetAvatarView; // @synthesize selfSetAvatarView=_selfSetAvatarView;
@property(retain, nonatomic) UIImageView *headViewInternal; // @synthesize headViewInternal=_headViewInternal;
@property(retain, nonatomic) UIImageView *bgViewPassedIn; // @synthesize bgViewPassedIn=_bgViewPassedIn;
@property(retain, nonatomic) UIView *bottomSeparateView_addOther; // @synthesize bottomSeparateView_addOther=_bottomSeparateView_addOther;
@property(retain, nonatomic) UIButton *addSentBtn; // @synthesize addSentBtn=_addSentBtn;
@property(retain, nonatomic) UIButton *addFriendBtn; // @synthesize addFriendBtn=_addFriendBtn;
@property(retain, nonatomic) UIImageView *editNickView; // @synthesize editNickView=_editNickView;
@property(retain, nonatomic) UILabel *addMeRealNameLabel; // @synthesize addMeRealNameLabel=_addMeRealNameLabel;
@property(retain, nonatomic) SPStrangerChatView *chatView_addMe; // @synthesize chatView_addMe=_chatView_addMe;
@property(retain, nonatomic) UIView *bottomSeparateView_addMe; // @synthesize bottomSeparateView_addMe=_bottomSeparateView_addMe;
@property(retain, nonatomic) APSwitch *showRealNameSwitch; // @synthesize showRealNameSwitch=_showRealNameSwitch;
@property(retain, nonatomic) NSArray *buttonsDefine; // @synthesize buttonsDefine=_buttonsDefine;
@property(retain, nonatomic) NSString *userGrade; // @synthesize userGrade=_userGrade;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(retain, nonatomic) id containerUserData; // @synthesize containerUserData=_containerUserData;
@property(nonatomic) __weak id <SPICardContainer> container; // @synthesize container=_container;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIButton *setSignatureBtn; // @synthesize setSignatureBtn=_setSignatureBtn;
@property(retain, nonatomic) UILabel *signatureView; // @synthesize signatureView=_signatureView;
@property(retain, nonatomic) UIControl *signatureControl; // @synthesize signatureControl=_signatureControl;
@property(retain, nonatomic) UILabel *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) UIImageView *userGradeView; // @synthesize userGradeView=_userGradeView;
@property(retain, nonatomic) UIButton *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIButton *bgAreaBtn; // @synthesize bgAreaBtn=_bgAreaBtn;
- (void).cxx_destruct;
- (void)onIgnoreAddFriendRequest:(id)arg1;
- (int)getFindContactMessageType;
- (void)onActionButtonClick:(id)arg1;
- (_Bool)isFriend;
- (_Bool)isMySelf;
- (void)remindToSetAvatar;
- (id)avatarTipLabel;
- (id)creatButtonsWithDefines:(id)arg1 alignmentWidth:(double)arg2 btnHeight:(double)arg3 iconSpace:(double)arg4 fontSize:(double)arg5 source:(id)arg6 contactInfo:(id)arg7;
- (void)layoutButtonRow:(id)arg1;
- (id)makeButtonsArea;
- (id)getAddFriendButtonDefine;
- (double)getCardBottomMargin;
- (long long)getTag;
- (void)setTag:(long long)arg1;
- (id)controlWithTag:(long long)arg1;
- (void)updateWithData:(id)arg1 isCachedData:(_Bool)arg2;
- (id)viewForCard;
- (double)heightForCard;
- (id)getUserData;
- (void)setUserData:(id)arg1;
- (void)setCardContainer:(id)arg1;
- (void)addSelfSetAvatarView;
- (void)updateSubviews;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

