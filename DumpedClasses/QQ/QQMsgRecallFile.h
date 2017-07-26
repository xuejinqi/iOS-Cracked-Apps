//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMsgRecallBase.h"

#import "QQMsgRecallInterfaceDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQMsgRecallFile : QQMsgRecallBase <QQMsgRecallInterfaceDelegate, UIActionSheetDelegate>
{
    NSMutableDictionary *_recallQueue;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)replaceAIOModel:(id)arg1;
- (void)showFailToast;
- (void)doMsgRecallOperation:(id)arg1;
- (void)onFileRecallResult:(id)arg1;
- (void)doFileRecallOperation:(id)arg1;
- (void)doRecallOperation:(id)arg1;
- (_Bool)doFileRecallOperationPre:(id)arg1;
- (_Bool)doRecallOperationPre:(id)arg1;
- (void)dealloc;
- (id)initWithChatViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

