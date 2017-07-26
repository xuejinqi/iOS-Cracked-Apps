//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "APGSearchGridViewDelegate.h"
#import "PromotionCenterDelegate.h"
#import "UIScrollViewDelegate.h"

@class APGSearchBar, APGSearchGridModel, APGSearchGridView, NSString, UIScrollView;

@interface APGSearchHomeViewController : UIViewController <APGSearchGridViewDelegate, PromotionCenterDelegate, UIScrollViewDelegate>
{
    APGSearchBar *_searchBar;
    NSString *_spaceCode;
    NSString *_targetId;
    NSString *_queryHint;
    NSString *_queryWord;
    APGSearchGridModel *_historyData;
    APGSearchGridModel *_hotwordData;
    UIScrollView *_scrollView;
    APGSearchGridView *_historyView;
    APGSearchGridView *_hotwordView;
}

@property(retain, nonatomic) APGSearchGridView *hotwordView; // @synthesize hotwordView=_hotwordView;
@property(retain, nonatomic) APGSearchGridView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) APGSearchGridModel *hotwordData; // @synthesize hotwordData=_hotwordData;
@property(retain, nonatomic) APGSearchGridModel *historyData; // @synthesize historyData=_historyData;
@property(retain, nonatomic) NSString *queryWord; // @synthesize queryWord=_queryWord;
@property(retain, nonatomic) NSString *queryHint; // @synthesize queryHint=_queryHint;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) __weak APGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchGridTitleIconClicked:(id)arg1;
- (void)searchGridItemClicked:(id)arg1 index:(id)arg2;
- (id)getSearchHistory;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)addCDPObserver;
- (void)layoutHistoryView:(id)arg1;
- (void)layoutHotWordView;
- (void)addHotwordContentView;
- (void)addHistoryContentView;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

