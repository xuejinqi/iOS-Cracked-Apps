//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

@class JSContext, UIWebView;

@interface QQMedalWallWebViewController : QQWebViewController
{
    JSContext *_context;
    UIWebView *_currentWebView;
}

@property(retain, nonatomic) UIWebView *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (int)entranceCode;
- (id)initWithUIN:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool appInBackground;

@end

