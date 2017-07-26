//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZoneDetailViewController.h"

#import "UINavigationControllerDelegate.h"

@class NSString, QQNavigationController, QZoneWebViewController;

@interface MQZoneBlogDetailViewController : MQZoneDetailViewController <UINavigationControllerDelegate>
{
    QZoneWebViewController *_webController;
    QQNavigationController *_nav;
    _Bool _firstInit;
    NSString *_webUrl;
}

- (void).cxx_destruct;
- (void)bringInputBarToFront;
- (void)leftButtonClick:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)initWebView:(id)arg1;
- (_Bool)onRefresh;
- (id)initWithFavourData:(id)arg1 webUrl:(id)arg2;
- (id)initWithDetailData:(id)arg1 webUrl:(id)arg2;
- (id)initWithQQUrl:(id)arg1 from:(long long)arg2 preCtr:(id)arg3 webUrl:(id)arg4;
- (id)initWithUin:(long long)arg1 feedModel:(id)arg2 style:(long long)arg3 from:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

