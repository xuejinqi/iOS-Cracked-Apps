//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioRouteChangeProtocol.h"

@class NSMutableSet, NSString;

@interface QQAudioSessionManager : NSObject <AudioRouteChangeProtocol>
{
    struct vector<__weak id<QQAudioSessionManagerDelegate>, std::allocator<__weak id<QQAudioSessionManagerDelegate>>> _listeningVector;
    NSMutableSet *_activingSet;
    _Bool _isOtherAppNeedRecovery;
    double _lastRecoveryOtherAppTime;
    _Bool _isActived;
}

+ (id)getInstance;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isAudioSessionIdle;
- (_Bool)activeAudioSession:(_Bool)arg1 notifyOther:(_Bool)arg2;
- (void)onOutputDeviceChanged:(int)arg1;
- (void)checkAudioRoute:(id)arg1;
- (_Bool)activeCategoryModel:(id)arg1 error:(id *)arg2;
- (void)notifyIntterruptEnd;
- (void)notifyIntterruptBegin;
- (void)removeRecoveryListener:(long long)arg1;
- (void)addRecoveryListener:(id)arg1;
- (void)deactiveWithSystem:(_Bool)arg1 resetAudioSessionCategory:(_Bool)arg2;
- (void)deactive:(id)arg1 delay:(_Bool)arg2 notifyOtherApp:(_Bool)arg3;
- (_Bool)active:(id)arg1;
- (void)notifyActive:(_Bool)arg1 currentObjPtr:(long long)arg2;
- (void)recoveryOthers:(long long)arg1;
- (void)interruptOthers:(long long)arg1;
- (_Bool)requestDeviceWithModel:(id)arg1;
- (_Bool)canActiveOrSetCategory:(id)arg1;
- (_Bool)needRecovery;
- (void)checkActiveAndListeningSet;
- (_Bool)needChangeAudioRoute;
- (_Bool)hasVoiceOnly;
- (_Bool)isInterruptState:(long long)arg1;
- (void)setInterruptState:(long long)arg1 interrupt:(int)arg2;
- (_Bool)audioCategorySetContains:(long long)arg1;
- (_Bool)hasInterruptPropertyInActiveSet;
- (_Bool)hasSilentControllPropertyInActiveSet;
- (int)getNowInterruptPriority;
- (id)getAudioCategoryFromActivingSet:(long long)arg1;
- (void)removeAudioCategoryFromActivingSet:(long long)arg1;
- (void)insertAudioCategoryToActivingSet:(id)arg1;
- (_Bool)getOtherAppIsPlayingFlag;
- (_Bool)isAudioSessionActived;
- (id)init;
- (void)dealloc;
- (void)audioSessionDidChangeInterruptionType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

