//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QZBgAudio, UIAlertView;

@interface QZBgAudioManager : NSObject
{
    NSArray *_audioList;
    NSArray *_randomAudioList;
    long long _audioListUin;
    long long _audioListIndex;
    _Bool _audioListIsPaused;
    NSArray *_tempList;
    long long _tempListIndex;
    _Bool _isPauseByMoviePlayer;
    _Bool _allowPlayList;
    _Bool _allowPlayOne;
    UIAlertView *_dataAlert;
    id <QZBgAudioPlayer> _player;
    long long _expLastState;
    long long _playerStatus;
    long long _listType;
    NSArray *_currentAudioList;
    long long _currentUin;
    long long _currentIndex;
    QZBgAudio *_currentAudio;
    QZBgAudio *_playingAudio;
    NSString *_playingUrl;
    long long _playMode;
    long long _loopType;
}

+ (void)appStop;
+ (void)appResume;
+ (void)appPause;
+ (id)appPlayingAudio;
+ (long long)appListType;
+ (long long)appPlayerStatus;
+ (id)instance;
@property(nonatomic) long long loopType; // @synthesize loopType=_loopType;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(readonly, nonatomic) NSString *playingUrl; // @synthesize playingUrl=_playingUrl;
@property(readonly, nonatomic) QZBgAudio *playingAudio; // @synthesize playingAudio=_playingAudio;
@property(readonly, nonatomic) QZBgAudio *currentAudio; // @synthesize currentAudio=_currentAudio;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) long long currentUin; // @synthesize currentUin=_currentUin;
@property(readonly, nonatomic) NSArray *currentAudioList; // @synthesize currentAudioList=_currentAudioList;
@property(readonly, nonatomic) long long listType; // @synthesize listType=_listType;
@property(readonly, nonatomic) long long playerStatus; // @synthesize playerStatus=_playerStatus;
- (void).cxx_destruct;

@end

