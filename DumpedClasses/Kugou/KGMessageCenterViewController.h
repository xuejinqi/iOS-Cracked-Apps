//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollPageViewController.h"

#import "KGMessageCenterCellDelegate.h"
#import "KGMessageCenterCommentCellDelegate.h"
#import "KGMessageCenterStarCellDelegate.h"
#import "KGMessageCenterSuperBLLDelegate.h"
#import "KGNetWorkNoticeDelegate.h"
#import "KQInputViewDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CommenModelInfo, KGMessageCenterCommonBLL, KGMessageCenterNewCommentsBLL, KGMessageCenterNewStarBLL, KGMessageCenterNotificationCellClickBLL, KGNetworkNoticeView, KGThemeButton, KGThemeLabel, KGThemeView, KQInputView, NSMutableArray, NSMutableDictionary, NSString, RefreshControl, UIButton, UIImageView, UITableView, UIView;

@interface KGMessageCenterViewController : KGScrollPageViewController <UITableViewDelegate, UITableViewDataSource, KGNetWorkNoticeDelegate, KGMessageCenterCellDelegate, RefreshControlDelegate, KGMessageCenterSuperBLLDelegate, KQInputViewDelegate, KGMessageCenterCommentCellDelegate, KGMessageCenterStarCellDelegate>
{
    _Bool _canLoadMore;
    _Bool _isCreatedUI;
    _Bool _bHasEntered;
    int _KSongTagsTotalNum;
    int _KSongTagsCompetionTotalNum;
    int _tabType;
    UITableView *_mainTableView;
    RefreshControl *_refreshControl;
    UIView *_headerView;
    NSMutableArray *_currentTags;
    NSMutableArray *_objectsArray;
    NSMutableDictionary *_commonMsgModel;
    NSMutableArray *_commonMsgLoadMoreArr;
    long long _commonMsgModelCount;
    long long _commonUnReadMsgCount;
    KGThemeButton *_clearBtn;
    KGThemeButton *_settingBtn;
    UIImageView *_pic;
    KGThemeButton *_login;
    KGThemeLabel *_backgroundTitle;
    UIView *_moreView;
    UIView *_moreMenuContentView;
    KGThemeView *_showView;
    KGNetworkNoticeView *_networkNoticeView;
    KGMessageCenterCommonBLL *_commonNotificationBll;
    KGMessageCenterNotificationCellClickBLL *_notCellClickBll;
    NSMutableArray *_arCommentMessages;
    KGMessageCenterNewCommentsBLL *_commentBll;
    NSString *_strCommentMinID;
    NSString *_strCommentMaxID;
    CommenModelInfo *_replyModel;
    double _tableViewHeight;
    double _inputViewDefaultY;
    NSMutableArray *_arStarMessages;
    KGMessageCenterNewStarBLL *_starBll;
    NSString *_strStarMinID;
    NSString *_strStarMaxID;
    KQInputView *_kqInputView;
    UIButton *_inputViewBgButton;
    struct CGPoint _cellRectPoint;
}

@property(nonatomic) _Bool bHasEntered; // @synthesize bHasEntered=_bHasEntered;
@property(retain, nonatomic) UIButton *inputViewBgButton; // @synthesize inputViewBgButton=_inputViewBgButton;
@property(retain, nonatomic) KQInputView *kqInputView; // @synthesize kqInputView=_kqInputView;
@property(retain, nonatomic) NSString *strStarMaxID; // @synthesize strStarMaxID=_strStarMaxID;
@property(retain, nonatomic) NSString *strStarMinID; // @synthesize strStarMinID=_strStarMinID;
@property(retain, nonatomic) KGMessageCenterNewStarBLL *starBll; // @synthesize starBll=_starBll;
@property(retain, nonatomic) NSMutableArray *arStarMessages; // @synthesize arStarMessages=_arStarMessages;
@property(nonatomic) double inputViewDefaultY; // @synthesize inputViewDefaultY=_inputViewDefaultY;
@property(nonatomic) double tableViewHeight; // @synthesize tableViewHeight=_tableViewHeight;
@property(retain, nonatomic) CommenModelInfo *replyModel; // @synthesize replyModel=_replyModel;
@property(retain, nonatomic) NSString *strCommentMaxID; // @synthesize strCommentMaxID=_strCommentMaxID;
@property(retain, nonatomic) NSString *strCommentMinID; // @synthesize strCommentMinID=_strCommentMinID;
@property(retain, nonatomic) KGMessageCenterNewCommentsBLL *commentBll; // @synthesize commentBll=_commentBll;
@property(retain, nonatomic) NSMutableArray *arCommentMessages; // @synthesize arCommentMessages=_arCommentMessages;
@property(retain, nonatomic) KGMessageCenterNotificationCellClickBLL *notCellClickBll; // @synthesize notCellClickBll=_notCellClickBll;
@property(retain, nonatomic) KGMessageCenterCommonBLL *commonNotificationBll; // @synthesize commonNotificationBll=_commonNotificationBll;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) KGNetworkNoticeView *networkNoticeView; // @synthesize networkNoticeView=_networkNoticeView;
@property(nonatomic) _Bool isCreatedUI; // @synthesize isCreatedUI=_isCreatedUI;
@property(nonatomic) int KSongTagsCompetionTotalNum; // @synthesize KSongTagsCompetionTotalNum=_KSongTagsCompetionTotalNum;
@property(nonatomic) int KSongTagsTotalNum; // @synthesize KSongTagsTotalNum=_KSongTagsTotalNum;
@property(retain, nonatomic) KGThemeView *showView; // @synthesize showView=_showView;
@property(retain, nonatomic) UIView *moreMenuContentView; // @synthesize moreMenuContentView=_moreMenuContentView;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) struct CGPoint cellRectPoint; // @synthesize cellRectPoint=_cellRectPoint;
@property(retain, nonatomic) KGThemeLabel *backgroundTitle; // @synthesize backgroundTitle=_backgroundTitle;
@property(retain, nonatomic) KGThemeButton *login; // @synthesize login=_login;
@property(retain, nonatomic) UIImageView *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) KGThemeButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) KGThemeButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(nonatomic) long long commonUnReadMsgCount; // @synthesize commonUnReadMsgCount=_commonUnReadMsgCount;
@property(nonatomic) long long commonMsgModelCount; // @synthesize commonMsgModelCount=_commonMsgModelCount;
@property(retain, nonatomic) NSMutableArray *commonMsgLoadMoreArr; // @synthesize commonMsgLoadMoreArr=_commonMsgLoadMoreArr;
@property(retain, nonatomic) NSMutableDictionary *commonMsgModel; // @synthesize commonMsgModel=_commonMsgModel;
@property(retain, nonatomic) NSMutableArray *objectsArray; // @synthesize objectsArray=_objectsArray;
@property(retain, nonatomic) NSMutableArray *currentTags; // @synthesize currentTags=_currentTags;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool canLoadMore; // @synthesize canLoadMore=_canLoadMore;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void).cxx_destruct;
- (unsigned long long)getCommentTypeWithCode:(id)arg1;
- (void)sendKTVComment:(id)arg1;
- (void)ktvUserLogin;
- (void)p_didSendComment:(id)arg1;
- (void)sendComment:(id)arg1 content:(id)arg2;
- (void)sendDanMu:(id)arg1 content:(id)arg2;
- (void)sendMusicContent:(id)arg1;
- (void)p_sendContent:(id)arg1;
- (void)goToAlbumWithInfo:(id)arg1;
- (void)goToMVWithInfo:(id)arg1;
- (void)goToWebH5WithInfo:(id)arg1;
- (void)goToSpecialWithInfo:(id)arg1;
- (void)goToAllDanmuWithInfo:(id)arg1;
- (void)goToAllSongCommentWithInfo:(id)arg1;
- (void)goToUserInfoWithWithIndex:(unsigned long long)arg1;
- (void)replyButtonPressWithIndex:(unsigned long long)arg1;
- (void)nameLabelPressWithIndex:(unsigned long long)arg1;
- (void)headImagePressWithIndex:(unsigned long long)arg1;
- (void)p_showLoadingStatus:(id)arg1;
- (void)p_showWithStatus:(id)arg1;
- (void)endEditing;
- (void)inputViewFrameDidChange;
- (_Bool)inputViewShouldBeginEditing;
- (void)inputViewShouldEndEditingWithCurrentText:(id)arg1;
- (void)disableSendTextForMaxLimit;
- (void)sendText:(id)arg1;
- (void)hideInputviewWithAnimation:(_Bool)arg1;
- (_Bool)IsInputViewShown;
- (id)getCommentModelInfosFromMsgCenterDataModel:(id)arg1;
- (id)getCommentModelInfosWithMessagesModels:(id)arg1;
- (id)getMessageModelsFromMsgCenterDataModel:(id)arg1;
- (void)receiveNewStars:(id)arg1;
- (void)getMoreStarsWithCount:(int)arg1 WithBlock:(CDUnknownBlockType)arg2;
- (void)getLocalStars;
- (id)tableView:(id)arg1 starCellForRowAtIndexPath:(id)arg2;
- (void)clickCommentOrStarCellAtIndex:(id)arg1;
- (id)tableView:(id)arg1 commentCellForRowAtIndexPath:(id)arg2;
- (void)receiveNewComments:(id)arg1;
- (void)getMoreCommentsWithCount:(int)arg1 WithBlock:(CDUnknownBlockType)arg2;
- (void)getLocalComments;
- (void)KGMessageCenterDidReceiveOriginData:(id)arg1 messageBLL:(id)arg2;
- (void)endAPMStatic;
- (void)netNoticeViewTapped;
- (void)netNoticeViewHidden:(_Bool)arg1;
- (void)reportBI;
- (void)setRedPointHiddenForCurrentTab;
- (_Bool)isDefaultPage;
- (void)viewDidExit;
- (void)viewDidEnter;
- (long long)showPlayBarWay;
- (void)goToLogin:(id)arg1;
- (void)requestVertifyData:(id)arg1;
- (void)reloadDataWhenMessageCenterChange;
- (void)reloadDataWhenAllMessageRead;
- (void)messageCenterChange:(id)arg1;
- (void)refreshKqInputViewUI;
- (void)p_onChangeTheme:(id)arg1;
- (void)tapInMoreView:(id)arg1;
- (void)oneCellSwipBegin:(id)arg1;
- (void)moreBtnPressed:(id)arg1;
- (void)cancelNotDisturbCellAction:(id)arg1;
- (void)notDisturbCellAction:(id)arg1;
- (void)deleteCellActionWithBtnTag:(unsigned long long)arg1 andMsgModelTag:(id)arg2;
- (void)loginPressed:(id)arg1;
- (void)goForwardToCommonNotifyPageWithTag:(id)arg1 withIndexPath:(id)arg2;
- (void)goForwardToFeedbackHistoryPage;
- (void)goForwardToUserLevelPage;
- (void)goForwardToMyFansPage;
- (void)goForwardToFXLivePage;
- (void)goForwardToFXStartCenterPageWithTag:(id)arg1;
- (void)goForwardToFXAssistPage;
- (void)goForwardToKqGroupNotifyPage;
- (void)goForwardToKqGroupPageWithTag:(id)arg1;
- (void)goForwardToConsumpitonPage;
- (void)goForwardToSystemNewsPage;
- (void)goForwardToPrivatePageWithTag:(id)arg1;
- (void)goForwardToKTVCompetionPageWithTag:(id)arg1;
- (void)goForwardToKTVForwardPage;
- (void)goForwardToKTVDetailPageWithTag:(id)arg1;
- (void)goForwardToFriendInvitationPage;
- (void)goForwardToSongListContributionPage;
- (void)goForwardToDetailPageTag:(id)arg1 withIndexPath:(id)arg2;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setSpecialCellStyle:(id)arg1 withCell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)checkIfCorrectTag:(id)arg1;
- (void)reportCommonMsgMaxidWithClearUnreadNum:(_Bool)arg1;
- (void)operateAllCommonMsgToRead;
- (void)requestMoreCommonNotificationMsgHandleWithModelArr:(id)arg1 andCanLoadMore:(_Bool)arg2;
- (void)requestMoreCommonNotificationMsgAndIsNeedLoadAll:(_Bool)arg1;
- (void)reqeustCommonNotificationMsgHandleWithModelArr:(id)arg1 andCanLoadMore:(_Bool)arg2;
- (void)requestLocalCommonNotificationMsg;
- (void)reqeustCommonNotificationMsgWithIsInit:(_Bool)arg1;
- (void)p_initDatasourceWithIsInit:(_Bool)arg1;
- (void)setSpecialStatusViews;
- (void)clickTableView:(id)arg1;
- (void)refreshMoreTopView;
- (void)p_updateDatasourceAfterDeleteModel:(id)arg1;
- (void)refreshViewAfterDeleteModelTag:(id)arg1 andCellRow:(unsigned long long)arg2;
- (void)p_initView;
- (void)p_init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

