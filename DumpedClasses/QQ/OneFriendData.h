//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface OneFriendData : QQModel
{
    unsigned long long _uin;
    NSString *_remark;
    int _gender;
    int _age;
    int _xo;
    NSString *_reason;
}

@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) int age; // @dynamic age;
@property(nonatomic) int gender; // @dynamic gender;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

