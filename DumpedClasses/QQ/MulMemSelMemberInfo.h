//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MulMemSelMemberInfo : NSObject
{
    int _memRelationType;
    NSString *_refCode;
    NSString *_uin;
    NSString *_nick;
    NSString *_refPhoneCode;
    NSMutableDictionary *_customParam;
    int _xo;
}

- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *customParam; // @dynamic customParam;
@property(nonatomic) int memRelationType; // @dynamic memRelationType;
@property(copy, nonatomic) NSString *nick; // @dynamic nick;
@property(copy, nonatomic) NSString *refCode; // @dynamic refCode;
@property(copy, nonatomic) NSString *refPhoneCode; // @dynamic refPhoneCode;
@property(copy, nonatomic) NSString *uin; // @dynamic uin;

@end

