//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQReportBaseModel.h"

#import "QQReportProtocol.h"

@class NSString;

@interface QQReport667Model : QQReportBaseModel <QQReportProtocol>
{
    NSString *_opUin;
    NSString *_targetUin;
    NSString *_opType;
    NSString *_opName;
    long long _opEntry;
    long long _opCount;
    long long _opResult;
    NSString *_reserved1;
    NSString *_reserved2;
    NSString *_reserved3;
    NSString *_reserved4;
    int _xo;
}

+ (id)keyList;
- (void).cxx_destruct;
- (id)merge:(id)arg1;
- (_Bool)compare:(id)arg1;
- (id)logString;
- (id)modelWithLogString:(id)arg1;
- (id)logKey;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long opCount; // @dynamic opCount;
@property(nonatomic) long long opEntry; // @dynamic opEntry;
@property(copy, nonatomic) NSString *opName; // @dynamic opName;
@property(nonatomic) long long opResult; // @dynamic opResult;
@property(copy, nonatomic) NSString *opType; // @dynamic opType;
@property(copy, nonatomic) NSString *opUin; // @dynamic opUin;
@property(copy, nonatomic) NSString *reserved1; // @dynamic reserved1;
@property(copy, nonatomic) NSString *reserved2; // @dynamic reserved2;
@property(copy, nonatomic) NSString *reserved3; // @dynamic reserved3;
@property(copy, nonatomic) NSString *reserved4; // @dynamic reserved4;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *targetUin; // @dynamic targetUin;

@end

