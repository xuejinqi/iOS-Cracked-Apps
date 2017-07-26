//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPageViewController.h"

#import "FTSAssociationalWordsViewDelegate.h"
#import "FTSCustomSearchBarDelegate.h"
#import "QQDynamicHotWordsAreaDelegate.h"
#import "QQDynamicSearchTabBarDelegate.h"
#import "QQPageViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"

@class FTSAssociationalWordsView, FTSCustomSearchBar, FTSEntranceViewController, FTSGroupResultsBaseViewController, FTSResultMoreBaseViewController, NSMutableArray, NSString, QQDynamicHotWordsAreaNew, QQDynamicSearchTabBar, UIPanGestureRecognizer, UITableView;

@interface FTSGroupResultsTabViewController : QQPageViewController <UIAlertViewDelegate, QQDynamicSearchTabBarDelegate, UIScrollViewDelegate, UITableViewDelegate, QQPageViewControllerDelegate, FTSCustomSearchBarDelegate, FTSAssociationalWordsViewDelegate, QQDynamicHotWordsAreaDelegate>
{
    FTSGroupResultsBaseViewController *_ftsGroupResultsViewController;
    UIPanGestureRecognizer *_panGesture;
    NSString *_lastKeyWord;
    CDUnknownBlockType _onOperateCallBack;
    struct CGRect _contentFrame;
    QQDynamicSearchTabBar *_searchTabBar;
    NSMutableArray *_searchTabItems;
    NSMutableArray *_searchTabItemsName;
    NSMutableArray *_viewControllers;
    long long _currentState;
    long long _lastState;
    UITableView *_tableView;
    QQDynamicHotWordsAreaNew *_dynamicHotArea;
    FTSAssociationalWordsView *_dynamicAssociationalWordsView;
    _Bool _isAISearch;
    _Bool _isNeedRealTimeSearch;
    _Bool _onlyNetSearch;
    _Bool _dontShowAISearch;
    _Bool _isOldDynamicSearchStyle;
    int _pbArticleSource;
    int _searchStateFilter;
    FTSCustomSearchBar *_ftsContainerSearchBar;
    long long _ftsFliter;
    NSString *_searchBarPlaceholder;
    FTSResultMoreBaseViewController *_ftsResultMoreBaseViewController;
    FTSEntranceViewController *_ftsEntranceViewController;
}

@property(nonatomic) _Bool isOldDynamicSearchStyle; // @synthesize isOldDynamicSearchStyle=_isOldDynamicSearchStyle;
@property(nonatomic) _Bool dontShowAISearch; // @synthesize dontShowAISearch=_dontShowAISearch;
@property(nonatomic) _Bool onlyNetSearch; // @synthesize onlyNetSearch=_onlyNetSearch;
@property(nonatomic) _Bool isNeedRealTimeSearch; // @synthesize isNeedRealTimeSearch=_isNeedRealTimeSearch;
@property(nonatomic) int searchStateFilter; // @synthesize searchStateFilter=_searchStateFilter;
@property(nonatomic) __weak FTSEntranceViewController *ftsEntranceViewController; // @synthesize ftsEntranceViewController=_ftsEntranceViewController;
@property(nonatomic) __weak FTSResultMoreBaseViewController *ftsResultMoreBaseViewController; // @synthesize ftsResultMoreBaseViewController=_ftsResultMoreBaseViewController;
@property(nonatomic) _Bool isAISearch; // @synthesize isAISearch=_isAISearch;
@property(nonatomic) int pbArticleSource; // @synthesize pbArticleSource=_pbArticleSource;
@property(copy, nonatomic) NSString *searchBarPlaceholder; // @synthesize searchBarPlaceholder=_searchBarPlaceholder;
@property(nonatomic) long long ftsFliter; // @synthesize ftsFliter=_ftsFliter;
@property(retain, nonatomic) FTSCustomSearchBar *ftsContainerSearchBar; // @synthesize ftsContainerSearchBar=_ftsContainerSearchBar;
- (void).cxx_destruct;
- (void)onSearchHotWordUpdateCallback:(id)arg1;
- (void)FTSATableView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 model:(id)arg3;
- (void)onAssociationWordUpdateCallback:(id)arg1;
- (void)updateAssociationWord:(id)arg1;
- (void)qqDynamicHotWordBecomeFirstResponder;
- (void)qqDynamicHotWordDidClickedByH5:(id)arg1;
- (void)qqDynamicHotIndexDidClicked:(id)arg1;
- (void)qqDynamicHotWordDidClicked:(id)arg1;
- (void)clearLastSearchWord;
- (void)clearSearchResultList;
- (void)reloadSearchStateAppearance;
- (void)resetCurrentSearchState:(long long)arg1;
- (long long)currentSearchState;
- (void)hideSearchTabBar;
- (void)showSearchTabBar:(_Bool)arg1;
- (_Bool)isFirstAllTab:(id)arg1;
- (void)setSearchBarTabs:(id)arg1;
- (id)viewControllerForPage:(long long)arg1;
- (unsigned long long)numberOfPage;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resetSubGroupResultsViewControllerSearchBarDelegate:(long long)arg1;
- (void)pageDidChanged;
- (void)tabBar:(id)arg1 didSelectIndex:(long long)arg2;
- (void)dismissSearchBarFirstResponder;
- (id)_getHandledCurrentSearchText;
- (void)ftsCustomSearchBarReturnButtonClicked:(id)arg1;
- (void)clearSearchDataBeforeSearch;
- (void)searchEventHandleSearchProcessAndForceNetSearch:(id)arg1;
- (void)searchEventHandleSearchProcess:(id)arg1;
- (void)forceStartNetSearch:(id)arg1;
- (void)adjustViewFrameWhenCreateSearchBar;
- (void)initializeFTSCustomSearchBar;
- (void)initializeAssociationalWordsView;
- (void)initializeHotAreaView;
- (void)initializeSearchTabBar;
- (void)initializeSearchBackgroud;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSearchKeyword:(id)arg1 onOperateCallBack:(CDUnknownBlockType)arg2;
- (id)initWithSearchKeyword:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

