//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APBaseRequest : NSObject
{
    NSString *_business;
    NSString *_bizType;
}

+ (id)businessIdentifierFromBizType:(id)arg1 business:(id)arg2;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (id)init;
- (id)businessIdentifier;

@end

