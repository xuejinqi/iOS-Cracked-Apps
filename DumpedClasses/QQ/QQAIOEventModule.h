//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class NSMutableDictionary, NSString, QQViewController;

@interface QQAIOEventModule : NSObject <UIActionSheetDelegate>
{
    QQViewController *_chatViewController;
    _Bool _isShowingActionSheet;
    NSMutableDictionary *_handlerDic;
}

+ (id)actionSheetHandlerDic;
+ (id)eventHandlerArray;
@property(nonatomic) _Bool isShowingActionSheet; // @synthesize isShowingActionSheet=_isShowingActionSheet;
@property(nonatomic) __weak QQViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheetClicked:(id)arg1;
- (_Bool)AIOHandleTap:(id)arg1;
- (_Bool)AIOHandleLongPress:(id)arg1;
- (void)handleLongPressEnd:(id)arg1;
- (void)handleLongPressCancelled:(id)arg1;
- (void)handleLongPressBegan:(id)arg1;
- (_Bool)implementedPopMenuMethodsInAIOCell:(id)arg1;
- (_Bool)AIOTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)AIOTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)AIOTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)AIOTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)AIOHandleEvent:(id)arg1 touches:(id)arg2 selector:(SEL)arg3;
- (id)getChatUIOperation;
- (id)getChatViewTable;
- (id)getActionSheetHandlerWithTag:(int)arg1;
- (id)getEventHandlerWithKey:(id)arg1;
- (id)getHandlerWithClassName:(id)arg1;
- (void)unregisterAllHandler;
- (id)registerHandler:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)initWithChatViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

