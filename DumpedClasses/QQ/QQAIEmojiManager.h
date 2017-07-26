//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, QQAIOMarioViewController, QQBaseChatViewController;

@interface QQAIEmojiManager : NSObject <IEngineDispatchDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    double _lastGetTime;
    NSString *_lastText;
    NSMutableSet *_sendeduuidSet;
    NSDictionary *_lastMsgInfo;
    CDUnknownBlockType _getEmojiCompletion;
    QQBaseChatViewController *_chatViewController;
    QQAIOMarioViewController *_marioViewController;
}

+ (id)getInstance;
@property(retain, nonatomic) QQAIOMarioViewController *marioViewController; // @synthesize marioViewController=_marioViewController;
@property(nonatomic) QQBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(copy, nonatomic) CDUnknownBlockType getEmojiCompletion; // @synthesize getEmojiCompletion=_getEmojiCompletion;
- (void)sendMarioMsg:(id)arg1 image:(id)arg2;
- (void)layoutMarioPanelWithOriginY:(double)arg1;
- (_Bool)containsQQEmoji:(id)arg1;
- (void)dismissMarioPanel;
- (void)clearMarioEmojiManager;
- (void)presentMarioEmojisPanelWithInputText:(id)arg1 chatType:(id)arg2;
- (void)resetMarioBaseVC:(id)arg1;
- (void)uploadMarioInfo:(id)arg1 md5:(id)arg2 aioModel:(id)arg3 chatMsgList:(id)arg4 dialogType:(int)arg5 sourceType:(int)arg6;
- (id)getTextEmojiInfo:(id)arg1 url:(id)arg2 tonkens:(id)arg3;
- (id)getEmojiInfo:(id)arg1 url:(id)arg2 sentiment:(id)arg3 coord:(id)arg4 color:(id)arg5 tonkens:(id)arg6;
- (id)getTextByTokens:(id)arg1;
- (void)asyncGetMarioEmojiResult:(id)arg1 chatType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)sendMarioEmojiCMDToSSO:(id)arg1 chatType:(id)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)resetEngine;
- (void)initAllEngines;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

