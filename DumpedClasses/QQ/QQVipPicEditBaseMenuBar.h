//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, PicEditBaseMenuBarItem;

@interface QQVipPicEditBaseMenuBar : UIView
{
    UIView *_mainBar;
    NSArray *_itemArr;
    PicEditBaseMenuBarItem *_selectedItem;
    id <QQVipPicEditMenuBarDelegate> _delegate;
}

+ (id)defaultMenuBar;
+ (id)defaultMenuBarItemArr;
@property(nonatomic) __weak id <QQVipPicEditMenuBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PicEditBaseMenuBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSArray *itemArr; // @synthesize itemArr=_itemArr;
@property(retain, nonatomic) UIView *mainBar; // @synthesize mainBar=_mainBar;
- (void).cxx_destruct;
- (void)barItemClick:(id)arg1;
- (id)itemForKey:(id)arg1;
- (void)showAllItems;
- (void)hideItemsByKeys:(id)arg1;
- (void)setSelected:(_Bool)arg1 forItem:(id)arg2;
- (void)setBarItemArray:(id)arg1;

@end

