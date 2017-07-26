//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class FATaskInfoUpload, IEngineDispatchDelegateNonRetian, NSMutableURLRequest, NSString, NSTimerNonRetain;

@interface FAUpRequest : NSObject <IEngineDispatchDelegate>
{
    id <FAUpRequestDelegate> _delegate;
    int _logId;
    FATaskInfoUpload *_fileInfo;
    unsigned long long _nRetryCount;
    int _reqSeq;
    NSMutableURLRequest *_urlRequest;
    int _lastFailCode;
    NSString *_lastErrorDisc;
    NSString *_dataReportId;
    NSString *_dataReportDetailId;
    double _startTime;
    IEngineDispatchDelegateNonRetian *_csDelegate;
    NSTimerNonRetain *_downloadTimeOutTimer;
    unsigned int _requestCount;
    int _xo;
}

- (_Bool)canBeDelete;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)OnRequestSend:(unsigned int)arg1;
- (void)dataReport:(int)arg1 errorDisc:(id)arg2 reportcollect:(_Bool)arg3 reportDetail:(_Bool)arg4;
- (void)dealloc;
- (void)stop;
- (void)cancel;
- (void)setTimeoutTimer;
- (void)stopTimer;
- (void)onTimedOut;
- (void)internalRequest;
- (void)OnComplete:(_Bool)arg1 serverTip:(id)arg2;
- (_Bool)isCanRetry;
- (void)request:(id)arg1;
- (id)init:(int)arg1 fileInfo:(id)arg2;

// Remaining properties
@property(retain, nonatomic) IEngineDispatchDelegateNonRetian *csDelegate; // @dynamic csDelegate;
@property(copy, nonatomic) NSString *dataReportDetailId; // @dynamic dataReportDetailId;
@property(copy, nonatomic) NSString *dataReportId; // @dynamic dataReportId;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <FAUpRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSTimerNonRetain *downloadTimeOutTimer; // @dynamic downloadTimeOutTimer;
@property(retain, nonatomic) FATaskInfoUpload *fileInfo; // @dynamic fileInfo;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *lastErrorDisc; // @dynamic lastErrorDisc;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableURLRequest *urlRequest; // @dynamic urlRequest;

@end

