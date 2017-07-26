//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQAvatarView, ReadInjoyAsynImageView, UIButton, UIColor, UIImage, UIImageView, UILabel;

@interface QQReadInJoyContentNotifyControl : UIView
{
    UIButton *_notifyBtn;
    UILabel *_lable;
    UIImageView *_triangleView;
    UIImageView *_iconView;
    struct CGRect _contentRect;
    struct CGRect _showRect;
    UIImageView *_bgImageView;
    QQAvatarView *_avatarView;
    ReadInjoyAsynImageView *_asynImgVu;
    _Bool _bNotifyShow;
    int _notifyID;
    UIColor *_textColor;
    NSString *_title;
    UIImage *_icon;
    double _origY;
    id <QQReadInJoyTipsDelegate> _delegate;
    long long _notifyMode;
    long long _notifyReason;
    NSString *_uin;
    NSString *_iconUrl;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) long long notifyReason; // @synthesize notifyReason=_notifyReason;
@property(nonatomic) long long notifyMode; // @synthesize notifyMode=_notifyMode;
@property(nonatomic) id <QQReadInJoyTipsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double origY; // @synthesize origY=_origY;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool bNotifyShow; // @synthesize bNotifyShow=_bNotifyShow;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int notifyID; // @synthesize notifyID=_notifyID;
- (void)dealloc;
- (struct CGRect)getNotifySize;
- (void)close;
- (void)close:(double)arg1;
- (_Bool)isShow;
- (void)setHidden;
- (void)popUp;
- (void)touchUpButton;
- (void)touchDownButton;
- (void)setSkinColor;
- (void)clickButton;
- (struct CGRect)getTotalRectAndLayoutView;
- (struct CGRect)getTotalRectAndLayoutViewInSocialMode;
- (struct CGRect)getTotalRectAndLayoutViewInDefaultMode;
- (id)initWithFrame:(struct CGRect)arg1;

@end

