//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableDictionary, NSString;

@interface ReadInJoy0x68bMonitor : NSObject <UIAlertViewDelegate>
{
    NSMutableDictionary *_monitoredSeqDic;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *monitoredSeqDic; // @synthesize monitoredSeqDic=_monitoredSeqDic;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertWithErrorStr:(id)arg1;
- (id)recvDetialFromArticleArray:(id)arg1;
- (id)reqAndRecvDetialFromSaId:(unsigned long long)arg1 title:(id)arg2 recvArticleArray:(id)arg3;
- (id)reqAndRecvDetialFromKdIdArray:(id)arg1 recvArticleArray:(id)arg2;
- (id)uinAndTimeStr;
- (id)errorStrFromSaWithReqInfoDic:(id)arg1 recvArticleArray:(id)arg2;
- (id)errorStrFromKdWithReqInfoDic:(id)arg1 recvArticleArray:(id)arg2;
- (void)endMonitorAtRecvWithSeq:(int)arg1 recvArticleArray:(id)arg2;
- (void)startMonitorAtReqWithSeq:(int)arg1 reqInfoDic:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

