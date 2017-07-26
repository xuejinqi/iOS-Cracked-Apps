//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DiscussRequestItem : NSObject
{
    NSString *_requestCmd;
    int _seqId;
    long long _discussUin;
    id _requestData;
    int _xo;
}

- (id)getSign;
- (id)description;
- (void)dealloc;
- (id)initWithSeqId:(id)arg1 seqId:(int)arg2 discussUin:(long long)arg3 requestData:(id)arg4;

// Remaining properties
@property(nonatomic) long long discussUin; // @dynamic discussUin;
@property(retain, nonatomic) NSString *requestCmd; // @dynamic requestCmd;
@property(retain, nonatomic) id requestData; // @dynamic requestData;
@property(nonatomic) int seqId; // @dynamic seqId;

@end

