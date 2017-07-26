//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CFFootViewDelegate.h"
#import "FTSCustomSearchBarDelegate.h"
#import "StorySearchMoreDelegate.h"
#import "UISearchBarDelegate.h"

@class CFFootView, NSArray, NSMutableArray, NSString, QQStoryDiscoverySearchBar, QQStoryMixSearchListView, UIButton, UIImageView, UILabel, UIView;

@interface QQStoryDiscoverySearchViewController : QQViewController <UISearchBarDelegate, StorySearchMoreDelegate, FTSCustomSearchBarDelegate, CFFootViewDelegate>
{
    QQStoryDiscoverySearchBar *_storySearchBar;
    NSMutableArray *_storySearchResult;
    QQStoryMixSearchListView *_resultListView;
    UIView *_contentAreaView;
    NSString *_startCookie;
    UIView *_noResultView;
    UILabel *_noResultLabel;
    UIButton *_noResultButton;
    UIImageView *_noResultIcon;
    UIView *_waiteLoadingView;
    CFFootView *_footerView;
    int _seq;
    _Bool _isInitWithKeyword;
    NSString *_currentKeyword;
    NSArray *_kewordList;
    NSMutableArray *_personList;
    NSMutableArray *_mediaList;
}

@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(retain, nonatomic) NSMutableArray *personList; // @synthesize personList=_personList;
@property(retain, nonatomic) NSArray *kewordList; // @synthesize kewordList=_kewordList;
@property(retain, nonatomic) NSString *currentKeyword; // @synthesize currentKeyword=_currentKeyword;
- (void)responeToEndEditing;
- (double)getNavigationBarHeight;
- (void)loadMoreStorySearchData;
- (void)dismissSearchbar;
- (void)onDidClickLoadPerson;
- (void)getSeachListNotify:(id)arg1;
- (void)reqSearchMoreKeyword:(id)arg1;
- (void)reqSearchKeyword:(id)arg1;
- (void)switchAndDiasplayErrorViewWithType:(long long)arg1;
- (void)ftsCustomSearchBarReturnButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)handleSearchOperation;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)initializeLoadingView;
- (void)initializeResultListView;
- (void)initializeLoadmoreView;
- (void)initializeSearchBar;
- (void)initializeErrorView;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithKeyword:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

