//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, QZCanvasVideoView;

@protocol QZCanvasVideoViewDelegate <NSObject>

@optional
- (void)notifyBottomVideoToolHiddenState:(_Bool)arg1 videoView:(QZCanvasVideoView *)arg2;
- (void)reportVideoPlayerAction:(NSDictionary *)arg1;
@end

