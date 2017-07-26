//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKMediaPlayer, NSError, TVKAsynMediaPlayer;

@protocol KKMediaPlayerDelegate <NSObject>
- (void)mediaPlayerStateNotify:(KKMediaPlayer *)arg1 withState:(long long)arg2 withError:(NSError *)arg3 withFileCacheOrder:(long long)arg4 withIsCurrentFile:(_Bool)arg5;
- (void)mediaPlayerCheckMediaUrlError:(TVKAsynMediaPlayer *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerRequestStateChange:(TVKAsynMediaPlayer *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerPlaybackDidFinish:(TVKAsynMediaPlayer *)arg1;
- (void)mediaPlayerPlaybackStateDidChange:(TVKAsynMediaPlayer *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerLoadStateDidChange:(TVKAsynMediaPlayer *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerNaturalSizeAvailable:(TVKAsynMediaPlayer *)arg1;
- (_Bool)isNetworkAvaliable;

@optional
- (_Bool)cancelAssetLoading;
- (void)mediaPlayerDidExitFullscreen:(TVKAsynMediaPlayer *)arg1;
- (void)mediaPlayerDidEnterFullscreen:(TVKAsynMediaPlayer *)arg1;
@end

