//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVKLitePlaybackDelegate.h"

@class CALayer, NSString, NSURL, TVKLitePlayer, UIImageView, UILabel, UIView;

@interface QQDynamicAvatarSelectViewController : UIViewController <TVKLitePlaybackDelegate>
{
    NSURL *_videoUrl;
    double _videoDuration;
    double _slideBeginX;
    CALayer *_maskLayer;
    _Bool _hasSetupBottomView;
    _Bool _isTouchBegan;
    _Bool _isTouchEnded;
    _Bool _needRecoverToSmall;
    _Bool _isManualPick;
    _Bool _isSlideReported;
    id <QQDynamicAvatarSelectViewDelegate> _delegate;
    unsigned long long _entryType;
    TVKLitePlayer *_videoPlayer;
    UIImageView *_videoScreenShotView;
    UIView *_bottomView;
    UIImageView *_slideView;
    UILabel *_promptLabel;
    UIImageView *_phoneImageView;
}

@property(nonatomic) _Bool isSlideReported; // @synthesize isSlideReported=_isSlideReported;
@property(nonatomic) _Bool isManualPick; // @synthesize isManualPick=_isManualPick;
@property(nonatomic) _Bool needRecoverToSmall; // @synthesize needRecoverToSmall=_needRecoverToSmall;
@property(nonatomic) _Bool isTouchEnded; // @synthesize isTouchEnded=_isTouchEnded;
@property(nonatomic) _Bool isTouchBegan; // @synthesize isTouchBegan=_isTouchBegan;
@property(retain, nonatomic) UIImageView *phoneImageView; // @synthesize phoneImageView=_phoneImageView;
@property(nonatomic) _Bool hasSetupBottomView; // @synthesize hasSetupBottomView=_hasSetupBottomView;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UIImageView *slideView; // @synthesize slideView=_slideView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *videoScreenShotView; // @synthesize videoScreenShotView=_videoScreenShotView;
@property(retain, nonatomic) TVKLitePlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property(nonatomic) __weak id <QQDynamicAvatarSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isIphone4SAbove;
- (void)recoverScreenShotView;
- (void)changeScreenShotSizeToSmall:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)seekToSlidePositionX:(double)arg1;
- (id)getVideoSnapshotForNumber:(int)arg1;
- (void)setupBottomView;
- (void)highLightSlideView:(_Bool)arg1;
- (void)mediaPlayer:(id)arg1 canGetScreenShot:(_Bool)arg2;
- (_Bool)isNetworkAvailableNow;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onCompleteClicked:(id)arg1;
- (void)onBackClicked:(id)arg1;
- (void)createNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)onAppBecomeActive:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithVideoUrl:(id)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

