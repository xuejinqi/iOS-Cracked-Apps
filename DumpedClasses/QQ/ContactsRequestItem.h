//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSTimer;

@interface ContactsRequestItem : NSObject
{
    int _seqId;
    int _requestType;
    NSTimer *_timer;
    long long _userUIN;
    int _ssoSeq;
    id _data;
    id _cacheData;
    int _retryCount;
    NSDictionary *_retryPara;
    int _xo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSeqId:(int)arg1 requestType:(int)arg2 userUIN:(long long)arg3 ssoSeq:(int)arg4 timeoutInterval:(double)arg5 target:(id)arg6 selector:(SEL)arg7 retryCount:(int)arg8 retryPara:(id)arg9;
- (id)initWithSeqId:(int)arg1 requestType:(int)arg2 userUIN:(long long)arg3 ssoSeq:(int)arg4 timeoutInterval:(double)arg5 target:(id)arg6 selector:(SEL)arg7;

// Remaining properties
@property(retain, nonatomic) id cacheData; // @dynamic cacheData;
@property(retain, nonatomic) id data; // @dynamic data;
@property(nonatomic) int requestType; // @dynamic requestType;
@property(nonatomic) int retryCount; // @dynamic retryCount;
@property(retain, nonatomic) NSDictionary *retryPara; // @dynamic retryPara;
@property(readonly, nonatomic) int seqId; // @dynamic seqId;
@property(nonatomic) int ssoSeq; // @dynamic ssoSeq;
@property(retain, nonatomic) NSTimer *timer; // @dynamic timer;
@property(nonatomic) long long userUIN; // @dynamic userUIN;

@end

