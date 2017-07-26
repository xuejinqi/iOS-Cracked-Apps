//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PagingScrollViewItem.h"

@class NSString, QQActivateFriendsNotifyMemorialDayModel, QQAvatarView, UIButton, UIColor, UIImageView, UILabel, UIView, UIViewController;

@interface QQActivateFriendsMemorialDayView : PagingScrollViewItem
{
    id <QQActivateFriendsMemorialDayViewDelegate> _memorialDayDelegate;
    UIView *_backgroundView;
    UIImageView *_imgBanner;
    NSString *_imgBannerName;
    UILabel *_dateLabel;
    QQAvatarView *_myHeadView;
    QQAvatarView *_friendHeadView;
    UIImageView *_myHeadViewBg;
    UIImageView *_friendHeadViewBg;
    UILabel *_myNick;
    UILabel *_friendNick;
    UILabel *_yearTimeLabel;
    UILabel *_bothNickLabel;
    UILabel *_eventLabel;
    UILabel *_eventTimeLabel;
    UILabel *_dayTimeLabel;
    UILabel *_dayTipsLabel;
    UIButton *_checkButton;
    UIButton *_sharedButton;
    unsigned int _friendGender;
    UIColor *_dateColor;
    UIColor *_headImgBgColor;
    NSString *_memorialTips;
    UILabel *_pushTimeLabel;
    double _pushTime;
    UIViewController *_parentVC;
    QQActivateFriendsNotifyMemorialDayModel *_memorialModel;
}

@property(retain, nonatomic) QQActivateFriendsNotifyMemorialDayModel *memorialModel; // @synthesize memorialModel=_memorialModel;
@property(nonatomic) __weak id <QQActivateFriendsMemorialDayViewDelegate> memorialDayDelegate; // @synthesize memorialDayDelegate=_memorialDayDelegate;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)onPresentSendingBtnShared:(id)arg1;
- (void)onPresentSendingBtnCheck:(id)arg1;
- (void)loadWithMemorialModel:(id)arg1;
- (long long)handleYearWithTime:(id)arg1;
- (id)handleTime:(id)arg1 isDay:(_Bool)arg2;
- (unsigned long long)getDayWithTime:(double)arg1;
- (void)layoutSubviews;
- (void)loadPushTimeLabel;
- (void)loadContentView;
- (void)loadMemorialType:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2 memorialType:(int)arg3 friendGender:(unsigned int)arg4;

@end

