//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, NSURLRequest, PSDContentView, PSDScene, PSDSceneParam, PSDSession, PSDView, UIViewController;

@protocol PSDViewControllerProtocol <NSObject>
- (void)callHandler:(NSString *)arg1 data:(id)arg2 callbackImmediatelyIfJSBridgeNotReady:(_Bool)arg3 responseCallback:(void (^)(id))arg4;
- (void)callHandler:(NSString *)arg1 data:(id)arg2 responseCallback:(void (^)(id))arg3;
- (UIViewController *)viewController;
- (PSDContentView *)psdContentView;
- (PSDView *)psdView;
- (PSDSession *)psdSession;
- (PSDScene *)psdScene;
- (void)initUI:(PSDView *)arg1 delegate:(id <PSDViewControllerDelegate>)arg2;
- (void)associateWeakScene:(PSDScene *)arg1 sceneParam:(PSDSceneParam *)arg2;

@optional
- (_Bool)shouldSkipHandleLoadWithRequest:(NSURLRequest *)arg1 navigationType:(long long)arg2;
- (NSString *)allJsInjectToJSC;
- (void)injectJsRelyOnAlipayJsBridge;
- (void)injectIndependenceJs;
- (NSArray *)relayOnAlipayJsBridgeUserScripts;
- (NSArray *)independenceUserScripts;
- (void)startFirstLoadRequest:(NSURL *)arg1;
- (NSString *)codeSnippets4InsertAlipayJsBridgeFile;
- (NSString *)startupParamsJs;
- (NSArray *)dynamicJsUrls;
@end

