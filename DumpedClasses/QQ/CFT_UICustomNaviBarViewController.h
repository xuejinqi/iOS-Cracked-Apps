//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIHttpViewController.h"

@class NSString;

@interface CFT_UICustomNaviBarViewController : CFT_UIHttpViewController
{
    _Bool _forceOffline;
    _Bool _notifyQuitWallet;
    NSString *_reportBtnEnable;
    NSString *_reportBtnDisable;
}

@property(retain, nonatomic) NSString *reportBtnDisable; // @synthesize reportBtnDisable=_reportBtnDisable;
@property(retain, nonatomic) NSString *reportBtnEnable; // @synthesize reportBtnEnable=_reportBtnEnable;
- (void)popAcceptance:(id)arg1;
- (void)addSafeTipsOn:(id)arg1 withBottonHeight:(int)arg2;
- (void)dailNumber:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

