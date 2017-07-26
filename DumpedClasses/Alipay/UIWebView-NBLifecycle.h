//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

#import "NBContentViewProtocol.h"

@class NSString, NSURLRequest, PSDContentViewConfiguration, UIScrollView, UIView, UIWindow;

@interface UIWebView (NBLifecycle) <NBContentViewProtocol>
+ (void)load;
- (void)psdDidCreateJavaScriptContext:(id)arg1;
- (void)contentViewDidClose;
- (void)contentViewDidResume;
- (void)contentViewDidPause;
- (void)contentViewDidLoad;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <PSDContentViewDelegate> psdContentViewDelegate;
@property(retain, nonatomic) PSDContentViewConfiguration *psdConfiguration;
@property(nonatomic) __weak id <PSDViewControllerProtocol> psdViewController;
@property(copy, nonatomic) NSString *nbl_id;
@property(copy, nonatomic) NSString *channelId;
@property(readonly, nonatomic) __weak UIView *view;
- (void)handleEvent:(id)arg1;
- (id)name;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)reportConnectionProfile:(id)arg1;
- (void)changeContentHeightTest;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)shouldSkipHandleLoad;
- (void)setShouldSkipHandleLoad:(_Bool)arg1;
- (id)pushingURLString;
- (void)setPushingURLString:(id)arg1;
- (void)setIsPagePaused:(_Bool)arg1;
- (_Bool)isPagePaused;
- (void)setIsKVOObserved:(_Bool)arg1;
- (_Bool)isKVOObserved;
- (_Bool)isInited;
- (void)setIsInited:(_Bool)arg1;
- (int)requestingCount;
- (void)setRequestingCount:(int)arg1;
- (double)oldScrollViewContentHeight;
- (void)setOldScrollViewContentHeight:(double)arg1;
- (id)webPageProfile;
- (void)setWebPageProfile:(id)arg1;
- (id)createDate;
- (void)setCreateDate:(id)arg1;
- (id)nextRequest;
- (void)setNextRequest:(id)arg1;
- (long long)nextNavigationType;
- (void)setNextNavigationType:(long long)arg1;
@property(nonatomic) __weak id <NBContentViewPageDelegate> pageDelegate;
- (id)assignedDelegate;
- (void)setAssignedDelegate:(id)arg1;
@property(nonatomic) __weak id delegate;
- (void)didMoveToSuperview_Lifecycle;
- (void)willMoveToSuperview_Lifecycle:(id)arg1;
- (void)setFrame_Lifecycle:(struct CGRect)arg1;
- (void)setDelegate_Lifecycle:(id)arg1;
- (void)report:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)monitor:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)commitInit;

// Remaining properties
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(nonatomic) unsigned long long autoresizingMask;
@property(readonly, nonatomic) _Bool canGoBack;
@property(nonatomic) unsigned long long dataDetectorTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool detectsPhoneNumbers;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isLoading;
@property(nonatomic) __weak id <PSDContentViewNavigationDelegate> psdContentViewNavigationDelegate;
@property(nonatomic) __weak id <PSDContentViewUIDelegate> psdContentViewUIDelegate;
@property(nonatomic) __weak id <PSDExternalWebViewDelegate> psdExternalWebViewDelegate;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool scalesPageToFit;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIWindow *window;
@end

