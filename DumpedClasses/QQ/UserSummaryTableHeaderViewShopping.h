//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryTableHeaderViewSimplified.h"

#import "QQ3DScrollViewDataSource.h"

@class NSString, QQ3DScrollView, RichStateView, ShoppingPersonalCardModel, UIImageView, UILabel, UIView;

@interface UserSummaryTableHeaderViewShopping : UserSummaryTableHeaderViewSimplified <QQ3DScrollViewDataSource>
{
    UIView *_basicInfoBkgView;
    UIView *_signatureBkgView;
    RichStateView *_signatrueView;
    UILabel *_shopNameLabel;
    UIImageView *_shopNameMarkImage;
    UIView *_detailSplitView1;
    UIView *_detailSplitView2;
    UILabel *_shopUserNameLabel;
    UIImageView *_shopUserNameLabelBkgView;
    QQ3DScrollView *_3dScrollView;
    double _headViewWidth;
    ShoppingPersonalCardModel *_shopInfo;
    long long _uin;
    _Bool bReported;
}

- (id)viewAtIndex:(unsigned long long)arg1;
- (double)heightOfViews;
- (double)widthForViews;
- (unsigned long long)numberOfViews;
- (void)onRichStateSignatureTapped:(id)arg1;
- (void)layoutView;
- (int)getAllHeight;
- (void)dealloc;
- (void)onTouchUrlImage:(id)arg1;
- (id)getCurrentShopImageUrl;
- (void)updateShopInfo:(id)arg1;
- (void)setColorOfTextLabelsByColorInfo:(id)arg1;
- (void)refreshRichState;
- (void)updateAllData:(id)arg1;
- (id)initWithAllData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

