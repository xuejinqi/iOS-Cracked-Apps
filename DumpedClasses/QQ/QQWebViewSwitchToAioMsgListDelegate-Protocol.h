//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIImage;

@protocol QQWebViewSwitchToAioMsgListDelegate <NSObject>

@optional
- (void)showHotDot:(_Bool)arg1;
- (NSString *)aioSwitchBannerTitle;
- (_Bool)isShowSwitchQQButton;
- (UIImage *)webViewSwitchQQButtonIcon;
- (NSString *)aioSwitchBannerIconName;
- (void)aioNotifyMessage:(NSDictionary *)arg1;
@end

