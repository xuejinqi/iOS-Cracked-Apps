//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class QZJNsBgVoiceLogicAppBGVoice;

@interface QZBgVoice : QzoneModel
{
}

+ (id)fromJceData:(id)arg1 wifiAutoPlay:(_Bool)arg2 playMode:(long long)arg3 loopType:(long long)arg4 uin:(long long)arg5;
+ (id)fromData:(id)arg1 wifiAutoPlay:(_Bool)arg2 playMode:(long long)arg3 loopType:(long long)arg4 uin:(long long)arg5;
- (id)qzBgAudioList;
- (_Bool)canPlay;

// Remaining properties
@property(retain, nonatomic) QZJNsBgVoiceLogicAppBGVoice *list; // @dynamic list;
@property(nonatomic) long long loopType; // @dynamic loopType;
@property(nonatomic) long long playMode; // @dynamic playMode;
@property(nonatomic) long long uin; // @dynamic uin;
@property(nonatomic) _Bool wifiAutoPlay; // @dynamic wifiAutoPlay;

@end

