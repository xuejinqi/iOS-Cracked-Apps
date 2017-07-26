//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APScanAnimationView, APScanTabBar, APScanTitleBar, APScanTorchButton, APScanViewConfig, NSArray, UIButton, UILabel;

@interface APScanContainerView : UIView
{
    _Bool _torchDisable;
    NSArray *_configArray;
    APScanTitleBar *_titleBar;
    APScanTabBar *_tabBar;
    APScanAnimationView *_scanView;
    UILabel *_scanNotice;
    UIButton *_scanAction;
    UIButton *_scanFeedback;
    APScanViewConfig *_currentConfig;
    APScanTorchButton *_torchToast;
    UIView *_netWorkingUnReachableView;
    UILabel *_unReachableLabel;
    UIButton *_couponMapBtn;
    long long _feedbackWaitTime;
}

@property(nonatomic) _Bool torchDisable; // @synthesize torchDisable=_torchDisable;
@property(nonatomic) long long feedbackWaitTime; // @synthesize feedbackWaitTime=_feedbackWaitTime;
@property(retain, nonatomic) UIButton *couponMapBtn; // @synthesize couponMapBtn=_couponMapBtn;
@property(retain, nonatomic) UILabel *unReachableLabel; // @synthesize unReachableLabel=_unReachableLabel;
@property(retain, nonatomic) UIView *netWorkingUnReachableView; // @synthesize netWorkingUnReachableView=_netWorkingUnReachableView;
@property(retain, nonatomic) APScanTorchButton *torchToast; // @synthesize torchToast=_torchToast;
@property(retain, nonatomic) APScanViewConfig *currentConfig; // @synthesize currentConfig=_currentConfig;
@property(retain, nonatomic) UIButton *scanFeedback; // @synthesize scanFeedback=_scanFeedback;
@property(retain, nonatomic) UIButton *scanAction; // @synthesize scanAction=_scanAction;
@property(retain, nonatomic) UILabel *scanNotice; // @synthesize scanNotice=_scanNotice;
@property(retain, nonatomic) APScanAnimationView *scanView; // @synthesize scanView=_scanView;
@property(retain, nonatomic) APScanTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) APScanTitleBar *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) NSArray *configArray; // @synthesize configArray=_configArray;
- (void).cxx_destruct;
- (id)feedBackConfig;
- (void)onActionClick;
- (void)onTorch;
- (void)onFeedbackClick;
- (void)onCouponMap;
- (double)titleBarHeight;
- (void)resetContent;
- (void)showFeedBackToast;
- (void)showPromptToast;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithConfig:(id)arg1;
- (void)setTitleBarHidden:(_Bool)arg1;
- (void)setTabHidden:(_Bool)arg1;
- (void)setContentHidden:(_Bool)arg1;
- (void)lockOperationOnlyExit:(_Bool)arg1;
- (void)showNetWorkingUnReachable:(_Bool)arg1;
- (void)showCouponMap:(_Bool)arg1;
- (void)showTorchToast:(_Bool)arg1;
- (void)setAnimateViewHidden:(_Bool)arg1;
- (void)setTorchState:(int)arg1;
- (void)stopScanAnimation;
- (void)startScanAnimation;
- (void)simulateTabClick:(id)arg1;
- (void)setBackItemTitle:(id)arg1;
- (void)setSelectedConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configArray:(id)arg2;

@end

