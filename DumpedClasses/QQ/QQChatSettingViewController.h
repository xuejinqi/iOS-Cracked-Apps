//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "DBAsyncCallbackProtocol.h"
#import "GetTroopRemarkProtocol.h"
#import "IEditViewControllerObserver.h"
#import "IGroupSelectDelegate.h"
#import "IQQGroupProfileViewController.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQGetRoamMsgModelProtocol.h"
#import "QUIActionSheetDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AddFriendSendMessageViewController, EmojiEggView, NSMutableArray, NSString, NSTimer, QQGroupProfileViewController, QQGroupSettingModel, QQSwithchControl, QQTroopRemarkModel, UIButton, UIImageView, UILabel, UITableView;

@interface QQChatSettingViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, QUIActionSheetDelegate, UIAlertViewDelegate, QQFriendSelectedViewControllerDelegate, GetTroopRemarkProtocol, IQQGroupProfileViewController, IEditViewControllerObserver, QQGetRoamMsgModelProtocol, SimpleAlertViewDelegate, DBAsyncCallbackProtocol, IGroupSelectDelegate>
{
    NSMutableArray *_dataSources;
    UITableView *_tableView;
    int _style;
    NSString *_uin;
    QQGroupSettingModel *_groupModel;
    QQGroupProfileViewController *_groupProfileController;
    QQTroopRemarkModel *_groupRemarkModel;
    NSString *_modifiedGroupName;
    int _groupModified;
    NSTimer *_timer;
    NSString *_mobilePhone;
    AddFriendSendMessageViewController *_addFriendVC;
    int _summaryEntry;
    UIButton *_blockBtn;
    UILabel *_richStateText;
    UIImageView *_richStateIcon;
    UILabel *_nickName;
    UILabel *_reportLabel;
    EmojiEggView *_emojiEggView;
    _Bool _displayEmojiEgg;
    QQSwithchControl *_babyQSwitch;
    QQViewController *_campusCircleWebVC;
}

+ (int)styleWithChatModelUin:(id)arg1 isGroup:(_Bool)arg2;
@property(retain, nonatomic) QQViewController *campusCircleWebVC; // @synthesize campusCircleWebVC=_campusCircleWebVC;
- (void)onBabyQSwitchNotification:(id)arg1;
- (void)babyQMsgPushSwitchAction:(id)arg1;
- (void)refreshRichStateOnMainThread:(id)arg1;
- (void)refreshRichState;
- (void)onSessionNameUpdateCallback:(id)arg1;
- (void)friendShieldNotificationDidReceive:(id)arg1;
- (void)blockButtonAction:(id)arg1;
- (_Bool)isFriendMaskWithUin:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)GetMemberRemarkNotify:(id)arg1 list:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)ActionDismissGroupRespond:(id)arg1;
- (void)deleteUserDefault;
- (void)ActionExitGroupResult:(id)arg1;
- (void)onTimeout;
- (void)stopTimer;
- (void)startTimer;
- (void)ActionInviteJoinGroupRespond:(id)arg1;
- (_Bool)onRightButtonClicked:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)updateGroupName;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)notifySelectedGroupID:(int)arg1;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)createDissGroup:(id)arg1;
- (void)PushUpdateDeleteFriend:(id)arg1;
- (void)deleFriendSuccess:(id)arg1;
- (void)deleFriend;
- (void)setReceiveGroupMsgPush;
- (void)setReceiveGroupMsg;
- (void)setVoiceChannel:(_Bool)arg1;
- (void)setVoicePlayerState;
- (void)disableMessage;
- (void)reportingIllegalDone:(id)arg1;
- (void)ReportPerson;
- (void)callBackUploadRemarkTimerOut:(id)arg1;
- (void)callBackUploadRemark:(id)arg1;
- (void)actionGotoGroupChoose;
- (void)actionQuickResponse;
- (void)actionShowRecentFileRecords;
- (void)ActionHistory:(_Bool)arg1;
- (void)buttonAction:(id)arg1;
- (_Bool)onEditViewModifyValue:(id)arg1 value:(id)arg2;
- (void)menFriendSig:(id)arg1;
- (void)accountCard;
- (void)personCard;
- (void)personCardFromViewProfile;
- (void)personCardFromHeadDidTouch;
- (void)quitGroup:(id)arg1;
- (void)clearComRecord;
- (void)addFriend;
- (void)setSuperViewControllerCover;
- (void)tipOffAction;
- (void)didStrangeSettingSelected:(id)arg1;
- (void)didFriendSettingSelected:(id)arg1;
- (void)didSelected:(id)arg1;
- (void)didFriendSettingSwitch:(id)arg1;
- (void)switchControlAction:(id)arg1;
- (void)setc2cRoamMsg:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)GetHeadImageForUin:(id)arg1;
- (id)GetNearStrangeValueForModel:(id)arg1;
- (id)GetFriendValueForModel:(id)arg1;
- (id)accessoryTitleForModel:(id)arg1;
- (id)GetValueForModel:(id)arg1;
- (void)reloadData;
- (id)getCellModelWithKey:(id)arg1;
- (id)getAllModel;
- (id)GetDisAccountData;
- (id)GetGroupData;
- (id)GetBabyQData;
- (id)GetMobileQQTeamData;
- (id)GetGroupTmpData;
- (id)GetNearAccountData;
- (id)GetFriendData;
- (id)GetCurDataSourcesWithStyle:(int)arg1;
- (void)reloadTableData;
- (int)viewTag;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(retain, nonatomic) AddFriendSendMessageViewController *addFriendVC; // @dynamic addFriendVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQGroupSettingModel *groupModel; // @dynamic groupModel;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *mobilePhone; // @dynamic mobilePhone;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

