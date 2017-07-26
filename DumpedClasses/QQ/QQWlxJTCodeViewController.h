//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWlxBaseViewController.h"

#import "CitySelectProtocol.h"
#import "DialogUtilsProtocol.h"
#import "QQWlxNetWorkRequestDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQWlxCardCert, QQWlxCardView, QQWlxCityConfig, QQWlxCustomButton, QQWlxScrollLabelView, QQWlxTipsView;

@interface QQWlxJTCodeViewController : QQWlxBaseViewController <UIAlertViewDelegate, DialogUtilsProtocol, CitySelectProtocol, QQWlxNetWorkRequestDelegate>
{
    _Bool notFirstComing;
    double screenLight;
    NSString *currentPage;
    NSString *ptoken_params;
    NSDictionary *_rootParams;
    NSDictionary *_whiteListCities;
    QQWlxCityConfig *_curCity;
    NSMutableDictionary *_cacheDict;
    NSMutableArray *_cardCertArray;
    QQWlxCardCert *_curCardCert;
    QQWlxCardView *_cardView;
    QQWlxTipsView *_tipsView;
    QQWlxScrollLabelView *_noticeView;
    QQWlxCustomButton *_btnRefresh;
    NSTimer *_timer;
}

@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) QQWlxCustomButton *btnRefresh; // @synthesize btnRefresh=_btnRefresh;
@property(nonatomic) QQWlxScrollLabelView *noticeView; // @synthesize noticeView=_noticeView;
@property(nonatomic) QQWlxTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) QQWlxCardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) QQWlxCardCert *curCardCert; // @synthesize curCardCert=_curCardCert;
@property(retain, nonatomic) NSMutableArray *cardCertArray; // @synthesize cardCertArray=_cardCertArray;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(nonatomic) QQWlxCityConfig *curCity; // @synthesize curCity=_curCity;
@property(retain, nonatomic) NSDictionary *whiteListCities; // @synthesize whiteListCities=_whiteListCities;
@property(copy, nonatomic) NSDictionary *rootParams; // @synthesize rootParams=_rootParams;
- (id)createTpWLXOpenProxy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

