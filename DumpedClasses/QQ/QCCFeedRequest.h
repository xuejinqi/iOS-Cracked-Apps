//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CampusCircleRequest.h"

#import "GSRequestProtocol.h"

@class NSString;

@interface QCCFeedRequest : CampusCircleRequest <GSRequestProtocol>
{
    NSString *_uin;
    unsigned long long _feedCount;
    NSString *_targetFeedContent;
}

@property(retain, nonatomic) NSString *targetFeedContent; // @synthesize targetFeedContent=_targetFeedContent;
@property(nonatomic) unsigned long long feedCount; // @synthesize feedCount=_feedCount;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (id)logicError;
- (id)parseRespError;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceNumber;
- (unsigned int)serviceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

