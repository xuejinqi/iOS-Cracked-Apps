//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface QQRecZanRankingReqItem : SAMRequestItem
{
    unsigned int _startIndex;
    unsigned int _wantNum;
}

@property(nonatomic) unsigned int wantNum; // @synthesize wantNum=_wantNum;
@property(nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
- (_Bool)isEqual:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)init;

@end

