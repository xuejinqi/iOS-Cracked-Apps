//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, QQGroupJoinHelper, QQGroupSettingModel;

@interface JoinGroupVerifySettingHelper : NSObject
{
    unsigned long long _groupCode;
    id _jsDelegate;
    QQGroupJoinHelper *_joinHelper;
    int _sourceId;
    NSString *_sourceName;
    QQGroupSettingModel *_groupModel;
    NSDictionary *_query;
}

+ (id)getInstance;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) QQGroupSettingModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
- (void)notifyJoinPayGroup:(unsigned long long)arg1;
- (void)notifyJoinGroup:(unsigned long long)arg1 groupType:(int)arg2 result:(int)arg3;
- (void)ActionJoinGroupResult:(id)arg1;
- (void)joinUnverifyGroup:(unsigned long long)arg1;
- (void)loadSettingAndJoinGroup:(unsigned long long)arg1 delegate:(id)arg2 query:(id)arg3;
- (void)sendJoinGroupRequest;
- (void)requestJoinGroup:(id)arg1;
- (void)openSettingPage:(id)arg1;
- (void)openSettingPage;
- (void)loadSettingAndOpenSettingPage:(unsigned long long)arg1 delegate:(id)arg2 query:(id)arg3;
- (void)dealloc;

@end

