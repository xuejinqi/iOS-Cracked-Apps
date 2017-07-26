//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseOperation.h"

#import "QZChildOperation.h"

@class AVAssetExportSession, NSObject<OS_dispatch_source>, NSString, QZGroupOperation, SDAVAssetExportSession;

@interface QZVideoProcessingOperation : QZBaseOperation <QZChildOperation>
{
    SDAVAssetExportSession *_recordSession;
    AVAssetExportSession *_exportSession;
    float _progress;
    NSObject<OS_dispatch_source> *_timer;
    QZGroupOperation *_parentOperation;
}

@property(nonatomic) __weak QZGroupOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
- (void).cxx_destruct;
- (void)sendVideoWhenCompressed:(id)arg1;
- (void)compressTimeout;
- (void)stopTimer;
- (void)startTimer;
- (void)compressVideo:(id)arg1;
- (void)exportVideo:(id)arg1;
- (void)finishWithRemoveNotification;
- (void)stopWhenSuspended;
- (void)execute;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

