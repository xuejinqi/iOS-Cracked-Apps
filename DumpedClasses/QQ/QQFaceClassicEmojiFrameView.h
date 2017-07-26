//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFaceFrameCollectionView.h"

@class NSArray, NSMutableArray, UIView;

@interface QQFaceClassicEmojiFrameView : QQFaceFrameCollectionView
{
    _Bool _isShowDeleteButton;
    int _emojiType;
    long long _page;
    UIView *_cmFaceGuideView;
    int _xo;
    NSMutableArray *_emojiCells;
    NSArray *_expressionEmoji;
}

@property(retain, nonatomic) NSArray *expressionEmoji; // @synthesize expressionEmoji=_expressionEmoji;
@property(retain, nonatomic) NSMutableArray *emojiCells; // @synthesize emojiCells=_emojiCells;
- (id)systemEmojiWithemojiID:(unsigned long long)arg1;
- (id)classEmojiWithemojiID:(unsigned long long)arg1;
- (id)cellForCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)getHeaderViewBycollectionView:(id)arg1 atIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)LayoutInit;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isSupportRightDragToGoBack;
- (void)addEmoji:(id)arg1;
- (id)imageWithQQFaceID:(long long)arg1;
- (void)dealloc;
- (void)tryButtonOnClicked:(id)arg1;
- (void)showCMFaceGuid;
- (void)showCMFaceGuidDelay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) int emojiType; // @dynamic emojiType;
@property(nonatomic) _Bool isShowDeleteButton; // @dynamic isShowDeleteButton;
@property(nonatomic) long long page; // @dynamic page;

@end

