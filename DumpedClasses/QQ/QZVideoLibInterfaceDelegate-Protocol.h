//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableURLRequest, NSString, QZVideoPlayerView, QzoneFeedModel, QzoneFeedVideo, UIImage, UITableViewCell, UIViewController, UIWindow;

@protocol QZVideoLibInterfaceDelegate <NSObject>
- (unsigned long long)appChannel;
- (_Bool)canShowVideoDebugInfo;
- (double)pgcVideoDisplayScaleRatio;
- (double)ugcVideoDisplayScaleRatio;
- (double)showNetworkChangeTipsTimeDelay;
- (double)showNetworkChangeTipsTimeInterval;
- (double)getVideoLayerShowAdvTipsDuration;
- (long long)currentNetworkType;
- (void)runRequest:(NSMutableURLRequest *)arg1 callBack:(void (^)(NSHTTPURLResponse *, NSError *))arg2;
- (long long)premovieLimitTime;
- (UIWindow *)getCurrentMainWindow;
- (long long)getNetworkApn;
- (NSString *)fileNameForVideoClientKey:(NSString *)arg1;
- (double)videoExitRatioThreshold;
- (long long)tsStallTimes;
- (long long)liveFeedWaitAutoPlayTime;
- (long long)liveFeedCanAutoPlay;
- (double)videoEnterRatioThreshold;
- (_Bool)goTo:(NSString *)arg1 withViewController:(UIViewController *)arg2;
- (void)showVideoFloatLayer:(QzoneFeedModel *)arg1 video:(QzoneFeedVideo *)arg2 fromRect:(struct CGRect)arg3 feedCoverImage:(UIImage *)arg4 controller:(UIViewController *)arg5 videoPlayerView:(QZVideoPlayerView *)arg6 cell:(UITableViewCell *)arg7;
- (_Bool)enableResourceLoader;
- (void)interactionWithLiveRoom:(NSString *)arg1 interactionType:(long long)arg2;
- (_Bool)isOpenAts;
- (void)getLiveRoomStatusWithRoomID:(NSString *)arg1 isHlsUrlSign:(_Bool)arg2 completionBlock:(void (^)(long long, NSString *, long long, _Bool, NSString *))arg3;
- (long long)getRecommVideoList:(QzoneFeedModel *)arg1 isMore:(_Bool)arg2 busiParam:(NSDictionary *)arg3 attachInfo:(NSString *)arg4 recommScence:(long long)arg5 requestModelsCount:(long long)arg6;
- (long long)pollLiveStatusTime;
- (_Bool)videoDisableSpeedLimit;
- (_Bool)disableClearCacheWhenError;
- (long long)maxErrorCountFor1005;
- (long long)retryCountInFailedStatus;
- (long long)videoLoadTimeout;
- (_Bool)networkCanAutoPlay;
@end

