//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVKLitePreCacheManagerDelegate.h"

@class NSMutableDictionary, NSString, TVKLitePreCacheManager;

@interface QQReadInJoyVideoPreloadManager : NSObject <TVKLitePreCacheManagerDelegate>
{
    int _duration;
    TVKLitePreCacheManager *_tvkPrecacheManager;
    NSMutableDictionary *_preloadTasks;
    NSMutableDictionary *_preloadingTasks;
    NSMutableDictionary *_preloadedTasks;
}

+ (_Bool)enablePreload;
+ (_Bool)videoIsCachedWithVideoID:(id)arg1 atDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (_Bool)videoFileID:(id)arg1 isPreloadedWithDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (long long)videoSizeShouldPreloadWithFileID:(id)arg1 Duration:(int)arg2 VideoSource:(unsigned long long)arg3;
+ (id)fetchFileIDWithTencentVideoID:(id)arg1;
+ (id)fetchFileIDWithThirdVideoID:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableDictionary *preloadedTasks; // @synthesize preloadedTasks=_preloadedTasks;
@property(retain, nonatomic) NSMutableDictionary *preloadingTasks; // @synthesize preloadingTasks=_preloadingTasks;
@property(retain, nonatomic) NSMutableDictionary *preloadTasks; // @synthesize preloadTasks=_preloadTasks;
@property(retain, nonatomic) TVKLitePreCacheManager *tvkPrecacheManager; // @synthesize tvkPrecacheManager=_tvkPrecacheManager;
- (void).cxx_destruct;
- (void)startPreCacheTaskCallbackForVid:(id)arg1 ResultPlayId:(int)arg2 FileID:(id)arg3;
- (void)stopAllPreloadExceptForVideoIDs:(id)arg1;
- (void)stopAllPreloadExceptForVideoID:(id)arg1;
- (int)stopPreloadWithPlayID:(int)arg1;
- (int)startPreloadWithPlayID:(int)arg1 taskModel:(id)arg2;
- (unsigned long long)createTaskWithTaskModels:(id)arg1 Async:(_Bool)arg2;
- (_Bool)createTaskWithTaskModel:(id)arg1;
- (void)setPrecacheManagerWithServiceType:(int)arg1;
- (id)getCacheURLWithVideoID:(id)arg1;
- (void)fetchHDVideoURLWithVideoID:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)fetchVideoURLWithVideoID:(id)arg1 Completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

