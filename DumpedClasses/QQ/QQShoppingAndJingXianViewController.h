//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

@class NSDictionary, QQShoppingAssistantAccountViewController, QQWebViewController;

@interface QQShoppingAndJingXianViewController : QQViewController
{
    QQShoppingAssistantAccountViewController *_shoppingController;
    QQWebViewController *_webViewController;
    double _titleBarHeight;
    NSDictionary *_webActionDataDic;
}

@property(retain, nonatomic) NSDictionary *webActionDataDic; // @synthesize webActionDataDic=_webActionDataDic;
@property(nonatomic) double titleBarHeight; // @synthesize titleBarHeight=_titleBarHeight;
@property(readonly, retain, nonatomic) QQWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(readonly, retain, nonatomic) QQShoppingAssistantAccountViewController *shoppingController; // @synthesize shoppingController=_shoppingController;
- (void)refreshShoppingViewHeight;
- (void)setWebActionData:(id)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)isExistUnReadShoppingMsg:(id)arg1;
- (id)getCurrmessageView;
- (void)entryMySearch;
- (void)entryMyWeiDian;
- (void)titleBarAction:(_Bool)arg1 Offset:(double)arg2;
- (void)notifyWebFresh:(double)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithModel:(id)arg1 topString:(id)arg2;
- (id)init;
- (void)dealloc;

@end

