//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class NSString;

@interface GO2OServiceError : NSError
{
    _Bool _isSilent;
    NSString *_bizResultCode;
}

+ (id)errorWithException:(id)arg1;
+ (id)errorWithResultCode:(id)arg1 desc:(id)arg2;
@property(nonatomic) _Bool isSilent; // @synthesize isSilent=_isSilent;
@property(retain, nonatomic) NSString *bizResultCode; // @synthesize bizResultCode=_bizResultCode;
- (void).cxx_destruct;

@end

