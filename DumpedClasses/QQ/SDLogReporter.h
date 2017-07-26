//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISDDataReportDelegate.h"

@class NSString;

@interface SDLogReporter : NSObject <ISDDataReportDelegate>
{
    unsigned int _productId;
    unsigned int _seq;
    NSString *_serialNum;
}

+ (id)getInstance;
+ (void)report:(id)arg1 receiverUin:(id)arg2 fromType:(int)arg3 actionResult:(int)arg4 reserved2:(id)arg5 reserved3:(id)arg6 reserved4:(id)arg7 reserved5:(id)arg8;
+ (void)report:(id)arg1 uin:(id)arg2 fromType:(int)arg3 actionResult:(int)arg4 reserved2:(id)arg5;
+ (void)report:(id)arg1 receiverUin:(id)arg2 fromType:(int)arg3 actionResult:(int)arg4 reserved2:(id)arg5;
+ (void)report:(id)arg1 receiverUin:(id)arg2 fromType:(int)arg3 actionResult:(int)arg4;
+ (void)report:(id)arg1 uin:(unsigned long long)arg2 fromType:(int)arg3 actionResult:(int)arg4;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned int productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *serialNum; // @synthesize serialNum=_serialNum;
- (void).cxx_destruct;
- (unsigned int)OnGetServerTime;
- (void)OnReport:(id)arg1 Result:(int)arg2 Pid:(unsigned int)arg3 SN:(id)arg4;
- (void)OnReport:(id)arg1 Result:(int)arg2;
- (void)report:(id)arg1 Result:(int)arg2;
- (void)increaseSeq;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

