//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioRouteChangeProtocol.h"
#import "IPttRecorderInterface.h"
#import "QQAudioSessionManagerDelegate.h"

@class NSString, QQSilkCodec, QQSilkFile;

@interface QQSilkRecorder : NSObject <AudioRouteChangeProtocol, QQAudioSessionManagerDelegate, IPttRecorderInterface>
{
    unsigned long long _silkSampleRate;
    unsigned long long _silkBitRate;
    NSString *_outputFilePath;
    double _maxRecordTime;
    double _recordTime;
    id <QQSilkRecorderDelegate> _delegate;
    _Bool _startRecvData;
    _Bool _isRecording;
    int _xo;
    struct __sFILE *_fpVoiceChange;
    QQSilkFile *_silkFile;
    struct CVoiceRecorder *_recorder;
    QQSilkCodec *_encoder;
    _Bool _listenned;
    _Bool _canceled;
    _Bool _isTimeOut;
}

- (void)enableSomeAbilities;
- (void)disableSomeAbilities;
- (_Bool)reOpenSilkFile:(id)arg1;
- (void)saveRecordDataForVoiceChange:(id)arg1 numPackets:(unsigned long long)arg2;
- (void)onRecordDeviceChanged;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)onRecordReady;
- (void)onRecordStop;
- (void)onRecordData:(id)arg1 numPackets:(unsigned long long)arg2 packetDesc:(const struct AudioStreamPacketDescription *)arg3 audioQueue:(struct OpaqueAudioQueue *)arg4;
- (void)encodeToSilk:(id)arg1 numPackets:(unsigned long long)arg2 packetDesc:(const struct AudioStreamPacketDescription *)arg3 audioQueue:(struct OpaqueAudioQueue *)arg4;
- (void)writePcmDataToPcmFile:(short *)arg1 len:(int)arg2;
- (void)notifyTimeout;
- (void)notifyError:(int)arg1;
- (void)notifySilkFrameRecored:(id)arg1 andTotalFrameCount:(unsigned long long)arg2;
- (_Bool)startRecordeImpl;
- (_Bool)checkMicroPhoneAuth;
- (_Bool)clean;
- (_Bool)initSomething:(id)arg1;
- (void)voiceVadEnd;
- (void)voiceVadProcess:(id)arg1;
- (void)voiceVadInit;
- (id)samplesAGCandNSX:(id)arg1 length:(unsigned long long)arg2;
- (void)setSilkRecorderCacheTime:(float)arg1;
- (struct OpaqueAudioQueue *)getAudioQueue;
- (int)getFrameLength;
- (double)getRecordTime;
- (_Bool)startRecvData:(_Bool)arg1;
- (void)cancel;
- (void)stop;
- (_Bool)startRecord:(id)arg1;
- (void)setNeedSavePcmFile:(_Bool)arg1;
- (void)setAgcAndNsxEnable:(_Bool)arg1;
- (void)dealloc;
- (void)removeListenner;
- (void)addListenner;
- (_Bool)initEncoder;
- (_Bool)openPcmFile:(id)arg1;
- (_Bool)openSilkFile:(id)arg1;
- (_Bool)initRecorder;
- (id)initWithSampleRate:(unsigned long long)arg1 andBitRate:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) _Bool canceled; // @dynamic canceled;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQSilkRecorderDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQSilkCodec *encoder; // @dynamic encoder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRecording; // @dynamic isRecording;
@property(nonatomic) _Bool isTimeOut; // @dynamic isTimeOut;
@property(nonatomic) _Bool listenned; // @dynamic listenned;
@property(nonatomic) double maxRecordTime; // @dynamic maxRecordTime;
@property(copy, nonatomic) NSString *outputFilePath; // @dynamic outputFilePath;
@property(nonatomic) double recordTime; // @dynamic recordTime;
@property(nonatomic) struct CVoiceRecorder *recorder; // @dynamic recorder;
@property(nonatomic) unsigned long long silkBitRate; // @dynamic silkBitRate;
@property(retain, nonatomic) QQSilkFile *silkFile; // @dynamic silkFile;
@property(nonatomic) unsigned long long silkSampleRate; // @dynamic silkSampleRate;
@property(nonatomic) _Bool startRecvData; // @dynamic startRecvData;
@property(readonly) Class superclass;

@end

