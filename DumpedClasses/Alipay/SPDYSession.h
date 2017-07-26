//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPDYFrameDecoderDelegate.h"
#import "SPDYFrameEncoderDelegate.h"
#import "SPDYSocketDelegate.h"
#import "SPDYStreamDataDelegate.h"

@class NSMutableData, NSString, NSTimer, SPDYFrameDecoder, SPDYFrameEncoder, SPDYOrigin, SPDYSocket, SPDYStreamManager;

@interface SPDYSession : NSObject <SPDYFrameDecoderDelegate, SPDYFrameEncoderDelegate, SPDYStreamDataDelegate, SPDYSocketDelegate>
{
    SPDYSocket *_socket;
    SPDYFrameDecoder *_frameDecoder;
    SPDYFrameEncoder *_frameEncoder;
    SPDYStreamManager *_activeStreams;
    SPDYStreamManager *_inactiveStreams;
    NSMutableData *_inputBuffer;
    unsigned int _lastGoodStreamId;
    unsigned int _nextStreamId;
    unsigned int _nextPingId;
    unsigned long long _bufferReadIndex;
    unsigned long long _bufferWriteIndex;
    unsigned int _initialSendWindowSize;
    unsigned int _initialReceiveWindowSize;
    unsigned int _sessionSendWindowSize;
    unsigned int _sessionReceiveWindowSize;
    unsigned int _localMaxConcurrentStreams;
    unsigned int _remoteMaxConcurrentStreams;
    long long _lastSocketActivity;
    _Bool _enableSettingsMinorVersion;
    _Bool _receivedGoAwayFrame;
    _Bool _sentGoAwayFrame;
    _Bool _cellular;
    double _heartbeatInterval;
    NSTimer *_heartbeatTimer;
    double _heartbeatTimeout;
    NSTimer *_heartbeatTimeoutTimer;
    int _connectionStatus;
    long long _backgroundTime;
    SPDYOrigin *_origin;
}

@property(nonatomic) int connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(readonly, nonatomic) SPDYOrigin *origin; // @synthesize origin=_origin;
@property(nonatomic) long long backgroundTime; // @synthesize backgroundTime=_backgroundTime;
- (void).cxx_destruct;
- (void)_heartbeat:(id)arg1;
- (void)_sendTcpData:(id)arg1;
- (void)_sendGoAway:(unsigned int)arg1;
- (void)_sendRstStream:(unsigned int)arg1 streamId:(unsigned int)arg2;
- (void)_sendPing:(id)arg1;
- (void)_sendWindowUpdate:(unsigned int)arg1 streamId:(unsigned int)arg2;
- (void)_sendData:(id)arg1;
- (void)_sendSynStreamAndData:(id)arg1;
- (void)_sendSynStream:(id)arg1 streamId:(unsigned int)arg2 closeLocal:(_Bool)arg3;
- (void)_sendClientSettings;
- (void)_sendServerPersistedSettings:(CDStruct_2ea23212 *)arg1;
@property(readonly, nonatomic) unsigned int nextPingId;
@property(readonly, nonatomic) unsigned int nextStreamId;
- (void)didReadTcpDataFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadWindowUpdateFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadHeadersFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadGoAwayFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadPingFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadSettingsFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadRstStreamFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadSynReplyFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadSynStreamFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didReadDataFrame:(id)arg1 frameDecoder:(id)arg2;
- (void)didEncodeData:(id)arg1 frameEncoder:(id)arg2;
- (void)didEncodeData:(id)arg1 frameEncoder:(id)arg2 tag:(long long)arg3;
- (void)streamFinished:(id)arg1;
- (void)streamDataAvailable:(id)arg1;
- (void)socketDidDisconnect:(id)arg1;
- (void)socket:(id)arg1 willDisconnectWithError:(id)arg2;
- (void)socket:(id)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (_Bool)socket:(id)arg1 securedWithTrust:(struct __SecTrust *)arg2;
- (void)setHeartbeatInterval:(double)arg1;
- (void)_closeWithStatus:(unsigned int)arg1;
- (void)close:(id)arg1;
- (void)close;
@property(readonly, nonatomic) _Bool isOpen;
@property(readonly, nonatomic) _Bool isCellular;
- (void)dealloc;
- (void)sendTcpData:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)_startStream:(id)arg1;
- (void)_issuePendingRequests;
- (void)issueRequest:(id)arg1;
- (id)initWithOrigin:(id)arg1 configuration:(id)arg2 cellular:(_Bool)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

