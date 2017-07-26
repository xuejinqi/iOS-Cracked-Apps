//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBizTaskBase.h"

@class NSString, QQMessageModel, QQThirdAppMsgModel;

@interface QQThirdAppMsgBizTask : QQBizTaskBase
{
    QQMessageModel *_msgModelCache;
    int _taskURLFromType;
    QQThirdAppMsgModel *_datamodel;
}

+ (id)sharedMsgTask:(id)arg1;
@property(nonatomic) int taskURLFromType; // @synthesize taskURLFromType=_taskURLFromType;
@property(retain, nonatomic) QQThirdAppMsgModel *datamodel; // @synthesize datamodel=_datamodel;
- (_Bool)containsMsgModel:(id)arg1;
- (id)compatibleTextPresented;
- (id)msgModel:(_Bool)arg1 targetUin:(id)arg2;
@property(readonly, retain, nonatomic) NSString *xmlMessage;
- (id)generateThirdAppXMLMsg:(id)arg1;
- (void)runTask;
- (void)main;
- (void)dealloc;

@end

