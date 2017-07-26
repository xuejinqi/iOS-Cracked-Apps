//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NavTabBarViewController.h"

#import "QQRelationTabNavTabBarViewControllerDelegate.h"

@class NSString, QQRelationTabScrollView;

@interface QQRelationTabNavTabBarViewController : NavTabBarViewController <QQRelationTabNavTabBarViewControllerDelegate>
{
    QQRelationTabScrollView *_parentQQRelationTabScrollView;
}

@property(retain, nonatomic) QQRelationTabScrollView *parentQQRelationTabScrollView; // @synthesize parentQQRelationTabScrollView=_parentQQRelationTabScrollView;
- (void)doNavTabBarSelectedIndexChange;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)bSelectedTabVCContentOffsetToTop;
- (void)scrollSelectedTabListToTop;
- (void)resetSelectedTabListState;
- (void)beginRefreshSelectedTab;
- (double)contentOffsetYOfContentViewInSelectedTabVC;
- (double)selectedTabVCContentOffsetY;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

