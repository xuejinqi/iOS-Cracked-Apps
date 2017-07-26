//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray;

@interface AccountsData : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_accounts;
    unsigned long long _curId;
    _Bool _curAutoLogon;
}

@property(nonatomic) _Bool _curAutoLogon; // @synthesize _curAutoLogon;
@property(nonatomic) unsigned long long _curId; // @synthesize _curId;
@property(retain, nonatomic) NSMutableArray *_accounts; // @synthesize _accounts;
- (void).cxx_destruct;
- (unsigned long long)NSStringtoNSNumber:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)keyForPasswordEncrypt;
- (id)init;

@end

