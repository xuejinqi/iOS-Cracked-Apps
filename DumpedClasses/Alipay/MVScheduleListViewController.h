//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableViewController.h"

#import "MVFilmListCollectionViewControllerDeleagte.h"
#import "MVSegmentControlDelegate.h"
#import "UITableViewDelegate.h"

@class APExceptionView, MVActivityNoticeView, MVBannerModel, MVBluredBackgroundChanger, MVCinemaModel, MVFilmHeaderView, MVFilmListCollectionPicker, MVScheduleCinemaInfoRow, MVScheduleCinemaInfoView, MVScheduleListModel, MVScheduleLogicController, MVScheduleRow, MVScheduleSection, MVScheduleTopActivityRow, MVScheduleTopActivityView, MVSchedulelistFilterHandler, MVSegmentControl, MVShowModel, MVTableViewDataSource, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, UIImage, UIView;

@interface MVScheduleListViewController : MVTableViewController <MVSegmentControlDelegate, UITableViewDelegate, MVFilmListCollectionViewControllerDeleagte>
{
    UIView *closeTimeTipView_;
    MVScheduleSection *closeTimeSection_;
    MVScheduleSection *filmActivitySection_;
    MVTableViewDataSource *_listSource;
    MVFilmListCollectionPicker *_collectionViewController;
    UIView *_floatingView;
    MVBluredBackgroundChanger *_blurBackground;
    MVScheduleListModel *_beforeFilteredScheduleListModel;
    MVFilmHeaderView *_filmHeader;
    MVSegmentControl *_segmentControl;
    MVScheduleSection *_segmentControlSection;
    MVScheduleRow *_segmentControlRow;
    MVScheduleSection *_generalTopSection;
    MVScheduleCinemaInfoRow *_cinemaInfoRow;
    MVScheduleRow *_filmHeaderRow;
    MVActivityNoticeView *_noticeView;
    MVScheduleRow *_noticeViewRow;
    _Bool _lastRefreshManual;
    MVScheduleLogicController *_logicController;
    _Bool _setNeedsRefresh;
    MVScheduleCinemaInfoView *_cinemaInfoView;
    MVScheduleRow *_filmListRow;
    UIView *_tableViewIndicator;
    APExceptionView *_netErrorView;
    _Bool _isLogged;
    _Bool _presaleRedeemMode;
    _Bool _isChangeTicketMode;
    MVShowModel *_currentShowModel;
    MVCinemaModel *_currentCinemaModel;
    long long _mode;
    NSString *_activityId;
    NSDictionary *_showIdFilter;
    NSDictionary *_scheduleIdFilter;
    UIImage *_blurBackgroundImage;
    NSDate *_preSelectedDate;
    NSString *_filterShowVersion;
    NSString *_filterShowVersionType;
    NSString *_filterHall;
    NSString *_endorseOrderId;
    MVScheduleListModel *_scheduleListModel;
    MVBannerModel *_noticeBannerModel;
    NSString *_presaleNoticeText;
    long long _selectedDayIndex;
    NSArray *_bankActivityArray;
    MVScheduleTopActivityView *_cinemaActivityView;
    MVScheduleTopActivityRow *_cinemaActivityRow;
    long long _filterType;
    long long _versionFilterMergeType;
    MVSchedulelistFilterHandler *_filterHandler;
    NSMutableArray *_disableGrayArray;
    NSMutableArray *_segmentTagArray;
    NSMutableArray *_segmentLayoutBlockArray;
    NSMutableArray *_currentDayActivityArray;
    UIView *_detailCoverView;
}

@property(retain, nonatomic) UIView *detailCoverView; // @synthesize detailCoverView=_detailCoverView;
@property(retain, nonatomic) NSMutableArray *currentDayActivityArray; // @synthesize currentDayActivityArray=_currentDayActivityArray;
@property(retain, nonatomic) NSMutableArray *segmentLayoutBlockArray; // @synthesize segmentLayoutBlockArray=_segmentLayoutBlockArray;
@property(retain, nonatomic) NSMutableArray *segmentTagArray; // @synthesize segmentTagArray=_segmentTagArray;
@property(retain, nonatomic) NSMutableArray *disableGrayArray; // @synthesize disableGrayArray=_disableGrayArray;
@property(nonatomic) _Bool isChangeTicketMode; // @synthesize isChangeTicketMode=_isChangeTicketMode;
@property(retain, nonatomic) MVSchedulelistFilterHandler *filterHandler; // @synthesize filterHandler=_filterHandler;
@property(nonatomic) long long versionFilterMergeType; // @synthesize versionFilterMergeType=_versionFilterMergeType;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) MVScheduleTopActivityRow *cinemaActivityRow; // @synthesize cinemaActivityRow=_cinemaActivityRow;
@property(retain, nonatomic) MVScheduleTopActivityView *cinemaActivityView; // @synthesize cinemaActivityView=_cinemaActivityView;
@property(retain, nonatomic) NSArray *bankActivityArray; // @synthesize bankActivityArray=_bankActivityArray;
@property(nonatomic) long long selectedDayIndex; // @synthesize selectedDayIndex=_selectedDayIndex;
@property(retain, nonatomic) NSString *presaleNoticeText; // @synthesize presaleNoticeText=_presaleNoticeText;
@property(retain, nonatomic) MVBannerModel *noticeBannerModel; // @synthesize noticeBannerModel=_noticeBannerModel;
@property(retain, nonatomic) MVScheduleListModel *scheduleListModel; // @synthesize scheduleListModel=_scheduleListModel;
@property(copy, nonatomic) NSString *endorseOrderId; // @synthesize endorseOrderId=_endorseOrderId;
@property(copy, nonatomic) NSString *filterHall; // @synthesize filterHall=_filterHall;
@property(copy, nonatomic) NSString *filterShowVersionType; // @synthesize filterShowVersionType=_filterShowVersionType;
@property(copy, nonatomic) NSString *filterShowVersion; // @synthesize filterShowVersion=_filterShowVersion;
@property(retain, nonatomic) NSDate *preSelectedDate; // @synthesize preSelectedDate=_preSelectedDate;
@property(nonatomic) _Bool presaleRedeemMode; // @synthesize presaleRedeemMode=_presaleRedeemMode;
@property(retain, nonatomic) UIImage *blurBackgroundImage; // @synthesize blurBackgroundImage=_blurBackgroundImage;
@property(retain, nonatomic) NSDictionary *scheduleIdFilter; // @synthesize scheduleIdFilter=_scheduleIdFilter;
@property(retain, nonatomic) NSDictionary *showIdFilter; // @synthesize showIdFilter=_showIdFilter;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) MVCinemaModel *currentCinemaModel; // @synthesize currentCinemaModel=_currentCinemaModel;
@property(retain, nonatomic) MVShowModel *currentShowModel; // @synthesize currentShowModel=_currentShowModel;
- (void).cxx_destruct;
- (id)segmentControl:(id)arg1 tagsAtIndex:(long long)arg2;
- (id)segmentControl:(id)arg1 layoutBlockAtIndex:(long long)arg2;
- (void)segmentControl:(id)arg1 didSelectButtonAtIndex:(long long)arg2;
- (_Bool)segmentControl:(id)arg1 shouldResponseButtonAtIndex:(long long)arg2;
- (id)deleteRepeatActivityWithArray:(id)arg1;
- (void)reloadScheduleIfNeeded:(id)arg1;
- (void)recognizeFilterType;
- (void)showNextScheduleDay:(id)arg1;
- (void)setSelectedDayIndex:(long long)arg1 forceUpdate:(_Bool)arg2 animated:(_Bool)arg3;
- (id)rowListFromModelArray:(id)arg1;
- (void)checkScrollLogic;
- (void)replaceCurrentSchedulesDataWithReponse:(id)arg1;
- (void)refreshBackgroundWithNewImage:(id)arg1;
- (void)refreshBackgroundWithBlurredImage:(id)arg1 animated:(_Bool)arg2;
- (void)collectionViewDidFinishLoadingFilmList:(id)arg1;
- (void)showWholeViewException:(id)arg1;
- (void)collectionViewDidErrorLoadingFilmList:(id)arg1;
- (void)collectionView:(id)arg1 tappedOnCenteredMovie:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didScrollToMovie:(id)arg2;
- (void)collectionView:(id)arg1 didSelectMovie:(id)arg2 atIndexPath:(id)arg3;
- (void)triggerScheduleListRefresh;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)switchTransparentBarToTop;
- (id)findScrollIndicator;
- (void)_ensureView:(id)arg1 floatAfterOffset:(double)arg2;
- (void)hideCoverLoadingView;
- (void)showCoverLoadingView;
- (void)didReceiveMemoryWarning;
- (void)initCollectionView;
- (void)refreshControlDidTriggerRefresh;
- (void)refreshControlDidTriggerRefreshManual:(_Bool)arg1;
- (void)updateFilmHeaderWithShowModel:(id)arg1;
- (void)resetDataSource;
- (void)didTapCinema:(id)arg1;
- (void)buildFilmListSection;
- (void)buildCinemaActivitySection;
- (id)buildFilmActivitySectionWithSchedule:(id)arg1;
- (void)setNoticeText:(id)arg1;
- (void)fetchSchduleListNotice;
- (id)properNoticeText;
- (void)refreshNoticeText;
- (void)refreshFavButtonWithState:(_Bool)arg1;
- (void)updateFillerSectionHeight;
- (double)totalContentHeight;
- (void)goForMemberCardType:(id)arg1;
- (void)goForMemberCard:(id)arg1;
- (void)setupFavItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)gotoMovieDetail:(id)arg1;
- (void)gotoCinemaDetail:(id)arg1;
- (void)toggleFav:(id)arg1;
- (_Bool)scrollOffsetAfterFilmHeaderBar;
- (double)topLayoutGuideImmovableOffset;
- (double)collectionViewHeight;
- (double)contentHeightAboveFloatingView;
- (double)noticeRowHeight;
- (void)viewDidLoad;
- (id)initWithMode:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

