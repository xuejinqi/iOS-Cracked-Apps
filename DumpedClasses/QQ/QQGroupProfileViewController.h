//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupTableStyleViewController.h"

#import "IEditViewControllerObserver.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "ModifyGroupTagsDelegate.h"
#import "PushBannerViewDelegate.h"
#import "QQAsynUrlImagesPlayerDelegae.h"
#import "QQEditGroupLocationDelegate.h"
#import "QQEmotionLabelDelegate.h"
#import "QQGroupCategoryListViewControllerDelegate.h"
#import "QQGroupFaceWallLogicDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UserSummaryTouchControlDelegate.h"

@class AddFriendSendMessageViewController, NSArray, NSString, QQAsynUrlImagesPlayer, QQGroupFaceWallLogic, QQGroupFaceWallUI, QQGroupLinkForwardHelper, QQGroupSettingModel, QQPushBannerView_Advertisement, UIButton, UIImageView, UIView, UserSummaryTouchControl;

@interface QQGroupProfileViewController : QQGroupTableStyleViewController <QQGroupCategoryListViewControllerDelegate, QQEditGroupLocationDelegate, QQAsynUrlImagesPlayerDelegae, IEditViewControllerObserver, UIActionSheetDelegate, QQGroupFaceWallLogicDelegate, QQEmotionLabelDelegate, MFMailComposeViewControllerDelegate, ModifyGroupTagsDelegate, UIAlertViewDelegate, PushBannerViewDelegate, UserSummaryTouchControlDelegate>
{
    QQGroupSettingModel *_groupModel;
    id <IQQGroupProfileViewController> _delegate;
    int _SourceID;
    AddFriendSendMessageViewController *_addFriend;
    QQGroupLinkForwardHelper *_sharedLinkHelper;
    NSString *_sharedGroupLink;
    QQGroupFaceWallUI *_faceWallView;
    QQGroupFaceWallLogic *_faceWallLogic;
    UserSummaryTouchControl *_bottomOperationView;
    int _curSelectGroupType;
    long long _modifyCount;
    long long _limitCount;
    UIButton *_saveBt;
    unsigned long long _groupCodeAll;
    _Bool _backToRecentMsgTab;
    _Bool _fromCreditLevel;
    UIButton *_operationButton;
    UIView *_divideLineView;
    QQGroupSettingModel *_intraCityModel;
    NSArray *_indexPathInfos;
    int _groupCategory;
    int _groupOption;
    _Bool _modifyLocation;
    _Bool _modifyGroupTags;
    NSArray *_groupTags;
    NSString *_location;
    long long _latitude;
    long long _longitude;
    long long _poiId;
    QQPushBannerView_Advertisement *_infoCheckingRemindView;
    _Bool _isphotoBrowserViewShow;
    _Bool _modifyGroupTribe;
    _Bool _hasGroupTribe;
    unsigned int _groupTribeType;
    long long _groupTribeID;
    QQAsynUrlImagesPlayer *_headImagesView;
    UIButton *_clickEnterHeaderButton;
    UIImageView *_defaultHeadView;
    NSString *_groupTribeName;
}

@property(copy, nonatomic) NSString *groupTribeName; // @synthesize groupTribeName=_groupTribeName;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sendEmailWithRecipients:(id)arg1;
- (id)filterEmojiStr:(id)arg1;
- (struct _NSRange)GetDeletedIOSEmojiRange:(id)arg1;
- (_Bool)isGroupProfileModified;
- (void)cityGroupModifyCountCheck;
- (void)checkImageHeadSize;
- (id)initWithGroupCode:(unsigned long long)arg1 groupUin:(unsigned long long)arg2 SourceID:(int)arg3 bForceLoadData:(_Bool)arg4;
- (id)getKeyByIndex:(int)arg1;

// Remaining properties
@property(nonatomic) _Bool backToRecentMsgTab; // @dynamic backToRecentMsgTab;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <IQQGroupProfileViewController> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fromCreditLevel; // @dynamic fromCreditLevel;
@property(nonatomic) unsigned long long groupCodeAll; // @dynamic groupCodeAll;
@property(retain, nonatomic) QQGroupSettingModel *groupModel; // @dynamic groupModel;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

