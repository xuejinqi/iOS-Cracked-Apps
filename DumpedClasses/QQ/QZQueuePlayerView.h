//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVQueuePlayer, NSArray, NSMutableDictionary, NSString;

@interface QZQueuePlayerView : UIView
{
    NSArray *_urls;
    _Bool _mute;
    _Bool _cycle;
    NSString *_fillMode;
    unsigned long long _angle;
    _Bool _autoStopWhenResigned;
    id <QZQueuePlayerViewDelegate> _delegate;
    int _xo;
    AVQueuePlayer *_player;
    _Bool _isMemoryClear;
    double _timestamp;
    NSMutableDictionary *_playItemsTimeBaseline;
    NSArray *_playerItems;
}

+ (Class)layerClass;
@property(copy, nonatomic) NSArray *playerItems; // @synthesize playerItems=_playerItems;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)didReceviedMemoryWarning:(id)arg1;
- (void)willEnterBackground:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)willBecomeActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)appendPlayerItemIfNeeded;
- (void)onAVPlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)calculatePlayItemsBaselineAndTotalTime;
- (id)playerItemsToPreload;
- (void)preparePlayerItems;
@property(nonatomic) _Bool mute; // @dynamic mute;
- (void)reloadItems;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)currentPlayItemTime;
- (void)shutdown;
- (_Bool)prepareToPlay;
- (_Bool)isPlaying;
@property(readonly, nonatomic) _Bool isRunning;
- (void)stop;
- (void)pause;
- (void)play;
@property(retain, nonatomic) NSString *fillMode; // @dynamic fillMode;
- (void)dealloc;
- (void)setPlayer:(id)arg1;
- (id)playerLayer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned long long angle; // @dynamic angle;
@property(nonatomic) _Bool autoStopWhenResigned; // @dynamic autoStopWhenResigned;
@property(nonatomic) _Bool cycle; // @dynamic cycle;
@property(nonatomic) __weak id <QZQueuePlayerViewDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) NSArray *urls; // @dynamic urls;

@end

