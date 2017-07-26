//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CampusCircleRequest.h"

#import "GSRequestProtocol.h"

@class NSString, QQCampusModifyRequestModel;

@interface CampusModifyRequest : CampusCircleRequest <GSRequestProtocol>
{
    QQCampusModifyRequestModel *_requestModel;
}

- (void).cxx_destruct;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceType;
- (unsigned int)serviceNumber;
- (void)load:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

