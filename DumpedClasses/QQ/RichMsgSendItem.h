//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, QQMessageModel;

@interface RichMsgSendItem : NSObject
{
    int _seqId;
    int _msgSendType;
    int _msgType;
    int _bodyType;
    int _time;
    long long _toUin;
    NSString *_uuid;
    NSString *_localUuid;
    unsigned int _duration;
    unsigned int _appShareID;
    int _msgId;
    NSString *_picMd5;
    NSNumber *_startSendTime;
    NSString *_xmlContent;
    QQMessageModel *_messageModel;
    long long _fileId;
    NSString *_fileKey;
    NSString *_uuidPrefix;
    int _xo;
}

- (id)description;
- (void)dealloc;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

// Remaining properties
@property(nonatomic) unsigned int appShareID; // @dynamic appShareID;
@property(nonatomic) int bodyType; // @dynamic bodyType;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(nonatomic) long long fileId; // @dynamic fileId;
@property(retain, nonatomic) NSString *fileKey; // @dynamic fileKey;
@property(retain, nonatomic) NSString *localUuid; // @dynamic localUuid;
@property(retain, nonatomic) QQMessageModel *messageModel; // @dynamic messageModel;
@property(nonatomic) int msgId; // @dynamic msgId;
@property(nonatomic) int msgSendType; // @dynamic msgSendType;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *picMd5; // @dynamic picMd5;
@property(nonatomic) int seqId; // @dynamic seqId;
@property(retain, nonatomic) NSNumber *startSendTime; // @dynamic startSendTime;
@property(nonatomic) int time; // @dynamic time;
@property(nonatomic) long long toUin; // @dynamic toUin;
@property(copy, nonatomic) NSString *uuidPrefix; // @dynamic uuidPrefix;
@property(retain, nonatomic) NSString *xmlContent; // @dynamic xmlContent;

@end

