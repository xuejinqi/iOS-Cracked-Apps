//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOSpriteActionModel.h"

@interface QQAIOCmShowEmojiActionModel : QQAIOSpriteActionModel
{
    int _emojiActionType;
    int _actionSubType;
    double _actionDis;
    double _actionPeerDis;
}

@property(nonatomic) int actionSubType; // @synthesize actionSubType=_actionSubType;
@property(nonatomic) double actionPeerDis; // @synthesize actionPeerDis=_actionPeerDis;
@property(nonatomic) double actionDis; // @synthesize actionDis=_actionDis;
@property(nonatomic) int emojiActionType; // @synthesize emojiActionType=_emojiActionType;
- (id)getSpriteActionMsgInfoWithActionId:(unsigned int)arg1;
- (id)initWithMessageModel:(id)arg1 actionId:(unsigned int)arg2 type:(int)arg3;

@end

