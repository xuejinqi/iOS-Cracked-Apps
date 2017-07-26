//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "MQZoneTableFootLoadingViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class ITInterestTag, ITPopContentView, ITPopoverView, ITTextField, MQZoneTableFootLoadingView, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIImageView, UILabel, UITableView, UIView;

@interface ITInterestPickerViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UITextFieldDelegate, MQZoneTableFootLoadingViewDelegate>
{
    unsigned int _tagType;
    long long _sourceType;
    ITInterestTag *_interestTag;
    UICollectionView *_pickerView;
    ITTextField *_searchField;
    UITableView *_listView;
    UILabel *_tipLabel;
    UIImageView *_searchIcon;
    ITPopoverView *_popView;
    MQZoneTableFootLoadingView *_getMoreFooter;
    UIView *_lineView;
    NSMutableArray *_searchResults;
    NSMutableArray *_selectedArray;
    NSMutableDictionary *_selectedDic;
    double _pickerViewHeight;
    _Bool _hasSearchBar;
    CDUnknownBlockType _disAppearBlock;
    CDUnknownBlockType _leftBtnBlock;
    CDUnknownBlockType _rightBtnBlock;
    NSString *_leftBtnTitle;
    NSString *_rightBtnTitle;
    NSMutableArray *_recommendArray;
    double _recommendOffset;
    UILabel *_moreTipLabel;
    NSString *_headerTitle;
    ITPopContentView *_popContentView;
}

@property(retain, nonatomic) ITPopContentView *popContentView; // @synthesize popContentView=_popContentView;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showRecommendList;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (_Bool)onGetMore;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (_Bool)isSupportRightDragToGoBack;
- (void)setSearchFieldLayout;
- (void)pickerViewAnimationShow:(_Bool)arg1;
- (void)removeTagInfo:(id)arg1;
- (void)addTagInfo:(id)arg1;
- (void)rightButtonTapped:(id)arg1;
- (void)leftButtonTapped:(id)arg1;
- (void)popCancelBtnTapped:(id)arg1;
- (void)checkRightBtnDisable;
- (void)stopWriteTagLoading;
- (void)showWriteTagLoading;
- (void)setViewDisAppearCallBack:(CDUnknownBlockType)arg1;
- (void)setBarButtonIsLeft:(_Bool)arg1 title:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getResultInterestTag;
- (double)selectItemsWidth;
- (_Bool)isShowPopView;
- (_Bool)isShowTextInSearchBar;
- (void)refreshView;
- (void)reloadData:(_Bool)arg1;
- (id)moreTipLabel;
- (void)rspWriteTagFinish:(id)arg1;
- (void)requestListFailed;
- (void)getSelectedList:(id)arg1;
- (void)setSelectedArrayAndDic:(id)arg1;
- (void)requsetSuccess:(id)arg1;
- (void)registerNotification;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithInterestTag:(id)arg1 sourceType:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

