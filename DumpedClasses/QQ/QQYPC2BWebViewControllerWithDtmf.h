//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQYPC2BWebViewController.h"

@class NSString;

@interface QQYPC2BWebViewControllerWithDtmf : QQYPC2BWebViewController
{
    NSString *_backDtmf;
    _Bool _isNeedReloadOnAppeared;
    _Bool _postGotoArtificialNotifyOnReturn;
}

@property(copy, nonatomic) NSString *backDtmf; // @synthesize backDtmf=_backDtmf;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWith:(id)arg1 forStyle:(long long)arg2;

@end

