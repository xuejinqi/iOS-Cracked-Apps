//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseChatViewController.h"

#import "ArkBannerTipsDelegate.h"
#import "FTSMsgEngineDelegate.h"
#import "IDiscussGroupChatEngineDelegate.h"
#import "QQPttPlayerDelegate.h"
#import "QQPttRecorderDelegate.h"
#import "QUIActionSheetDelegate.h"

@class ArkBannerTipView, DGContentNotifyControl, DiscussGroupManageViewController, GroupUnreadNotifyController, NSAttributedString, NSMutableArray, NSString, QQDiscussAudioTipsShowManager, QQMessageModel, QQRichMsgPreviewSingleButtonDialog;

@interface DiscussGroupChatViewController : QQBaseChatViewController <QQPttRecorderDelegate, QUIActionSheetDelegate, ArkBannerTipsDelegate, FTSMsgEngineDelegate, IDiscussGroupChatEngineDelegate, QQPttPlayerDelegate>
{
    QQMessageModel *_recordModel;
    _Bool _needLoadMsg;
    _Bool _firstLoad;
    long long _deleteSeq;
    long long _lastPositionSeq;
    _Bool _isLoading;
    QQMessageModel *_minModel;
    _Bool _released;
    _Bool _doesServerHaveRoamMsg;
    int _requestCount;
    QQDiscussAudioTipsShowManager *_audioTipsManager;
    DiscussGroupManageViewController *_manageViewController;
    unsigned long long _updatedGroupCode;
    QQRichMsgPreviewSingleButtonDialog *_updateToGroupDialog;
    long long _curCursorLocation;
    NSAttributedString *_curViewText;
    CDUnknownBlockType _refreshblock;
    NSMutableArray *_atMemArr;
    NSMutableArray *_atMemDataArr;
    ArkBannerTipView *_arkBarTipView;
    DGContentNotifyControl *_remindNotifyControl;
    int _lastReadSeq;
    GroupUnreadNotifyController *_groupUnreadNotifyControl;
    _Bool _shouldChangeToGroupWhenAppear;
    _Bool _isKickByDiscussToGroup;
    _Bool _hasShowDiscussToGroup;
    NSString *_toGroupOperatorNick;
}

@property(retain, nonatomic) NSString *toGroupOperatorNick; // @synthesize toGroupOperatorNick=_toGroupOperatorNick;
@property(nonatomic) _Bool hasShowDiscussToGroup; // @synthesize hasShowDiscussToGroup=_hasShowDiscussToGroup;
@property(nonatomic) _Bool isKickByDiscussToGroup; // @synthesize isKickByDiscussToGroup=_isKickByDiscussToGroup;
@property(nonatomic) _Bool shouldChangeToGroupWhenAppear; // @synthesize shouldChangeToGroupWhenAppear=_shouldChangeToGroupWhenAppear;
@property(retain, nonatomic) QQMessageModel *minModel; // @synthesize minModel=_minModel;
- (void)setRecordModel:(id)arg1;
- (id)recordModel;
- (_Bool)shouldShowAudioFromConern;
- (id)getDGContentNotifyControl;
- (id)getAtDiscussMemArr;
- (void)didRecieveVASReminderPaySuccessNotification;
- (void)checkForVASReminder:(id)arg1;
- (void)loadLocalGameTeamBuleTips;
- (void)handGameTeamBuleTips;
- (void)_refreshDisGroupMsgStartRefreshWithCount;
- (void)disGroupChatScrollToEndIfNeed;
- (void)ftsHandleAIOMessageWithUid:(id)arg1 sessionType:(long long)arg2 msgList:(id)arg3;
- (id)keyForSelectedInputbarItemCaching;
- (void)setupInputbarItems;
- (void)requestMobileTipsAtDiscussgroupWithMessages:(id)arg1 includeFrequency:(_Bool)arg2;
- (void)requestMobielTipsWhenOpenDiscussgroupAIO;
- (void)didSelectSystemNotificationCell:(id)arg1;
- (void)onAIOTipsNotify:(id)arg1;
- (void)discussGroupMemRemovedAlert;
- (void)dismissSecondViewController;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendReadConfirm;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startRefresh:(id)arg1;
- (void)startRefreshFoot:(id)arg1;
- (void)handleGetOfflineDiscussGroupMsg:(unsigned long long)arg1 msgArray:(id)arg2 lastLocalMaxSeq:(unsigned int)arg3;
- (void)handleSendDiscussGroupMsg:(unsigned long long)arg1 msg:(id)arg2;
- (void)handlePushDiscussGroupMsg:(unsigned long long)arg1 msgArray:(id)arg2;
- (void)handleAsyncGetDiscussGroupMsg:(unsigned long long)arg1 beforeSeq:(unsigned long long)arg2 msgArray:(id)arg3;
- (void)refreshAIOByAppendingMessages:(id)arg1;
- (long long)getCurChatViewDicussUin;
- (id)filterArray:(id)arg1;
- (id)sortMsgArray:(id)arg1;
- (id)getDiscussUin;
- (void)reloadTableView:(id)arg1;
- (void)downLoadGroupImg:(id)arg1 isRefresh:(_Bool)arg2;
- (void)forwardStructuredMsg:(id)arg1;
- (void)forwardSharedImageMsg:(id)arg1;
- (void)reSendMultiMsgForward:(id)arg1;
- (id)prepareUploadMultiMsgForwardToWX:(id)arg1;
- (id)prepareUploadMultiMsgForward:(id)arg1 isForward:(_Bool)arg2;
- (id)createMultiMsgForward:(id)arg1 isLargeMsg:(_Bool)arg2;
- (void)changeDiscussGroupName:(id)arg1;
- (void)goToManageView:(id)arg1;
- (void)showKeyboardForVoice:(id)arg1;
- (void)showKeyboard:(id)arg1;
- (void)headIconTouch:(id)arg1;
- (_Bool)canAppendMsg:(id)arg1;
- (void)onContentNotify:(id)arg1;
- (void)layoutGroupUnreadNotifyControlIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)onGroupTableViewScroll;
- (void)createGroupUnreadNotifyControl;
- (void)showUnreadNotify;
- (void)onNewMsgComeNoScroll:(id)arg1;
- (void)appendMessage:(id)arg1 rightAway:(_Bool)arg2 reloadTable:(_Bool)arg3;
- (void)appendMessageArray:(id)arg1;
- (void)dealloc;
- (void)restoreDataWithCertainMsg;
- (void)loadData;
- (void)restoreData;
- (void)handleGetGroupAudioMsg:(unsigned long long)arg1 msgArray:(id)arg2;
- (void)setFirstLoad:(_Bool)arg1;
- (void)resetLoadMsg;
- (void)setDiscussGroupTitle;
- (void)viewDidLoad;
- (void)viewWillDisappearOnNormalStatus;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)checkCurUserIsDisGroupMem:(id)arg1;
- (void)AlertDiscussGroupMemRemovedByOwner:(id)arg1;
- (void)DiscussGroupOwnerDelMemAlert:(id)arg1;
- (void)refeshDiscussGroupInfo:(id)arg1;
- (void)updateCurrentDisGroupMonitorInfo;
- (id)printDiscussGroupMemList;
- (void)DiscussGroupOwnerDelMemMonitorDeal;
- (void)reSetLeftButtonTitle;
- (void)handleMsgUnreadCountClean;
- (void)viewWillAppearOnNormalStatus;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (int)viewTag;
- (id)initWithMgroupCode:(id)arg1;
- (id)initWithCertainMsg:(id)arg1;
- (void)sendHotPicGifImgUseForward:(id)arg1;
- (void)sendDouTuImg:(id)arg1;
- (void)tableViewReSendImage:(id)arg1;
- (void)SendImage:(id)arg1 image:(id)arg2 bodyType:(int)arg3 msgTime:(int)arg4 messageModel:(id)arg5;
- (void)SendGIFImage:(id)arg1 data:(id)arg2 bodyType:(int)arg3 picMd5:(id)arg4 attr:(id)arg5;
- (void)sendInternalMarioImage:(id)arg1 path:(id)arg2 picMd5:(id)arg3 emojiInfo:(id)arg4;
- (id)prepareUploadImageByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 content:(id)arg4;
- (id)prepareUploadImageByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (void)reSendStreamPTT:(id)arg1;
- (void)upAmrFile:(id)arg1;
- (id)prepareUploadMultiImage:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (void)insertPreuploadImageMessage:(id)arg1 preuploadState:(unsigned long long)arg2;
- (void)uploadImage:(id)arg1;
- (void)preuploadImage:(id)arg1;
- (id)generateMessageModelByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 saveMsg:(_Bool)arg4 content:(id)arg5;
- (id)generateMessageModelByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 saveMsg:(_Bool)arg4;
- (_Bool)sendArkAppMsg:(id)arg1 compatibleText:(id)arg2 resendModel:(id)arg3;
- (_Bool)isShowingDiscussRibbon;
- (void)checIsAtMessageAndNeedFlash:(id)arg1;
- (void)flashChatViewTableCellAnimation:(id)arg1;
- (void)onDiscussTableViewScroll;
- (void)checkTopNotifyCloseLogic:(long long)arg1;
- (void)willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 byUser:(_Bool)arg3;
- (int)getIndexFromChatMessage:(long long)arg1;
- (struct CGRect)getItemRectbyMsgSeq:(long long)arg1;
- (void)startRefreshWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)gotoSeq:(long long)arg1;
- (void)clickedButton:(id)arg1;
- (unsigned long long)getMsgSeqFromMsg:(id)arg1;
- (_Bool)checkSeqMsgVisible:(id)arg1;
- (void)destroyTopNotifyControl;
- (void)createTopNotifyControl;
- (void)showChatViewNotify:(int)arg1 notifyTitle:(id)arg2 senderUin:(id)arg3 msgSeq:(long long)arg4;
- (_Bool)checkRemindMsg;
- (void)checkNotifyMsg;
- (void)unInitDiscussGroupAt;
- (void)initDiscussGroupAt:(id)arg1;
- (_Bool)sendHighBoomMsgWithHighBoomFontModel:(id)arg1 aioText:(id)arg2 resendModel:(id)arg3;
- (id)generateAtData:(id)arg1;
- (int)findAtCountBeforeLocation:(int)arg1;
- (void)insertAtMem:(id)arg1 WithLocation:(int)arg2;
- (void)deleteAtMemWithLocation:(int)arg1;
- (void)deleteWithName:(id)arg1;
- (struct _NSRange)findAtBehandLocation:(unsigned long long)arg1 textView:(id)arg2;
- (struct _NSRange)findAtMiddleLocation:(unsigned long long)arg1 textView:(id)arg2;
- (void)QQSetWORD:(char *)arg1 from:(unsigned short)arg2;
- (void)QQSetDWORD:(char *)arg1 from:(unsigned int)arg2;
- (void)textViewDidChangeSelectionForAt:(id)arg1;
- (void)textViewDidChangeForAt:(id)arg1;
- (_Bool)textViewForAt:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)fillAtAllData:(int)arg1 viewText:(id)arg2;
- (void)fillAtDiscussData:(id)arg1 cursorLocation:(int)arg2 viewText:(id)arg3 memUin:(unsigned long long)arg4 ifLongPress:(_Bool)arg5;
- (void)fillAtAllDiscussMemArr:(_Bool)arg1 cursorLocation:(long long)arg2 viewText:(id)arg3;
- (void)fillAtDiscussMemArr:(_Bool)arg1 MulMemSelMemberInfo:(id)arg2 cursorLocation:(long long)arg3 viewText:(id)arg4;
- (void)onBusiProcessDidSelectedSglMem:(id)arg1 currViewContr:(id)arg2;
- (void)pushDiscussMemViewController:(id)arg1 selectedLocation:(long long)arg2;
- (void)longPressAtMem:(id)arg1 uin:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3 emojiStickerInfo:(id)arg4;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3;
- (void)reSendTextMsg:(id)arg1 isLocation:(_Bool)arg2;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2 emojiStickerInfo:(id)arg3;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2;
- (_Bool)sendData:(id)arg1 showText:(id)arg2 emojiStickerInfo:(id)arg3;
- (_Bool)sendData:(id)arg1 showText:(id)arg2;
- (_Bool)sendLocationMsg:(id)arg1 showText:(id)arg2;
- (_Bool)sendFlashChatMsg:(id)arg1 AIOText:(id)arg2 resendModel:(id)arg3;
- (void)addSidAndJumpUrl:(id)arg1;
- (void)gotoAudioChatFromCorner;
- (id)getGroupAudioTipsContent;
- (void)changeGroupName:(id)arg1;
- (void)handleGroupAudioTipsViewClick:(id)arg1;
- (_Bool)hanleGroupAudioBannerTipViewClick:(id)arg1;
- (_Bool)handleGroupAudioBannerButtonClick:(id)arg1;
- (void)HandleGroupAudioTips;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)bannerButtonDidClick:(id)arg1 atIndex:(int)arg2;
- (void)showToGroupTip:(id)arg1;
- (void)clickCheckButton;
- (void)didGetKickMsg:(id)arg1;
- (void)didGetCreateGroupFailMsg:(id)arg1;
- (void)didGetCreateGroupRespond:(id)arg1;
- (void)getDiscussToGroupCommonNotification:(id)arg1;
- (void)didGetDiscussToGroupMsg:(long long)arg1;
- (_Bool)isSelfVisible;
- (id)getAIODetailRecord;
- (void)openDiscussToGroup:(id)arg1;
- (void)viewDidAppearForToGroup;
- (void)startChangeAIO;
- (void)changeAIOToGroup;
- (void)onPostEnterGroupAudio;
- (void)onCreateDiscussInGroupNotify:(id)arg1;
- (void)sendSpriteActionMsg:(id)arg1;
- (void)ActionSendMessgae;
- (void)sendMarketFaceMsg:(id)arg1;
- (id)getChatViewUin;
- (id)getArkAppModelWithArkUIView:(id)arg1;
- (void)dismissChatViewBarWithUin:(id)arg1;
- (void)showChatViewBarTitle:(id)arg1 icon:(id)arg2 chatViewUin:(id)arg3;
- (void)scrollToArkModel;
- (void)HandleArkBannerTipIsAppear:(_Bool)arg1;
- (void)bannerArkBannerTipViewDidClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

