//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseRichViewController.h"

#import "CAAnimationDelegate.h"
#import "TPADViewDelegate.h"
#import "TPAlertDialogDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CFT_TPADView, CFT_TPAlertDialog, CFT_UIRedGiftView, NSDictionary, NSMutableDictionary, NSString;

@interface CFT_FF23927 : CFT_UIBaseRichViewController <TPAlertDialogDelegate, TPADViewDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, CAAnimationDelegate, UIScrollViewDelegate>
{
    _Bool _isClosing;
    id _preNavigationControllerDelegate;
    _Bool _forbidRightDragGoBack;
    _Bool _isThemeRedGift;
    int _status;
    NSMutableDictionary *_RedGiftparam;
    NSString *_uin;
    NSString *_skey;
    NSString *_skey_type;
    NSString *_listid;
    NSString *_nick;
    NSString *_answer;
    NSString *_appinfo;
    NSString *_comefrom;
    NSString *_groupid;
    NSString *_groupuin;
    NSString *_grouptype;
    NSString *_authkey;
    NSString *_themeImgUrl;
    NSString *_channel;
    NSString *_qrdata;
    NSString *_redSendUin;
    NSString *_redSendNick;
    id <UITPStartingDelegate> _delegate;
    NSMutableDictionary *_animationDict;
    NSString *_send_name;
    NSString *_send_uin;
    NSString *_bus_type;
    NSString *_hbskey;
    NSString *_amount;
    NSMutableDictionary *_detailDict;
    CFT_TPADView *_adView;
    NSDictionary *_adContent;
    CFT_UIRedGiftView *_redGiftView;
    CFT_TPAlertDialog *_alertDlg;
}

@property(retain, nonatomic) CFT_TPAlertDialog *alertDlg; // @synthesize alertDlg=_alertDlg;
@property(nonatomic) _Bool isThemeRedGift; // @synthesize isThemeRedGift=_isThemeRedGift;
@property(retain, nonatomic) CFT_UIRedGiftView *redGiftView; // @synthesize redGiftView=_redGiftView;
@property(retain, nonatomic) NSDictionary *adContent; // @synthesize adContent=_adContent;
@property(retain, nonatomic) CFT_TPADView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) NSMutableDictionary *detailDict; // @synthesize detailDict=_detailDict;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *hbskey; // @synthesize hbskey=_hbskey;
@property(retain, nonatomic) NSString *bus_type; // @synthesize bus_type=_bus_type;
@property(retain, nonatomic) NSString *send_uin; // @synthesize send_uin=_send_uin;
@property(retain, nonatomic) NSString *send_name; // @synthesize send_name=_send_name;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableDictionary *animationDict; // @synthesize animationDict=_animationDict;
@property(nonatomic) _Bool forbidRightDragGoBack; // @synthesize forbidRightDragGoBack=_forbidRightDragGoBack;
@property(nonatomic) id <UITPStartingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *redSendNick; // @synthesize redSendNick=_redSendNick;
@property(retain, nonatomic) NSString *redSendUin; // @synthesize redSendUin=_redSendUin;
@property(retain, nonatomic) NSString *qrdata; // @synthesize qrdata=_qrdata;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *themeImgUrl; // @synthesize themeImgUrl=_themeImgUrl;
@property(retain, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(retain, nonatomic) NSString *grouptype; // @synthesize grouptype=_grouptype;
@property(retain, nonatomic) NSString *groupuin; // @synthesize groupuin=_groupuin;
@property(retain, nonatomic) NSString *groupid; // @synthesize groupid=_groupid;
@property(retain, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
@property(retain, nonatomic) NSString *appinfo; // @synthesize appinfo=_appinfo;
@property(retain, nonatomic) NSString *answer; // @synthesize answer=_answer;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *listid; // @synthesize listid=_listid;
@property(retain, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSMutableDictionary *RedGiftparam; // @synthesize RedGiftparam=_RedGiftparam;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTPADViewClick:(id)arg1;
- (void)alertDialog:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)onBackgroundTapped;
- (void)onSelfViewTap:(id)arg1;
- (void)showWebPage:(id)arg1 title:(id)arg2;
- (void)sendHongbaoBackButtonClick:(id)arg1;
- (void)showDetailViewController;
- (id)buildDetailViewController;
- (void)qpay_hb_qr_grab;
- (void)qpay_hb_zone_grab;
- (void)showEntepriseBigview;
- (void)mch_redGiftview:(id)arg1;
- (void)qpay_hb_na_mch_grap;
- (void)qpay_hb_na_grap;
- (void)handleTopAdClick:(id)arg1;
- (void)detailButtonClick:(id)arg1;
- (void)sendHongbaoButtonClick:(id)arg1;
- (void)closeButtonClick:(id)arg1;
- (void)qwallet;
- (void)tapMoneyLabel:(id)arg1;
- (void)closeGrapView;
- (void)reqQWalletFor:(int)arg1;
- (void)showFakeRedParam:(id)arg1;
- (void)requestData;
- (void)dealloc;
- (void)layoutSubviewsOnView;
- (void)loadADView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onRightButtonClick:(id)arg1;
- (void)rightDragToBack;
- (void)leftButtonClick:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

