//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface APMHttpResponse : NSObject
{
    long long _statusCode;
    long long _expectedContentLength;
    NSDictionary *_allHeaderFields;
    NSString *_MIMEType;
}

@property(readonly, copy) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) NSDictionary *allHeaderFields; // @synthesize allHeaderFields=_allHeaderFields;
@property(readonly) long long expectedContentLength; // @synthesize expectedContentLength=_expectedContentLength;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)initWithHttpHeaderData:(id)arg1;

@end

