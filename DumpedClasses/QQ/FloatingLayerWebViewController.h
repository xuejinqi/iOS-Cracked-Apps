//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

@class NSString, UIButton, UIControl, UIView;

@interface FloatingLayerWebViewController : QQWebViewController
{
    unsigned long long puin;
    UIControl *flayerView;
    UIButton *fllowButton;
    UIView *markBgView;
    float lastContentOffset;
    NSString *nickName;
}

@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) unsigned long long puin; // @synthesize puin;
- (void)reporetDataWithTvalue:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)removeFlayerViewAnimationDidStop;
- (void)removeFlayerViewAnimation;
- (void)showFlayerViewAnimation;
- (void)ResponseHandleForSetUnFollow:(id)arg1;
- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (void)entryCard;
- (void)followButtonClick;
- (void)preFollowButtonClick;
- (void)onDeleteLayer:(id)arg1;
- (void)loadView;
- (id)initWith:(id)arg1 andModel:(id)arg2 forStyle:(long long)arg3;
- (id)initWith:(id)arg1 forStyle:(long long)arg2;
- (void)initFloatParme:(id)arg1;
- (Class)getQQWebViewClass;
- (_Bool)isFollow;
- (void)drawFllowView;
- (void)drawNickView;
- (void)drawHeadView;
- (void)dealloc;

@end

