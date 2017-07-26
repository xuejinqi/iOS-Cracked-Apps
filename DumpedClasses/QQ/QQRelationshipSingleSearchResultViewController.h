//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CFFootViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CFFootView, FTSCustomSearchBar, NSArray, NSDictionary, NSString, UILabel, UITableView;

@interface QQRelationshipSingleSearchResultViewController : QQViewController <CFFootViewDelegate, UISearchBarDelegate, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_searchResult;
    NSString *_searchType;
    NSDictionary *_sectionStringDict;
    CFFootView *_footerView;
    UILabel *_footLabel;
    _Bool _isRequesting;
    _Bool _isEnd;
    int _start;
    _Bool _needRefreshResultTable;
    unsigned long long _currentPage;
    _Bool _isPullDown;
    _Bool newcomming;
    int _xo;
    _Bool _supportRightDragToGoBack;
    int _pbArticleSource;
    FTSCustomSearchBar *_searchBar;
    UITableView *_searchResultTable;
    NSString *_keyword;
    long long _reqSearchFrom;
    long long _ftsFromSource;
    long long _ftsFliter;
}

+ (id)searchResultViewControllerWithResult:(id)arg1 andSerachType:(id)arg2;
@property(nonatomic) _Bool supportRightDragToGoBack; // @synthesize supportRightDragToGoBack=_supportRightDragToGoBack;
@property(nonatomic) int pbArticleSource; // @synthesize pbArticleSource=_pbArticleSource;
@property(nonatomic) long long ftsFliter; // @synthesize ftsFliter=_ftsFliter;
@property(nonatomic) long long ftsFromSource; // @synthesize ftsFromSource=_ftsFromSource;
@property(nonatomic) long long reqSearchFrom; // @synthesize reqSearchFrom=_reqSearchFrom;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) UITableView *searchResultTable; // @synthesize searchResultTable=_searchResultTable;
@property(retain, nonatomic) FTSCustomSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (double)_ftsGetCellForRowHeightSingleSearch:(id)arg1;
- (void)ftsCustomSearchBarReturnButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handlePopLogicForAdvancedSearch;
- (void)handlePopLogicForFTS;
- (void)backToSearchHomePage:(id)arg1;
- (void)getQQBussinessChatSettingViewController:(id)arg1 bussinessWpaSigT:(id)arg2;
- (void)showOfficalAccountDetailWithUin:(long long)arg1 account_flag:(unsigned int)arg2 key:(id)arg3;
- (id)cellForArticleSection:(id)arg1 indexPath:(id)arg2;
- (id)cellForPublicSection:(id)arg1 indexPath:(id)arg2;
- (id)cellForGroupSection:(id)arg1 indexPath:(id)arg2;
- (id)cellForAccountSection:(id)arg1 indexPath:(id)arg2;
- (_Bool)startSearchOnButtonClicked;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)startRefreshFoot:(id)arg1;
- (void)startRefresh:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)startSingleSearchWithLoadingIndicator:(_Bool)arg1;
- (int)getSummaryTypeUsingSearchResult:(id)arg1;
- (_Bool)gotoPublicCardIfResultCountIsUnique:(id)arg1;
- (_Bool)gotoSummaryCardIfResultCountIsUnique:(id)arg1;
- (void)onSingleSearchGetResult:(id)arg1;
- (void)unRegisterNotifications;
- (void)registerNotifications;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)hideKeyboardWhenSwipe:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)isSupportFullScreenLayout;
- (void)loadView;
- (id)initWithSearchResult:(id)arg1 andSerachType:(id)arg2;
@property(retain, nonatomic) NSDictionary *sectionStringDict; // @dynamic sectionStringDict;
@property(nonatomic) int start; // @dynamic start;
@property(nonatomic) _Bool isEnd; // @dynamic isEnd;
- (id)fliterTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UILabel *footLabel; // @dynamic footLabel;
@property(retain, nonatomic) CFFootView *footerView; // @dynamic footerView;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isPullDown; // @dynamic isPullDown;
@property(nonatomic) _Bool isRequesting; // @dynamic isRequesting;
@property(nonatomic) _Bool needRefreshResultTable; // @dynamic needRefreshResultTable;
@property(retain, nonatomic) NSArray *searchResult; // @dynamic searchResult;
@property(nonatomic) NSString *searchType; // @dynamic searchType;
@property(readonly) Class superclass;

@end

