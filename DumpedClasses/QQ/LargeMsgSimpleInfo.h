//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface LargeMsgSimpleInfo : NSObject <NSCoding>
{
    unsigned int msgId;
    unsigned int sessionType;
    unsigned long long uin;
}

@property(nonatomic) unsigned int sessionType; // @synthesize sessionType;
@property(nonatomic) unsigned int msgId; // @synthesize msgId;
@property(nonatomic) unsigned long long uin; // @synthesize uin;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

