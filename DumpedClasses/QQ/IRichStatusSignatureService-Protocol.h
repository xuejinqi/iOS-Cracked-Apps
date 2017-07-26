//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, RichStateAbstractModel, RichStateModel, RichStateSubActionModel, UIImage;

@protocol IRichStatusSignatureService <NSObject>
+ (_Bool)isEngineAvailable;

@optional
- (void)delaySaveRichModelCache;
- (void)asyncRequestGetFriendRichSigs:(NSArray *)arg1 sliceIndex:(int)arg2 sliceSize:(int)arg3 completion:(void (^)(int))arg4;
- (void)refactoringRichModelByData:(NSData *)arg1 uin:(unsigned long long)arg2 dwTime:(int)arg3;
- (void)clearIconCache:(NSString *)arg1;
- (RichStateModel *)transformationFromBuffer:(const char *)arg1 size:(int)arg2;
- (NSMutableArray *)filterSameStateFriendList:(unsigned long long)arg1;
- (int)calcChineseTextCount:(RichStateModel *)arg1;
- (void)setRichStateSameSigByUIN:(unsigned long long)arg1 signatures:(NSData *)arg2;
- (NSData *)getRichStateSameSigByUIN:(unsigned long long)arg1;
- (RichStateAbstractModel *)getRichStateModelByID:(int)arg1;
- (NSArray *)getRichStatusTodoConfigGroupList;
- (NSArray *)getRichStatusTodoConfigList;
- (NSString *)getRichStateDetailURL:(RichStateSubActionModel *)arg1;
- (NSString *)getMovieListURL:(int)arg1 uin:(long long)arg2;
- (NSString *)getRichStateIconUUID:(int)arg1 dataID:(int)arg2;
- (NSString *)getRichStateIconUUID:(int)arg1;
- (UIImage *)getRichStateImage:(int)arg1 dataID:(int)arg2;
- (UIImage *)getRichStateImage:(int)arg1;
- (NSString *)getRichStateTinyIconUUID:(int)arg1;
- (UIImage *)getRichStateTinyIcon:(int)arg1;
- (void)asynGetRichStateSignatureByUIN:(long long)arg1 completion:(void (^)(RichStateModel *))arg2;
- (RichStateModel *)getRichStateSignatureByUIN:(long long)arg1;
- (void)updateRichStateLocally:(RichStateModel *)arg1;
- (void)updateAndSaveRichStateArray:(NSArray *)arg1;
- (void)updateRichStateSigByUINAndBroadCasting:(unsigned long long)arg1 time:(int)arg2 buffer:(const char *)arg3 length:(int)arg4;
- (int)requestSetRichStatusSignature:(RichStateModel *)arg1 sourceID:(int)arg2;
- (int)requestRichHistory:(long long)arg1 pageNum:(int)arg2 isFirstTime:(_Bool)arg3;
- (int)requestRichSyncShuoshuo:(_Bool)arg1 sync:(_Bool)arg2 syncOLD:(_Bool)arg3;
- (int)requestDelRichstateHistory:(_Bool)arg1 withArray:(NSArray *)arg2;
- (NSMutableDictionary *)loadHotRichStateModelCache;
- (void)saveHotRichModelCache:(NSMutableDictionary *)arg1;
- (int)requestGetHotRichState;
- (int)requestGetRichSigWithoutCacheByUin:(NSString *)arg1;
- (void)asynRequestGetAllFriendsRichSignatures:(void (^)(int))arg1;
- (void)asynRequestGetFriendRichSigArray:(NSArray *)arg1 completion:(void (^)(int))arg2;
- (void)changeAccount:(NSString *)arg1;
- (void)clearRichStatusTodoConfigList;
- (void)saveMyRichStateModel;
- (void)saveRichStateModels;
- (void)initializingRichStateModels;
@end

