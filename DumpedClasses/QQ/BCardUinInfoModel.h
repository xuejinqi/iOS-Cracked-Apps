//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@interface BCardUinInfoModel : QQModel
{
    _Bool _isFriend;
    _Bool _isSearchable;
    unsigned long long _uin;
}

+ (id)deserialization:(id)arg1;
@property(nonatomic) _Bool isSearchable; // @synthesize isSearchable=_isSearchable;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialization;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUin:(unsigned long long)arg1 isFriend:(_Bool)arg2 isSearchable:(_Bool)arg3;

@end

