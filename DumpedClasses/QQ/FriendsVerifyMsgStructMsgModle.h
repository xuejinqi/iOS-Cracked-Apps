//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class FriendsVerifyMsgModel;

@interface FriendsVerifyMsgStructMsgModle : NSObject <NSCoding>
{
    unsigned int _version;
    unsigned int _msg_type;
    unsigned long long _msg_seq;
    unsigned long long _msg_time;
    unsigned long long _req_uin;
    unsigned int _frimsg_unread;
    FriendsVerifyMsgModel *_msg;
    int _xo;
}

@property(retain, nonatomic) FriendsVerifyMsgModel *msg; // @synthesize msg=_msg;
@property(nonatomic) unsigned int frimsg_unread; // @synthesize frimsg_unread=_frimsg_unread;
@property(nonatomic) unsigned long long req_uin; // @synthesize req_uin=_req_uin;
@property(nonatomic) unsigned long long msg_time; // @synthesize msg_time=_msg_time;
@property(nonatomic) unsigned long long msg_seq; // @synthesize msg_seq=_msg_seq;
@property(nonatomic) unsigned int msg_type; // @synthesize msg_type=_msg_type;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

