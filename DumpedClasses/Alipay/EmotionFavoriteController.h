//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEScrollController.h"

#import "AUSearchTitleViewDelegate.h"
#import "BEEPhotoPickerDelegate.h"

@class AUSearchTitleView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImage, UIView;

@interface EmotionFavoriteController : BEEScrollController <AUSearchTitleViewDelegate, BEEPhotoPickerDelegate>
{
    UIView *_editingBar;
    UIButton *_deleteButton;
    double _iconSize;
    unsigned long long _numberOfCols;
    unsigned long long _visibleRow;
    NSMutableDictionary *_reuseImageViews;
    _Bool _favoriteEmotionPackageChanged;
    UIView *_refreshBar;
    UIImage *_image;
    _Bool _editing;
    NSArray *_emotions;
    NSMutableArray *_favoriteViews;
    AUSearchTitleView *_searchDoor;
}

@property(retain) AUSearchTitleView *searchDoor; // @synthesize searchDoor=_searchDoor;
@property(readonly, nonatomic) NSMutableArray *favoriteViews; // @synthesize favoriteViews=_favoriteViews;
@property(readonly, nonatomic) NSArray *emotions; // @synthesize emotions=_emotions;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (void)deleteButtonClicked:(id)arg1;
- (void)emotionButtonClicked:(id)arg1;
- (void)editButtonClicked:(id)arg1;
- (void)photoPickerControllerDidFinish:(id)arg1 assets:(id)arg2;
- (void)addButtonClicked:(id)arg1;
- (void)favoriteEmotionsChanged:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadContent;
- (void)favoriteEmotionsSyncChanged:(id)arg1;
- (void)refreshButtonClicked:(id)arg1;
- (void)dismissRefreshBar;
- (void)checkAndSyncFavoriteEmotions;
- (void)viewWillDestroy;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didPressedTitleView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

