//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginObject.h"

#import "HotChatPTTTimelineViewDelegate.h"

@class HotChatPTTTimelineView, NSString, PTTPlayProgressRecorder, PTTTimelineVoiceCellModel, QQHotChatModel, QQMessageModel;

@interface HotChatPTTTimelinePlugin : PluginObject <HotChatPTTTimelineViewDelegate>
{
    QQHotChatModel *_hotChatModel;
    HotChatPTTTimelineView *_timeline;
    QQMessageModel *_needAutoPlayMessage;
    PTTTimelineVoiceCellModel *_recordingCell;
    PTTPlayProgressRecorder *_progressRecorder;
}

@property(retain, nonatomic) PTTPlayProgressRecorder *progressRecorder; // @synthesize progressRecorder=_progressRecorder;
@property(nonatomic) __weak PTTTimelineVoiceCellModel *recordingCell; // @synthesize recordingCell=_recordingCell;
@property(retain, nonatomic) QQMessageModel *needAutoPlayMessage; // @synthesize needAutoPlayMessage=_needAutoPlayMessage;
@property(retain, nonatomic) HotChatPTTTimelineView *timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) QQHotChatModel *hotChatModel; // @synthesize hotChatModel=_hotChatModel;
- (void).cxx_destruct;
- (void)receiveWillPlayPTTNotification:(id)arg1;
- (void)receiveWillStopPTTNotification:(id)arg1;
- (void)receiveAutoPlayPTTNotification:(id)arg1;
- (void)receiveUpdateRecvNotification:(id)arg1;
- (void)receiveRecvNotification:(id)arg1;
- (void)receiveUpdateSendingNotification:(id)arg1;
- (void)receiveUpdateSeqNotification:(id)arg1;
- (void)receiveSendingNotification:(id)arg1;
- (void)receiveRecordCancelNotification:(id)arg1;
- (void)receiveRecordStartNotification:(id)arg1;
- (void)receiveOfflinePTTNotification:(id)arg1;
- (void)initNotifications;
- (void)timeline:(id)arg1 longGesture:(id)arg2;
- (void)timeline:(id)arg1 didSeletedIndex:(long long)arg2;
- (void)timelineLoadMore:(id)arg1;
- (void)refreshProgress:(id)arg1 index:(long long)arg2;
- (void)insertRecordingVoiceItemInTimeline:(id)arg1;
- (void)deleteRecordingVoiceItemInTimeline:(_Bool)arg1;
- (void)autoStopNewMessage:(id)arg1;
- (void)autoPlayNewMessage:(id)arg1;
- (void)receiveNewMessageOperation:(id)arg1;
- (_Bool)isRecording;
- (void)setPTTReaded:(id)arg1;
- (void)resendPTT:(id)arg1;
- (void)redownloadPTT:(id)arg1;
- (void)refreshVoiceItemInTimeline:(id)arg1 withNewMsgSeq:(long long)arg2;
- (void)insertOldVoiceItemsInTimeline:(id)arg1;
- (void)insertNewVoiceItemsInTimeline:(id)arg1;
- (void)deleteVoiceItemInTimeline:(id)arg1;
- (void)resetVoiceItemsInTimeline:(id)arg1;
- (void)refreshTimeItemInTimeline;
- (id)voiceListInTimeline;
- (void)stopPTT:(id)arg1 index:(long long)arg2;
- (void)playPTT:(id)arg1 index:(long long)arg2;
- (void)autoPlayPTTIfNeeded;
- (void)hideEmptyIfNeeded:(id)arg1;
- (void)showEmptyIfNeeded:(id)arg1;
- (void)timelineScrollToRightMostIfNeeded:(_Bool)arg1;
- (void)timelineScrollToRightMost:(_Bool)arg1;
- (void)refreshTimeCellBgInTimeline:(_Bool)arg1;
- (void)refreshStage:(id)arg1;
- (void)reloadTimeline;
- (id)loadTimelineView:(struct CGRect)arg1 hotchatModel:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

