//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QZJMaterialMaterialItem, UIImage;

@protocol QZLVStartLiveViewDelegate <NSObject>

@optional
- (void)selectTheme:(QZJMaterialMaterialItem *)arg1;
- (void)jumpToWebview:(NSString *)arg1;
- (void)startLiveLagTimer;
- (void)recordCameraSetting;
- (void)showNoMicPrivilegeAlert;
- (void)showStartLiveCellularAlert:(_Bool)arg1;
- (void)onStartCountDown;
- (_Bool)isContiuneLive;
- (UIImage *)liveCoverImage;
- (void)checkLiveAuthentication;
- (void)didProtocolClicked;
- (void)didCountdownIsOver;
- (void)didStartLiveClicked;
- (void)didSwitchCameraClicked;
- (void)didLBSSwitchClicked;
- (void)didPermissionSwitchClicked;
- (void)didSetCoverClickedWithCoverImage:(UIImage *)arg1;
- (void)updateTheme;
@end

