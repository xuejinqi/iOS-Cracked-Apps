//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QZMusicInfoRequestManager : NSObject
{
    NSMutableArray *cacheMusicInfoArray;
    _Bool _isRequesting;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)clearMusicInfoArrayCache;
- (void)saveMusicInfoArrayInBackground:(id)arg1;
- (id)getCacheMusicInfoArray;
- (void)ApplicationEnterBackground;
- (long long)requestMusicDetailInfo:(id)arg1;
- (long long)requestSetMusicSetting:(long long)arg1 value:(long long)arg2;
- (long long)requestAllBgVoiceList:(long long)arg1;
- (void)addMusicInfoToCacheArray:(id)arg1;
- (void)addMusicInfoArrayToCacheArray:(id)arg1;
- (id)getMusicDetailInfoBy:(id)arg1;
- (id)init;

@end

