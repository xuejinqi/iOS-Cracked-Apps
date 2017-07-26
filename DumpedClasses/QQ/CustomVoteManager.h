//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIColor;

@interface CustomVoteManager : NSObject <IEngineDispatchDelegate, ISCBusinessCallback, ISCListenerCallback>
{
    NSMutableDictionary *_downloadCompleteDic;
    NSMutableDictionary *_customVoteInfoDic;
    NSMutableArray *_marketRecommendUrls;
    int _playNum;
    float _waitTime;
    long long _flyOrder;
    _Bool _isRecommendJsonParsed;
    NSObject<OS_dispatch_queue> *customVoteQueue;
    _Bool _isRequesting;
    int _curSetId;
    CDUnknownBlockType _cvSetupComplete;
    UIColor *_blueVoteColor;
    UIColor *_goldenVoteColor;
}

+ (id)getInstance;
@property(retain, nonatomic) UIColor *goldenVoteColor; // @synthesize goldenVoteColor=_goldenVoteColor;
@property(retain, nonatomic) UIColor *blueVoteColor; // @synthesize blueVoteColor=_blueVoteColor;
@property(copy, nonatomic) CDUnknownBlockType cvSetupComplete; // @synthesize cvSetupComplete=_cvSetupComplete;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (void)onProgress:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 progressCur:(unsigned long long)arg4 progressMax:(unsigned long long)arg5;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (id)getMarketRecommendJsonPath;
- (id)getCustomVoteResourcePath:(int)arg1;
- (id)customVoteRootPath;
- (id)getCVConfigPath:(int)arg1;
- (id)getCVColorfulImagePath:(int)arg1;
- (id)getCVPureImagePath:(int)arg1;
- (id)getCVGoldenImagePath:(int)arg1;
- (id)getCustomVoteIdByScid:(id)arg1;
- (_Bool)isCustomVoteResourceExist:(int)arg1;
- (_Bool)parseMarketRecommendJson;
- (_Bool)parseCVConfig:(int)arg1;
- (void)notifyComplete:(int)arg1 result:(_Bool)arg2;
- (void)cacheCompleteBlock:(int)arg1 complete:(CDUnknownBlockType)arg2;
- (void)downloadCustomVoteResourceById:(int)arg1 complete:(CDUnknownBlockType)arg2;
- (void)downloadCustomVoteResourceByIds:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)cacheRecommendUrls:(id)arg1;
- (void)cacheCVInfo:(int)arg1 info:(id)arg2;
- (long long)getFlyOrder;
- (float)getWaitTime;
- (int)getPlayNumber;
- (id)getRecommendUrls;
- (id)getCVInfo:(int)arg1;
- (id)getGoldenImg:(int)arg1;
- (id)getColorfulImg:(int)arg1;
- (id)getPureImage:(int)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)setCustomVote:(int)arg1 complete:(CDUnknownBlockType)arg2;
- (void)onLoginSuccess;
- (void)initConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

