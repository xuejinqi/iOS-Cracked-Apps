//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQMessageListProtocol.h"
#import "QQRecentSessionProtocol.h"

@class NSString, QQMessageViewBaseCell, QQRecentMessageModel;

@interface QQRecentSession : NSObject <QQMessageListProtocol, QQRecentSessionProtocol>
{
    QQRecentMessageModel *_recentMsgModel;
    QQMessageViewBaseCell *_viewCell;
}

+ (id)createRecentSessionWithModel:(id)arg1 causeBy:(int)arg2 isNew:(_Bool)arg3;
@property(retain, nonatomic) QQMessageViewBaseCell *viewCell; // @synthesize viewCell=_viewCell;
@property(retain, nonatomic) QQRecentMessageModel *recentMsgModel; // @synthesize recentMsgModel=_recentMsgModel;
- (void)setData;
- (id)createMessageViewCellWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)peekViewController:(id)arg1 fetchVCDelegate:(id)arg2;
- (void)selectViewController:(id)arg1;
- (void)deleteMessageViewCell;
- (int)typeOfSession;
- (void)recordWithQQPushMsgMonitor;
- (void)markClusterMessageAsHandled;
- (void)clearAllMessageInfinitly;
- (void)deleteMessage;
- (void)clearUnReadCount;
- (int)getUnreadMessageCount;
- (id)getCellIndentifier;
- (id)getMessageKey;
- (int)parseMessageType;
- (void)_privateMethod;
- (id)createMessageViewCellWithStyle:(long long)arg1 tableView:(id)arg2;
- (id)dynamicCreateRecentMsgModel:(id)arg1 className:(id)arg2;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

