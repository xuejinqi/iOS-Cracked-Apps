//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SpritePanelKeyboardView : UIView
{
    struct UIEdgeInsets _pageInsets;
    struct CGSize _cellGap;
    double _itemHeight;
    double _itemIconHeightWidth;
    int _packageType;
    _Bool _isGroup;
    id <SpritePanelKeyboardViewDelegate> _delegte;
    NSArray *_itemControlArray;
}

+ (unsigned long long)rowPerPage;
+ (unsigned long long)columnPerPage;
@property(retain, nonatomic) NSArray *itemControlArray; // @synthesize itemControlArray=_itemControlArray;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) id <SpritePanelKeyboardViewDelegate> delegte; // @synthesize delegte=_delegte;
- (void)dealloc;
- (void)didClickSpriteItemControl:(id)arg1;
- (id)itemControlByIndex:(unsigned long long)arg1;
- (struct CGRect)itemFrameByIndex:(unsigned long long)arg1;
- (void)reloadIcon:(id)arg1;
- (_Bool)isCanShowWith:(id)arg1;
- (void)loadTextActionItemUI:(id)arg1;
- (void)loadNormalItemUI:(id)arg1;
- (void)showTipsView;
- (id)initWithFrame:(struct CGRect)arg1 itemModels:(id)arg2 isGroup:(_Bool)arg3 packageType:(int)arg4;

@end

