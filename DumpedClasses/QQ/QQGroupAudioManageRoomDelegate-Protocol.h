//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GroupAudioChatMemberModel, NSString, UIViewController;

@protocol QQGroupAudioManageRoomDelegate <NSObject>
- (NSString *)getNickName:(NSString *)arg1;
- (void)dismissViewController:(UIViewController *)arg1;
- (void)SwitchModelMicState:(GroupAudioChatMemberModel *)arg1;
- (void)SwitchMicMode:(int)arg1;
- (int)GetCurrentMicMode;
@end

