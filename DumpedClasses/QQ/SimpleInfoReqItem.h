//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface SimpleInfoReqItem : SAMRequestItem
{
    _Bool _isNeedDateNick;
    NSArray *_uinArray;
}

+ (id)getSimpleInfoArray:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(nonatomic) _Bool isNeedDateNick; // @synthesize isNeedDateNick=_isNeedDateNick;
@property(retain, nonatomic) NSArray *uinArray; // @synthesize uinArray=_uinArray;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end

