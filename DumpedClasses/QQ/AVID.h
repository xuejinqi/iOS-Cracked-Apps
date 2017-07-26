//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface AVID : NSObject <NSCopying>
{
    _Bool _pairOrMulti;
    int _accountType;
    int _relationType;
    int _businessType;
    unsigned long long _uin;
}

+ (id)AVIDWithUin:(unsigned long long)arg1 relationType:(int)arg2 businessType:(int)arg3;
+ (id)AVIDWithUin:(unsigned long long)arg1 accountType:(int)arg2;
@property(readonly, nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(readonly, nonatomic) int relationType; // @synthesize relationType=_relationType;
@property(readonly, nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(readonly, nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(readonly, nonatomic) _Bool pairOrMulti; // @synthesize pairOrMulti=_pairOrMulti;
- (id)description;
- (_Bool)isEqualToAVID:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithUin:(unsigned long long)arg1 relationType:(int)arg2 businessType:(int)arg3;
- (id)initWithUin:(unsigned long long)arg1 accountType:(int)arg2;
- (id)initWithUin:(unsigned long long)arg1 pairOrMulti:(_Bool)arg2 accountType:(int)arg3 relationType:(int)arg4 businessType:(int)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

