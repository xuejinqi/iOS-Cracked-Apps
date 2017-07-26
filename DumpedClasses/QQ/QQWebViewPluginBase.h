//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQWebViewPluginProtocol.h"

@class NSString, QQWebViewController;

@interface QQWebViewPluginBase : NSObject <IQQWebViewPluginProtocol>
{
    QQWebViewController *_webViewController;
}

@property(nonatomic) __weak QQWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (_Bool)handleEvent:(int)arg1 userInfo:(id)arg2;
- (_Bool)handleSchemaRequest:(id)arg1 schema:(id)arg2;
- (_Bool)handleJsRequest:(id)arg1 module:(id)arg2 method:(id)arg3 query:(id)arg4;
- (void)setWebViewOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

