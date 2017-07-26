//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpriteMsgPushCommonModel.h"

#import "NSCoding.h"

@class NSString;

@interface SpriteRedBagMsgModel : SpriteMsgPushCommonModel <NSCoding>
{
    int _actionId;
    int _actionType;
    int _aioType;
    int _wordType;
    unsigned long long _sendUin;
    unsigned long long _rcvUin;
    unsigned long long _sessionId;
    NSString *_diyWords;
}

@property(retain, nonatomic) NSString *diyWords; // @synthesize diyWords=_diyWords;
@property(nonatomic) int wordType; // @synthesize wordType=_wordType;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int aioType; // @synthesize aioType=_aioType;
@property(nonatomic) unsigned long long rcvUin; // @synthesize rcvUin=_rcvUin;
@property(nonatomic) unsigned long long sendUin; // @synthesize sendUin=_sendUin;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) int actionId; // @synthesize actionId=_actionId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

