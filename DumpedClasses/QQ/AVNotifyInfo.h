//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, QQMessageModel;

@interface AVNotifyInfo : NSObject
{
    unsigned int bodyType;
    unsigned int sessionType;
    int sendSeq;
    int msgTime;
    int nMsgId;
    unsigned int msgSeq;
    unsigned int msgRandom;
    QQMessageModel *msgModel;
    unsigned long long roomId;
    NSString *strMsg;
    NSString *ringFilename;
    NSData *sigData;
}

@property(retain, nonatomic) NSData *sigData; // @synthesize sigData;
@property(nonatomic) unsigned int msgRandom; // @synthesize msgRandom;
@property(nonatomic) unsigned int msgSeq; // @synthesize msgSeq;
@property(nonatomic) int nMsgId; // @synthesize nMsgId;
@property(nonatomic) int msgTime; // @synthesize msgTime;
@property(nonatomic) int sendSeq; // @synthesize sendSeq;
@property(retain, nonatomic) NSString *ringFilename; // @synthesize ringFilename;
@property(retain, nonatomic) NSString *strMsg; // @synthesize strMsg;
@property(nonatomic) unsigned long long roomId; // @synthesize roomId;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel;
@property(nonatomic) unsigned int sessionType; // @synthesize sessionType;
@property(nonatomic) unsigned int bodyType; // @synthesize bodyType;
- (void)dealloc;

@end

