//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class FriendsVerifyMsgNewTypeCloneInfoModel;

@interface FriendsVerifyMsgNewTypeMsgNotifyModel : NSObject <NSCoding>
{
    unsigned int _last_time;
    unsigned int _req_subtype;
    unsigned int _curr_friend_count;
    unsigned long long _uin;
    unsigned long long _fuin;
    FriendsVerifyMsgNewTypeCloneInfoModel *_clone_info;
}

@property(retain, nonatomic) FriendsVerifyMsgNewTypeCloneInfoModel *clone_info; // @synthesize clone_info=_clone_info;
@property(nonatomic) unsigned int curr_friend_count; // @synthesize curr_friend_count=_curr_friend_count;
@property(nonatomic) unsigned int req_subtype; // @synthesize req_subtype=_req_subtype;
@property(nonatomic) unsigned int last_time; // @synthesize last_time=_last_time;
@property(nonatomic) unsigned long long fuin; // @synthesize fuin=_fuin;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

