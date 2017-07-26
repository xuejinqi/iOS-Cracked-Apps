//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMoreOptionTableViewCell.h"

#import "QQDynamicAvatarViewDelegate.h"
#import "QQMoreOptionTableViewCellDelegate.h"
#import "QQPreviewActionDelegate.h"
#import "UIActionSheetDelegate.h"

@class EmojiEggView, NSString, QQAvatarView, QQMessageViewCellNickLabel, QQRecentLabel, QQRecentMessageModel, QQUnReadCountAnimationView, SDHeadImageView, UIFont, UIImageView, UILabel;

@interface QQMessageViewCell : QQMoreOptionTableViewCell <QQMoreOptionTableViewCellDelegate, UIActionSheetDelegate, QQPreviewActionDelegate, QQDynamicAvatarViewDelegate>
{
    QQAvatarView *_iconButton;
    SDHeadImageView *_sdImageView;
    QQMessageViewCellNickLabel *nickLabel;
    QQRecentLabel *groupRemindLabel;
    QQRecentLabel *detailLabel;
    QQRecentLabel *specialFriendLabel;
    UIImageView *_groupRankBG;
    UIImageView *sendStateView;
    UILabel *timeLabel;
    QQUnReadCountAnimationView *readTagView;
    UILabel *numLabel;
    UIImageView *_iconMsgFailedTips;
    UIImageView *_tencentIcon;
    NSString *_nickname;
    NSString *uin;
    QQRecentMessageModel *_model;
    _Bool lastEditState;
    _Bool _noTimeLabel;
    _Bool _simpleType;
    _Bool _isDrafting;
    _Bool _sendState;
    int _freeCallingState;
    int _groupRemind;
    UILabel *_searchDetailLabel;
    UIImageView *_draftIcon;
    UIImageView *_freeAudioIcon;
    UIImageView *_groupAudioIcon;
    int _groupAudioState;
    _Bool _isCluster;
    UIImageView *_orgGroupIcon;
    UIFont *_nickFont;
    UIFont *_detailFont;
    UIFont *_timeFont;
    struct CGRect _textRect;
    struct CGRect _detailTotalRect;
    UIImageView *_redPointView;
    EmojiEggView *_eggView;
    _Bool _isQuoteMsgDrafting;
    _Bool _nonNeedEditable;
    _Bool _isDisplayed;
}

+ (int)getTotalUnreadCount:(id)arg1;
+ (id)createVoiceOverLocalizedStringNew:(id)arg1 unReadCount:(int)arg2 unReadText:(id)arg3 content:(id)arg4 time:(id)arg5 localizedKeyName:(id)arg6;
@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(retain, nonatomic) QQAvatarView *iconButton; // @synthesize iconButton=_iconButton;
@property(nonatomic) _Bool nonNeedEditable; // @synthesize nonNeedEditable=_nonNeedEditable;
@property(nonatomic) _Bool isQuoteMsgDrafting; // @synthesize isQuoteMsgDrafting=_isQuoteMsgDrafting;
@property(retain, nonatomic) UIImageView *redPointView; // @synthesize redPointView=_redPointView;
@property(readonly, retain, nonatomic) QQRecentLabel *detailLabelReadOnly; // @synthesize detailLabelReadOnly=detailLabel;
@property(retain, nonatomic) QQUnReadCountAnimationView *readTagView; // @synthesize readTagView;
@property _Bool noTimeLabel; // @synthesize noTimeLabel=_noTimeLabel;
@property(retain, nonatomic) NSString *uin; // @synthesize uin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getCurrentIndexPathInTable;
- (id)getRightBtnContext:(int)arg1 customContext:(id)arg2;
- (id)getRightButtonTitle:(int)arg1;
- (void)onRightButtonSelected:(int)arg1 context:(id)arg2;
- (int)getRightBtnCount;
- (void)onPreviewActionDidSelect:(int)arg1 actionItem:(id)arg2;
- (id)onPreviewActionItemCreate;
- (int)MessageTabType;
- (void)removeUnreadMarkState;
- (int)getUnreadMarkState;
- (id)tableView:(id)arg1 buttonContextForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 skinImageNormalForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (void)calculateDetailLableFrame;
- (void)layoutSubviews;
- (void)onFontScaleChanged;
- (id)getVideoContext:(id)arg1;
- (_Bool)isVideoMessage:(id)arg1;
- (void)setC2CData:(id)arg1;
- (void)setGroupData:(id)arg1;
- (void)layoutNickLabelText:(id)arg1 searchDetailText:(id)arg2;
- (void)SetSendTab:(id)arg1;
- (void)CancelSendImag:(struct CGRect)arg1;
- (void)SetSendImag:(_Bool)arg1 Frame:(struct CGRect)arg2;
- (id)cutString:(id)arg1 maxWidth:(short)arg2;
- (id)getUnknownMsgTypeContent:(int)arg1 content:(id)arg2;
- (void)setData:(id)arg1;
- (void)prepareForReuse;
@property(nonatomic) _Bool simpleType; // @dynamic simpleType;
- (void)layoutModelResultFromSession:(id)arg1 label:(id)arg2;
- (void)layoutResultFromLabel:(id)arg1;
- (void)dealloc;
- (void)initGroupAudioIcon;
- (void)initFreeAudioIcon;
- (void)initDraftIcon;
- (void)initTencentIcon;
- (struct CGRect)_getDetailRectWithIconSize:(struct CGSize)arg1;
- (struct CGRect)_getDetailTotalRect;
- (struct CGRect)_getTextTotalRect;
- (void)initLayout;
- (void)setSkinIsSetDefault:(_Bool)arg1;
- (void)onDynamicAvatarReadyToPlayOnce:(id)arg1;
- (_Bool)shouldPlayOnceDynamicAvatar:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTopMostFlagWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIImageView *draftIcon; // @dynamic draftIcon;
@property(retain, nonatomic) UIImageView *freeAudioIcon; // @dynamic freeAudioIcon;
@property(nonatomic) int freeCallingState; // @dynamic freeCallingState;
@property(retain, nonatomic) UIImageView *groupAudioIcon; // @dynamic groupAudioIcon;
@property(nonatomic) int groupAudioState; // @dynamic groupAudioState;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImageView *iconMsgFailedTips; // @dynamic iconMsgFailedTips;
@property(nonatomic) _Bool isCluster; // @dynamic isCluster;
@property(nonatomic) _Bool isDrafting; // @dynamic isDrafting;
@property(retain, nonatomic) QQRecentMessageModel *model; // @dynamic model;
@property(retain, nonatomic) UILabel *searchDetailLabel; // @dynamic searchDetailLabel;
@property(readonly) Class superclass;

@end

