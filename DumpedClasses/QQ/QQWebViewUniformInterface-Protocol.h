//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSURLRequest, UIScrollView, WKWebViewConfiguration;

@protocol QQWebViewUniformInterface <NSObject>
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *customUserAgent;
@property(readonly, copy, nonatomic) WKWebViewConfiguration *configuration;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) _Bool canGoForward;
@property(readonly, nonatomic) _Bool canGoBack;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) unsigned long long dataDetectorTypes;
@property(nonatomic) _Bool keyboardDisplayRequiresUserAction;
@property(nonatomic) _Bool scalesPageToFit;

@optional
- (void)loadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)evaluateJavaScript:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (NSString *)stringByEvaluatingJavaScriptFromString:(NSString *)arg1;
- (void)goForward;
- (void)goBack;
- (void)reload;
- (void)stopLoading;
- (void)loadRequest:(NSURLRequest *)arg1;
@end

