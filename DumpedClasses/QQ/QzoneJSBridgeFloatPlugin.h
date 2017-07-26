//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "IQZUrlDownloaderDelegate.h"

@class NSString, QZFloatItemInfo;

@interface QzoneJSBridgeFloatPlugin : QQWebViewPluginQQBizBase <IQZUrlDownloaderDelegate>
{
    QZFloatItemInfo *_floatItem;
}

@property(retain, nonatomic) QZFloatItemInfo *floatItem; // @synthesize floatItem=_floatItem;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1;
- (void)previewFloatView;
- (void)getFloatItemFromQuery:(id)arg1;
- (void)handleJsBridgeRequest_QzFloat_setFloat:(id)arg1;
- (void)handleJsBridgeRequest_QzFloat_downloadFloat:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

