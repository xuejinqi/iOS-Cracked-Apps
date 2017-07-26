//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTFRequestParamModel;

@interface FTFRelationRequestTask : NSObject
{
    int _xo;
    unsigned long long _requestType;
    int _ssoSeq;
    id _subObject;
    FTFRequestParamModel *_model;
}

- (int)_sendRequestForAgreeAdd;
- (int)_sendRequestForAddFriend;
- (int)_sendRequestForFriendSetting;
- (int)_sendRequestForAutoInfo;
- (void)sendRequest;
- (void)dealloc;
- (id)initWithParameter:(id)arg1;

// Remaining properties
@property(retain, nonatomic) FTFRequestParamModel *model; // @dynamic model;
@property(nonatomic) unsigned long long requestType; // @dynamic requestType;
@property(nonatomic) int ssoSeq; // @dynamic ssoSeq;
@property(nonatomic) id subObject; // @dynamic subObject;

@end

