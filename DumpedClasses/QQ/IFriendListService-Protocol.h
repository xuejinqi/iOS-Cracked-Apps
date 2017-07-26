//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, QQFriendModel, UIImage;

@protocol IFriendListService
- (UIImage *)getFriendNetworkIcon:(long long)arg1;
- (int)getFriendNetworkType:(long long)arg1;
- (_Bool)isFriNetWell:(long long)arg1;
- (_Bool)isPCHasCamera:(long long)arg1;
- (_Bool)isSupportVoice:(long long)arg1;
- (NSArray *)getAllFriendModels;
- (NSArray *)getAllFriendUINList;
- (void)updateFriendRemarkSetting:(NSArray *)arg1 withMobilePhoneStr:(NSArray *)arg2;
- (void)updateQQFriendModelNameByUin:(unsigned long long)arg1 remark:(NSString *)arg2;
- (NSArray *)getGroupList;
- (int)getQQFriendHeadIdByUin:(long long)arg1;
- (NSString *)getQQFriendRemarkByUin:(long long)arg1;
- (NSString *)getQQFriendNickByUin:(long long)arg1;
- (_Bool)isUinAtFriendList:(NSString *)arg1;
- (QQFriendModel *)strangerModelForUin:(NSString *)arg1;
- (NSString *)nickForStrangerWithUin:(NSString *)arg1;
- (QQFriendModel *)getQQFriendModelByUin:(NSString *)arg1 Cache:(_Bool)arg2;
@end

