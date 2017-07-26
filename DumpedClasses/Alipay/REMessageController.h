//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "REBaseViewController.h"

#import "APPickerDelegate.h"
#import "REErrorViewDelegate.h"
#import "REMoreFooterViewDelegate.h"
#import "RERouterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APBarButtonItem, APPickerView, NSArray, NSMutableArray, NSString, REMoreFooterView, RESelfTotalSummaryView, UIButton, UIRefreshControl, UISegmentedControl, UITableView, UITapGestureRecognizer, UIView;

@interface REMessageController : REBaseViewController <UITableViewDataSource, UITableViewDelegate, RERouterDelegate, REMoreFooterViewDelegate, REErrorViewDelegate, APPickerDelegate>
{
    struct CGRect _containerRect;
    struct CGRect _tableViewRect;
    _Bool _isFirstTimeRequest;
    _Bool _viewHasReady;
    _Bool _needsQuerySentListCache;
    _Bool _needsQueryReceivedListCache;
    _Bool _firstShowSentListNeedRPC;
    _Bool _firstShowReceiveListNeedRPC;
    int _pageSize;
    unsigned long long _messageType;
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_segmentTitleArray;
    NSArray *_types;
    UIView *_receivedContainer;
    UITableView *_receivedTableView;
    UIRefreshControl *_receivedTableRefreshControl;
    REMoreFooterView *_receivedTableMoreFooterView;
    NSMutableArray *_receivedList;
    UIView *_receivedListEmpty;
    long long _receivedListGmtClientShow;
    UIView *_sentContainer;
    UITableView *_sentTableView;
    UIRefreshControl *_sentTableRefreshControl;
    REMoreFooterView *_sentTableMoreFooterView;
    NSMutableArray *_sentList;
    UIView *_sentListEmpty;
    long long _sentListGmtClientShow;
    APBarButtonItem *_helpBarbutton;
    RESelfTotalSummaryView *_receivedSummaryView;
    RESelfTotalSummaryView *_sentSummaryView;
    NSArray *_years;
    APPickerView *_yearPickerView;
    long long _pickerViewSelectedIndex;
    UIView *_pickerMaskView;
    UIButton *_receivedYearButton;
    UIButton *_sentYearButton;
    UITapGestureRecognizer *_hidePickerRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *hidePickerRecognizer; // @synthesize hidePickerRecognizer=_hidePickerRecognizer;
@property(retain, nonatomic) UIButton *sentYearButton; // @synthesize sentYearButton=_sentYearButton;
@property(retain, nonatomic) UIButton *receivedYearButton; // @synthesize receivedYearButton=_receivedYearButton;
@property(retain, nonatomic) UIView *pickerMaskView; // @synthesize pickerMaskView=_pickerMaskView;
@property(nonatomic) long long pickerViewSelectedIndex; // @synthesize pickerViewSelectedIndex=_pickerViewSelectedIndex;
@property(retain, nonatomic) APPickerView *yearPickerView; // @synthesize yearPickerView=_yearPickerView;
@property(retain, nonatomic) NSArray *years; // @synthesize years=_years;
@property(retain, nonatomic) RESelfTotalSummaryView *sentSummaryView; // @synthesize sentSummaryView=_sentSummaryView;
@property(retain, nonatomic) RESelfTotalSummaryView *receivedSummaryView; // @synthesize receivedSummaryView=_receivedSummaryView;
@property(nonatomic) _Bool firstShowReceiveListNeedRPC; // @synthesize firstShowReceiveListNeedRPC=_firstShowReceiveListNeedRPC;
@property(nonatomic) _Bool firstShowSentListNeedRPC; // @synthesize firstShowSentListNeedRPC=_firstShowSentListNeedRPC;
@property(nonatomic) _Bool needsQueryReceivedListCache; // @synthesize needsQueryReceivedListCache=_needsQueryReceivedListCache;
@property(nonatomic) _Bool needsQuerySentListCache; // @synthesize needsQuerySentListCache=_needsQuerySentListCache;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) APBarButtonItem *helpBarbutton; // @synthesize helpBarbutton=_helpBarbutton;
@property(nonatomic) long long sentListGmtClientShow; // @synthesize sentListGmtClientShow=_sentListGmtClientShow;
@property(retain, nonatomic) UIView *sentListEmpty; // @synthesize sentListEmpty=_sentListEmpty;
@property(retain, nonatomic) NSMutableArray *sentList; // @synthesize sentList=_sentList;
@property(retain, nonatomic) REMoreFooterView *sentTableMoreFooterView; // @synthesize sentTableMoreFooterView=_sentTableMoreFooterView;
@property(retain, nonatomic) UIRefreshControl *sentTableRefreshControl; // @synthesize sentTableRefreshControl=_sentTableRefreshControl;
@property(retain, nonatomic) UITableView *sentTableView; // @synthesize sentTableView=_sentTableView;
@property(retain, nonatomic) UIView *sentContainer; // @synthesize sentContainer=_sentContainer;
@property(nonatomic) long long receivedListGmtClientShow; // @synthesize receivedListGmtClientShow=_receivedListGmtClientShow;
@property(retain, nonatomic) UIView *receivedListEmpty; // @synthesize receivedListEmpty=_receivedListEmpty;
@property(retain, nonatomic) NSMutableArray *receivedList; // @synthesize receivedList=_receivedList;
@property(retain, nonatomic) REMoreFooterView *receivedTableMoreFooterView; // @synthesize receivedTableMoreFooterView=_receivedTableMoreFooterView;
@property(retain, nonatomic) UIRefreshControl *receivedTableRefreshControl; // @synthesize receivedTableRefreshControl=_receivedTableRefreshControl;
@property(retain, nonatomic) UITableView *receivedTableView; // @synthesize receivedTableView=_receivedTableView;
@property(retain, nonatomic) UIView *receivedContainer; // @synthesize receivedContainer=_receivedContainer;
@property(nonatomic) _Bool viewHasReady; // @synthesize viewHasReady=_viewHasReady;
@property(nonatomic) _Bool isFirstTimeRequest; // @synthesize isFirstTimeRequest=_isFirstTimeRequest;
@property(retain, nonatomic) NSArray *types; // @synthesize types=_types;
@property(retain, nonatomic) NSMutableArray *segmentTitleArray; // @synthesize segmentTitleArray=_segmentTitleArray;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (void)setTitleForButton:(id)arg1 year:(id)arg2;
- (void)toggleYearPicker;
- (id)currentTableView;
- (id)currentPickerView;
- (id)currentYear;
- (id)selectedYear;
- (void)selectedPickerView:(id)arg1;
- (void)cancelPickerView:(id)arg1;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)hideCurrentPickerView;
- (void)handlePickerMaskViewTap:(id)arg1;
- (void)gotoHelpPage;
- (void)didClickedErrorViewButton:(id)arg1;
- (void)moreFooterViewDidCallBack:(id)arg1;
- (id)lastNotMockItemInList:(id)arg1;
- (_Bool)checkItem:(id)arg1 existInList:(id)arg2;
- (void)sortItems:(id)arg1;
- (void)mergeListA:(id)arg1 withListB:(id)arg2 outputResultList:(id)arg3 outputRemovedList:(id)arg4;
- (void)filterDeletedItemInArray:(id)arg1;
- (id)combineOldElements:(id)arg1 newElements:(id)arg2;
- (id)messageSummaryFromPBResult:(id)arg1;
- (id)convertMessageInfoToCellInfo:(id)arg1;
- (void)reloadCellWithMessageInfo:(id)arg1;
- (void)deleteMessageInfo:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)cachedSummaryResultForYear:(id)arg1;
- (void)cacheSummaryResult:(id)arg1;
- (void)updateSelfTotalSummaryView;
- (void)querySumInfo;
- (void)deleteFromList:(id)arg1;
- (void)querySentListAndRefresh:(_Bool)arg1;
- (void)queryReceiveListAndRefresh:(_Bool)arg1;
- (id)queryListCacheWithMessageType:(unsigned long long)arg1 year:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshListData:(id)arg1;
- (void)refreshEventReceive:(id)arg1;
- (void)setShowFlag:(_Bool)arg1 forTableView:(id)arg2 inContainer:(id)arg3;
- (void)fetchListDataWithMessageType:(unsigned long long)arg1;
- (void)showContainerWithMessageType:(unsigned long long)arg1;
- (void)segmentedSelectedChanged:(id)arg1;
- (void)createSentContainer;
- (void)createReceiveContainer;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupViews;
- (void)syncData:(id)arg1;
- (void)registerSyncNotification;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)initWithMessageType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

