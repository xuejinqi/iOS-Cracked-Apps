//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MSFPacketSendParam, NSString;

@protocol IPacketDispatchService
- (_Bool)onFailedSSODNSDomain:(NSString *)arg1 andIP:(NSString *)arg2;
- (void)clearTaskThread;
- (void)performDispatchOnMainThread:(void (^)(void))arg1;
- (void)performDispatchOnSerialQueue:(void (^)(void))arg1;
- (void)performDispatchBlock:(void (^)(void))arg1 afterDelay:(double)arg2;
- (_Bool)sendWupBufferWithDelegate:(char *)arg1 cmd:(NSString *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 answerFlag:(BOOL)arg5 delegate:(id <IEngineDispatchDelegate>)arg6;
- (_Bool)sendWupBufferWithDelegate:(char *)arg1 cmd:(NSString *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 delegate:(id <IEngineDispatchDelegate>)arg5;
- (void)registeSerialQueueDispatch:(const char *)arg1;
- (void)setDefaultDispatchDelegete:(id <IMSFDelegate>)arg1;
- (void)CancelMSFPacket:(long long)arg1;
- (_Bool)SendMSFPacketWithoutSigCheck:(MSFPacketSendParam *)arg1 retSeq:(int *)arg2;
- (_Bool)SendMSFPacketWithUin:(MSFPacketSendParam *)arg1 retSeq:(int *)arg2;
- (_Bool)SendMSFPacket:(MSFPacketSendParam *)arg1 retSeq:(int *)arg2;
- (_Bool)sendPacket:(id <QQPacketParameter>)arg1 seq:(int *)arg2;
- (_Bool)resendWupBuffer:(char *)arg1 cmd:(NSString *)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)resendWupBuffer:(char *)arg1 cmd:(NSString *)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)resendWupBuffer:(char *)arg1 cmd:(NSString *)arg2 resendSeq:(int)arg3 immediately:(_Bool)arg4;
- (_Bool)preSendWupBuffer:(int *)arg1;
- (_Bool)sendWupBufferWithoutControl:(char *)arg1 cmd:(NSString *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)sendWupBufferWithoutControl:(char *)arg1 cmd:(NSString *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(NSString *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(NSString *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(NSString *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4;
- (int)getSeq;
- (void)unregisterDispatchDelegate:(NSString *)arg1;
- (_Bool)registerDispatchDelegate:(NSString *)arg1 dispatchDelegate:(id <IEngineDispatchDelegate>)arg2;
@end

