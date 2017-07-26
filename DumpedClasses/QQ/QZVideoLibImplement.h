//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZVideoLibInterfaceDelegate.h"
#import "QZVideoLibReportInterfaceDelegate.h"

@class NSString;

@interface QZVideoLibImplement : NSObject <QZVideoLibInterfaceDelegate, QZVideoLibReportInterfaceDelegate>
{
}

+ (id)sharedInstance;
- (unsigned long long)appChannel;
- (_Bool)canShowVideoDebugInfo;
- (double)pgcVideoDisplayScaleRatio;
- (double)ugcVideoDisplayScaleRatio;
- (void)runRequest:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (double)getVideoLayerShowAdvTipsDuration;
- (long long)currentNetworkType;
- (long long)premovieLimitTime;
- (id)getCurrentMainWindow;
- (long long)getNetworkApn;
- (id)imageWithURL:(id)arg1;
- (void)reportCompassData:(long long)arg1 uin:(long long)arg2 touin:(long long)arg3 firstAction:(long long)arg4 secondAction:(long long)arg5 thridAction:(long long)arg6 info:(id)arg7 readSource:(id)arg8 refer:(id)arg9 appid:(long long)arg10 externDict:(id)arg11;
- (void)reportGDTVideoExposed:(id)arg1 index:(long long)arg2 isPremovieVideo:(_Bool)arg3 cookie:(id)arg4;
- (void)reportVideoPlayed:(id)arg1 param:(id)arg2;
- (id)fileNameForVideoClientKey:(id)arg1;
- (double)videoExitRatioThreshold;
- (long long)tsStallTimes;
- (long long)liveFeedWaitAutoPlayTime;
- (long long)liveFeedCanAutoPlay;
- (double)videoEnterRatioThreshold;
- (_Bool)goTo:(id)arg1 withViewController:(id)arg2;
- (_Bool)disableClearCacheWhenError;
- (long long)maxErrorCountFor1005;
- (long long)retryCountInFailedStatus;
- (_Bool)userInPlayErrorWhiteList;
- (double)showNetworkChangeTipsTimeDelay;
- (double)showNetworkChangeTipsTimeInterval;
- (void)showVideoFloatLayer:(id)arg1 video:(id)arg2 fromRect:(struct CGRect)arg3 feedCoverImage:(id)arg4 controller:(id)arg5 videoPlayerView:(id)arg6 cell:(id)arg7;
- (_Bool)enableResourceLoader;
- (void)interactionWithLiveRoom:(id)arg1 interactionType:(long long)arg2;
- (_Bool)isOpenAts;
- (void)getLiveRoomStatusWithRoomID:(id)arg1 isHlsUrlSign:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (long long)getRecommVideoList:(id)arg1 isMore:(_Bool)arg2 busiParam:(id)arg3 attachInfo:(id)arg4 recommScence:(long long)arg5 requestModelsCount:(long long)arg6;
- (_Bool)requestQQAudioDevice;
- (_Bool)videoIsInQQAudioChat;
- (_Bool)videoDisableSpeedLimit;
- (_Bool)enableVideoAts;
- (long long)pollLiveStatusTime;
- (long long)videoLoadTimeout;
- (_Bool)networkCanAutoPlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

