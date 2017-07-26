//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class FAModel, IEngineDispatchDelegateNonRetian, NSString, NSTimerNonRetain;

@interface FAPreviewRequest : NSObject <IEngineDispatchDelegate>
{
    _Bool _isRequesting;
    int _reqSeq;
    int _retCode;
    int _retryCount;
    FAModel *_model;
    NSTimerNonRetain *_downloadTimeOutTimer;
    IEngineDispatchDelegateNonRetian *_csDelegate;
    id <FAPreviewRequestDelegate> _delegate;
    NSString *_errMsg;
}

@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSTimerNonRetain *downloadTimeOutTimer; // @synthesize downloadTimeOutTimer=_downloadTimeOutTimer;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
- (id)hexToString:(const char *)arg1 Length:(int)arg2;
- (_Bool)onRspApplyPreview:(const basic_string_075b6133 *)arg1;
- (void)notifyPreviewResult:(_Bool)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)setTimeoutTimer;
- (void)stopTimer;
- (void)onTimedOut;
- (_Bool)canRetry;
- (void)internalRequest;
- (void)onlinePreviewRequest:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

