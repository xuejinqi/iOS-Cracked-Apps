//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface QZVideoCommon : NSObject
{
    UIView *_tipIsSetVideoPlayOnWifiView;
    _Bool _isShowedTip;
}

+ (void)reportVideoPlayOnWifiToPf00064:(id)arg1 firstAction:(long long)arg2 secondAction:(long long)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)canShowVideoDebugInfo;
- (void)setCanShowVideoDebugInfo:(_Bool)arg1;
- (void)showTipIsSetVideoPlayOnWifi:(id)arg1 videoView:(id)arg2;
- (_Bool)canShowTipIsSetVideoPlayOnWifi:(id)arg1;
- (void)hideTipIsSetVideoPlayOnwifi;

@end

