//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PhotoNickEmotionView, QZFeedVideoLoadView, UIButton, UIImageView, UILabel;

@interface QZVideoStateView : UIView
{
    UILabel *_msgLabel;
    QZFeedVideoLoadView *_loadProgressView;
    UIView *_videoPlayCntView;
    UILabel *_playCountLabel;
    NSString *_networkTipsStr;
    PhotoNickEmotionView *_hotVideoSummaryView;
    UIView *_networkTipView;
    UIView *_netWorkTipsMaskView;
    UIImageView *_networkChangeImg;
    UILabel *_networkChangeTipLabel;
    UIButton *_networkChangeBtn;
    _Bool _playToEnd;
    _Bool _showDurationInView;
    _Bool _showLimitedVideoTips;
    _Bool _disableSoundIcon;
    _Bool _needNetworkChangeTip;
    _Bool _userInteraction;
    unsigned long long _state;
    double _duration;
    double _origDuration;
    double _canPlayDuration;
    double _currentTime;
    double _loadProgress;
    double _loadSpeed;
    id <QZVideoStateViewDelegate> _delegate;
    NSString *_failMsg;
    long long _errorCode;
    UIImageView *_playIcon;
    long long _videoPlayCnt;
    UIImageView *_playCountIcon;
    NSString *_customPlayIconName;
}

@property(retain, nonatomic) NSString *customPlayIconName; // @synthesize customPlayIconName=_customPlayIconName;
@property(retain, nonatomic) UIImageView *playCountIcon; // @synthesize playCountIcon=_playCountIcon;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(nonatomic) _Bool userInteraction; // @synthesize userInteraction=_userInteraction;
@property(nonatomic) _Bool needNetworkChangeTip; // @synthesize needNetworkChangeTip=_needNetworkChangeTip;
@property(nonatomic) long long videoPlayCnt; // @synthesize videoPlayCnt=_videoPlayCnt;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(nonatomic) _Bool disableSoundIcon; // @synthesize disableSoundIcon=_disableSoundIcon;
@property(nonatomic) _Bool showLimitedVideoTips; // @synthesize showLimitedVideoTips=_showLimitedVideoTips;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *failMsg; // @synthesize failMsg=_failMsg;
@property(nonatomic) __weak id <QZVideoStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showDurationInView; // @synthesize showDurationInView=_showDurationInView;
@property(nonatomic) double loadSpeed; // @synthesize loadSpeed=_loadSpeed;
@property(nonatomic) _Bool playToEnd; // @synthesize playToEnd=_playToEnd;
@property(nonatomic) double loadProgress; // @synthesize loadProgress=_loadProgress;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double canPlayDuration; // @synthesize canPlayDuration=_canPlayDuration;
@property(nonatomic) double origDuration; // @synthesize origDuration=_origDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)showVideoPlayCnt:(long long)arg1;
- (void)showHotVideoSummaryView:(id)arg1;
- (void)summaryDisappearAnimation;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)actionTypeWithPoint:(struct CGPoint)arg1;
- (void)reset;
- (void)setMsgLabelHidden:(_Bool)arg1;
- (void)setLoadProgressHidden:(_Bool)arg1;
- (void)layoutNetworkChangeViews:(struct CGSize)arg1;
- (double)formatVideoSizeString:(double)arg1;
- (void)showVideoFullCachedTipInNetWorkChange:(struct CGSize)arg1;
- (_Bool)isVideoFullCachedInNetworkChange;
- (id)getNetWorkTips;
- (void)showNetworkChangeTip:(_Bool)arg1;
- (void)onNetworkBtnClick;
- (void)showPlayIcon:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setPlayIconHidden:(_Bool)arg1;

@end

