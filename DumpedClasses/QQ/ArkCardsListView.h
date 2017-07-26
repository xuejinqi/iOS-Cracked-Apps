//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "ArkCardViewCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableArray, NSString;

@interface ArkCardsListView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ArkCardViewCellDelegate>
{
    _Bool _isSelf;
    _Bool _createdAllArkViews;
    double _cardAlignDistance;
    unsigned long long _style;
    CDUnknownBlockType _cardPostionDidChangedBlock;
    CDUnknownBlockType _cardFunctionalButtonTapedBlock;
    CDUnknownBlockType _cardSourceButtonTapedBlock;
    NSMutableArray *_models;
    CDStruct_f9c2ea2a _cardPosition;
}

@property(nonatomic) _Bool createdAllArkViews; // @synthesize createdAllArkViews=_createdAllArkViews;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
@property(copy, nonatomic) CDUnknownBlockType cardSourceButtonTapedBlock; // @synthesize cardSourceButtonTapedBlock=_cardSourceButtonTapedBlock;
@property(copy, nonatomic) CDUnknownBlockType cardFunctionalButtonTapedBlock; // @synthesize cardFunctionalButtonTapedBlock=_cardFunctionalButtonTapedBlock;
@property(copy, nonatomic) CDUnknownBlockType cardPostionDidChangedBlock; // @synthesize cardPostionDidChangedBlock=_cardPostionDidChangedBlock;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double cardAlignDistance; // @synthesize cardAlignDistance=_cardAlignDistance;
@property(nonatomic) CDStruct_f9c2ea2a cardPosition; // @synthesize cardPosition=_cardPosition;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
- (void).cxx_destruct;
- (void)arkViewCell:(id)arg1 didGotArkViewSize:(struct CGSize)arg2;
- (void)arkViewCell:(id)arg1 didTapedFunctionalButton:(id)arg2;
- (void)arkViewCell:(id)arg1 didTapedSourceButton:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CDStruct_f9c2ea2a)targetOffsetForCurrentOffset:(double)arg1;
- (void)scrollToCardWithIndex:(unsigned long long)arg1;
- (void)updateViews;
@property(retain, nonatomic) NSArray *cardModels;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

