//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SimpleUserInfo : NSObject
{
    NSString *account_;
    unsigned int uid_;
    NSString *sNickName_;
}

@property(retain, nonatomic) NSString *sNickName_; // @synthesize sNickName_;
@property(nonatomic) unsigned int uid_; // @synthesize uid_;
@property(retain, nonatomic) NSString *account_; // @synthesize account_;
- (void).cxx_destruct;
- (id)propertiesDescription:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

