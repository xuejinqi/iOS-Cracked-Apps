//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class NSString;

@interface HCPttZanRequest : GSBaseRequest <GSRequestProtocol>
{
    unsigned long long _requestType;
    NSString *_poiID;
    unsigned long long _zanNumber;
}

@property(nonatomic) unsigned long long zanNumber; // @synthesize zanNumber=_zanNumber;
@property(retain, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceType;
- (unsigned int)serviceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

