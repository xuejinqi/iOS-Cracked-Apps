//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoPlayerState.h"

@interface PlayingState : VideoPlayerState
{
    _Bool _isInterrupted;
}

@property(nonatomic) _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
- (void)seekEnd;
- (void)seek:(CDStruct_1b6d18a9)arg1;
- (void)resume;
- (void)interupt;
- (void)pause;
- (void)stop;
- (void)play;
- (void)setIdentifier:(id)arg1;
- (id)initWithPlayer:(id)arg1;

@end

