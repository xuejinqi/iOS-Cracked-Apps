//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "MulMemSelBusiProcessDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UISegmentViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CFT_RedGiftView, NSMutableDictionary, NSString, UIImage, UIView;

@interface CFT_FF14467 : CFT_UICustomNaviBarViewController <UISegmentViewDelegate, MulMemSelBusiProcessDelegate, UITextFieldDelegate, UIScrollViewDelegate>
{
    int _redgiftType;
    _Bool _memoTextToChange;
    unsigned long long _lastMemoTextLength;
    _Bool _navbarReloaded;
    _Bool _isOne2One;
    _Bool _conf_show_vipshop;
    _Bool _isTmpChat;
    _Bool _isLbsAr;
    NSMutableDictionary *_RedGiftparam;
    NSString *_comefrom;
    NSString *_uin;
    NSString *_skey;
    NSString *_skey_type;
    NSString *_appinfo;
    NSString *_nick;
    UIImage *_superviewNaviBgImage;
    NSString *_hideWishing;
    CFT_RedGiftView *_normalView;
    CFT_RedGiftView *_randomView;
    CFT_RedGiftView *_commandView;
    CFT_RedGiftView *_one2oneView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CFT_RedGiftView *one2oneView; // @synthesize one2oneView=_one2oneView;
@property(retain, nonatomic) CFT_RedGiftView *commandView; // @synthesize commandView=_commandView;
@property(retain, nonatomic) CFT_RedGiftView *randomView; // @synthesize randomView=_randomView;
@property(retain, nonatomic) CFT_RedGiftView *normalView; // @synthesize normalView=_normalView;
@property(retain, nonatomic) NSString *hideWishing; // @synthesize hideWishing=_hideWishing;
@property(retain, nonatomic) UIImage *superviewNaviBgImage; // @synthesize superviewNaviBgImage=_superviewNaviBgImage;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *appinfo; // @synthesize appinfo=_appinfo;
@property(retain, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
@property(retain, nonatomic) NSMutableDictionary *RedGiftparam; // @synthesize RedGiftparam=_RedGiftparam;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)dealloc;
- (void)changeProcessFlag:(_Bool)arg1;
- (void)selectOrientedMemberClick:(id)arg1;
- (void)changeToOrientedRedgiftClick:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)qpay_hb_pack;
- (void)qpay_hb_zone_pack;
- (void)nextStep:(id)arg1;
- (void)changeNextBtnEnable:(_Bool)arg1;
- (double)redgiftTotalMoney;
- (int)redgiftTotalNum:(id)arg1;
- (int)redgiftTotalNum;
- (id)redgiftChannel;
- (void)resetNextButtonState;
- (void)textFieldDidChange:(id)arg1;
- (void)textFiledReturnEditing:(id)arg1;
- (id)getRedGiftViewByType:(int)arg1;
- (id)currentRedGiftView;
- (void)rightButtonClick:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)segmentSelectionChange:(id)arg1 selection:(long long)arg2;
- (void)resetRedGiftViewFileldFromState:(int)arg1 ToState:(int)arg2;
- (void)resetControlContentState;
- (void)controlBecomeFirstResponder;
- (void)updateHuanFuBtn;
- (void)showHuanFuPreview;
- (void)onPersonalRedbagDownloadSuccess;
- (void)updateHuanFuPreviewWithColor:(id)arg1 img:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

