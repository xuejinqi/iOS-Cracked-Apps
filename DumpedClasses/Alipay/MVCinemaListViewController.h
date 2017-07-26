//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class APNextPagePullView, MVCinemaFilterView, MVCinemaRow, MVCinemaSection, MVFilmBannerRow, MVGetCinemaListResponse, MVLocationBar, MVSegmentControl, MVShowModel, MVTableSection, MVTableViewDataSource, NSArray, NSMutableArray, NSString, TBSDKMTOPServer, UIViewController;

@interface MVCinemaListViewController : MVTableViewController <UIGestureRecognizerDelegate>
{
    _Bool _cinemaRequestInAction;
    _Bool _isLoadingMore;
    _Bool _hasMoreData;
    _Bool _multiPageEnable;
    _Bool _setNeedsRefresh;
    _Bool _presaleRedeemMode;
    _Bool _dataLoadedFromCache;
    _Bool _hasAlertHasNoTodaySchedule;
    _Bool _locationBarHidden;
    APNextPagePullView *_pullView;
    NSString *_longitude;
    NSString *_latitude;
    TBSDKMTOPServer *_lastOperation;
    TBSDKMTOPServer *_lastLoadMoreOperation;
    MVGetCinemaListResponse *_bakeupCinemaResponse;
    long long _bakeupPageIndex;
    NSString *_bakeupDateFilterKey;
    MVShowModel *_currentShowModel;
    long long _mode;
    MVGetCinemaListResponse *_cinemaResponse;
    NSArray *_bannerResponse;
    NSString *_activityId;
    UIViewController *_superViewController;
    NSString *_regionFilterKey;
    NSString *_dateFilterKey;
    NSString *_featureFilterKey;
    NSString *_featureNameFilterKey;
    NSString *_timeFilterKey;
    NSString *_timeNameFilterKey;
    long long _pageIndex;
    MVSegmentControl *_dateSegmentControl;
    NSMutableArray *_shownDateArray;
    NSArray *_timeTagDateArray;
    MVTableViewDataSource *_listSource;
    MVCinemaSection *_cinemaSection;
    MVTableSection *_bannerSection;
    MVFilmBannerRow *_bannerRow;
    MVCinemaRow *_noCinemaNoticeRow;
    MVLocationBar *_locationBar;
    NSArray *_searchCinemas;
    MVCinemaFilterView *_cinemaFilterView;
    NSMutableArray *_preScheduleTagArray;
    NSMutableArray *_segmentLayoutBlockArray;
}

@property(retain, nonatomic) NSMutableArray *segmentLayoutBlockArray; // @synthesize segmentLayoutBlockArray=_segmentLayoutBlockArray;
@property(retain, nonatomic) NSMutableArray *preScheduleTagArray; // @synthesize preScheduleTagArray=_preScheduleTagArray;
@property(retain, nonatomic) MVCinemaFilterView *cinemaFilterView; // @synthesize cinemaFilterView=_cinemaFilterView;
@property(nonatomic) _Bool locationBarHidden; // @synthesize locationBarHidden=_locationBarHidden;
@property(retain, nonatomic) NSArray *searchCinemas; // @synthesize searchCinemas=_searchCinemas;
@property(retain, nonatomic) MVLocationBar *locationBar; // @synthesize locationBar=_locationBar;
@property(nonatomic) _Bool hasAlertHasNoTodaySchedule; // @synthesize hasAlertHasNoTodaySchedule=_hasAlertHasNoTodaySchedule;
@property(retain, nonatomic) MVCinemaRow *noCinemaNoticeRow; // @synthesize noCinemaNoticeRow=_noCinemaNoticeRow;
@property(retain, nonatomic) MVFilmBannerRow *bannerRow; // @synthesize bannerRow=_bannerRow;
@property(retain, nonatomic) MVTableSection *bannerSection; // @synthesize bannerSection=_bannerSection;
@property(retain, nonatomic) MVCinemaSection *cinemaSection; // @synthesize cinemaSection=_cinemaSection;
@property(nonatomic) _Bool dataLoadedFromCache; // @synthesize dataLoadedFromCache=_dataLoadedFromCache;
@property(retain, nonatomic) MVTableViewDataSource *listSource; // @synthesize listSource=_listSource;
@property(retain, nonatomic) NSArray *timeTagDateArray; // @synthesize timeTagDateArray=_timeTagDateArray;
@property(retain, nonatomic) NSMutableArray *shownDateArray; // @synthesize shownDateArray=_shownDateArray;
@property(retain, nonatomic) MVSegmentControl *dateSegmentControl; // @synthesize dateSegmentControl=_dateSegmentControl;
@property(nonatomic) _Bool presaleRedeemMode; // @synthesize presaleRedeemMode=_presaleRedeemMode;
@property(nonatomic) _Bool setNeedsRefresh; // @synthesize setNeedsRefresh=_setNeedsRefresh;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NSString *timeNameFilterKey; // @synthesize timeNameFilterKey=_timeNameFilterKey;
@property(retain, nonatomic) NSString *timeFilterKey; // @synthesize timeFilterKey=_timeFilterKey;
@property(retain, nonatomic) NSString *featureNameFilterKey; // @synthesize featureNameFilterKey=_featureNameFilterKey;
@property(retain, nonatomic) NSString *featureFilterKey; // @synthesize featureFilterKey=_featureFilterKey;
@property(retain, nonatomic) NSString *dateFilterKey; // @synthesize dateFilterKey=_dateFilterKey;
@property(retain, nonatomic) NSString *regionFilterKey; // @synthesize regionFilterKey=_regionFilterKey;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSArray *bannerResponse; // @synthesize bannerResponse=_bannerResponse;
@property(retain, nonatomic) MVGetCinemaListResponse *cinemaResponse; // @synthesize cinemaResponse=_cinemaResponse;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) MVShowModel *currentShowModel; // @synthesize currentShowModel=_currentShowModel;
@property(nonatomic) _Bool multiPageEnable; // @synthesize multiPageEnable=_multiPageEnable;
@property(retain, nonatomic) NSString *bakeupDateFilterKey; // @synthesize bakeupDateFilterKey=_bakeupDateFilterKey;
@property(nonatomic) long long bakeupPageIndex; // @synthesize bakeupPageIndex=_bakeupPageIndex;
@property(retain, nonatomic) MVGetCinemaListResponse *bakeupCinemaResponse; // @synthesize bakeupCinemaResponse=_bakeupCinemaResponse;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool cinemaRequestInAction; // @synthesize cinemaRequestInAction=_cinemaRequestInAction;
@property(retain, nonatomic) TBSDKMTOPServer *lastLoadMoreOperation; // @synthesize lastLoadMoreOperation=_lastLoadMoreOperation;
@property(retain, nonatomic) TBSDKMTOPServer *lastOperation; // @synthesize lastOperation=_lastOperation;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) APNextPagePullView *pullView; // @synthesize pullView=_pullView;
- (void).cxx_destruct;
- (void)resumePageFromSchemeParams:(id)arg1;
- (id)buildRequest;
- (void)fetchAllDataCinemaResponse:(CDUnknownBlockType)arg1;
- (void)setCinemaResponse:(id)arg1 error:(id)arg2 dataLoadedFromCache:(_Bool)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)upPullTableDidTriggerRefresh:(id)arg1;
- (_Bool)isTableViewLoadingNextPage:(id)arg1;
- (void)setHasMore:(_Bool)arg1;
- (void)searchWithResponse:(id)arg1;
- (void)enterSearch;
- (_Bool)APBirdNestSubmit:(id)arg1 params:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)switchLocationBarHidden:(_Bool)arg1;
- (void)defaultTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 row:(id)arg3 section:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)segmentControl:(id)arg1 tagsAtIndex:(long long)arg2;
- (id)segmentControl:(id)arg1 layoutBlockAtIndex:(long long)arg2;
- (id)rowArrayFromCinemaModelArray:(id)arg1;
- (id)rowsFromCurrentResponseAndConditions;
- (void)setCinemaResponse:(id)arg1 dataLoadedFromCache:(_Bool)arg2;
- (_Bool)isFiltering;
- (void)buildDateSegmentView;
- (void)buildShownDateArray;
- (id)getPlaceHolderRowWithString:(id)arg1 isNeedTopLine:(_Bool)arg2;
- (void)clearFilterClicked:(id)arg1;
- (void)resetFilterConditions;
- (void)updateCinemaFilter:(id)arg1;
- (void)buildCinemaFilterView;
- (id)currentSelectedDateTitle;
- (void)didUnFavCinema:(id)arg1;
- (void)didFavCinema:(id)arg1;
- (void)closeRegionFilter:(id)arg1;
- (void)didSelectCinemaWithCinemaInfo:(id)arg1;
- (void)refreshControlDidTriggerRefresh;
- (void)dateSegmentControlValueDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithMode:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

