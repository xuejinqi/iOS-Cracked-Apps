//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSocialTagDAO, NSMutableArray;

@interface APSocialTagManager : NSObject
{
    _Bool _addedSocialTagUpdateSync;
    NSMutableArray *_compensateInfo;
    APSocialTagDAO *_socialTagDAO;
}

+ (_Bool)shouldLoadAllSocialTags:(id)arg1;
+ (id)shareManager;
@property(nonatomic) _Bool addedSocialTagUpdateSync; // @synthesize addedSocialTagUpdateSync=_addedSocialTagUpdateSync;
@property(retain, nonatomic) APSocialTagDAO *socialTagDAO; // @synthesize socialTagDAO=_socialTagDAO;
@property(retain, nonatomic) NSMutableArray *compensateInfo; // @synthesize compensateInfo=_compensateInfo;
- (void).cxx_destruct;
- (id)rpcPerformBatchSocialTags:(id)arg1 userId:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)rpcDestroySoicalTagGroup:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)rpcUpdateSocialTagoperationType:(id)arg1 socialTag:(id)arg2 socialTagId:(id)arg3 addUserIds:(id)arg4 deleteUserIds:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (id)rpcMakeNewSocialTag:(id)arg1 userIds:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)rpcRequestBatchSocialTagsForUser:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)rpcRequestBatchSocialTags:(CDUnknownBlockType)arg1;
- (_Bool)lock_deleteSocialTag:(id)arg1 userId:(id)arg2;
- (_Bool)lock_deleteUsersWithSocialTagId:(id)arg1 userIds:(id)arg2;
- (_Bool)lock_deleteUsersForSocialTag:(id)arg1 userIds:(id)arg2;
- (_Bool)lock_insertOrUpdateSocialTags:(id)arg1;
- (_Bool)lock_deleteSocialTagInfo:(id)arg1;
- (_Bool)lock_updateSocialTagWeightSocialTagTextAndUserId:(id)arg1;
- (_Bool)rpcCompensateRequestAllSocialTagsForUser:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)requestAllLocalSocialTagsAndRpc:(CDUnknownBlockType)arg1;
- (id)requestAllSocialTagTexts;
- (id)requestSocialTagsWithUserId:(id)arg1;
- (id)requestSocialTagsWithRecordIds:(id)arg1;
- (id)requestSocialTagInfo:(id)arg1;
- (id)requestLocalSocialTags;
- (id)requestAllSocialTagsExceptNoMyFriends;
- (id)requestAllSocialTags;
- (void)updateLocalSocialTagsWithSocialTags:(id)arg1;
- (id)performBatchMakeNewSocialTagsModel:(id)arg1 socialTagId:(id)arg2 userIds:(id)arg3;
- (void)postNotificationsForSocialTagsChangedWithSocialTags:(id)arg1;
- (id)handleSocialTagsModel:(id)arg1 includeNoFriend:(_Bool)arg2;
- (id)updateSocialTagInfos:(id)arg1 forUserId:(id)arg2;
- (id)filterSocialTagId:(id)arg1;
- (id)filterSocialTagText:(id)arg1;
- (id)makeNewSocialTag:(id)arg1 socialTagId:(id)arg2 userId:(id)arg3;
- (id)init;

@end

