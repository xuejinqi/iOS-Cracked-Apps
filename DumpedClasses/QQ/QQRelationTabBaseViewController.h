//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseViewController.h"

@interface QQRelationTabBaseViewController : QQSearchBaseViewController
{
    double _contentOffsetYOfContentView;
    _Bool _bSelected;
    id <QQRelationTabNavBarItemDelegate> _subVCTableViewDelegate;
}

@property(nonatomic) _Bool bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) __weak id <QQRelationTabNavBarItemDelegate> subVCTableViewDelegate; // @synthesize subVCTableViewDelegate=_subVCTableViewDelegate;
- (void).cxx_destruct;
- (void)doSelectedAction;
- (void)scrollListToTop;
- (void)resetListState;
- (void)refreshData;
- (double)fetchContentOffsetYOfContentView;
- (double)viewControllerContentOffsetY;

@end

