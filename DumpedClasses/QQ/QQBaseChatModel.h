//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface QQBaseChatModel : NSObject
{
    NSString *_uin;
    NSMutableArray *_chatMessages;
    _Bool _isGroup;
    _Bool _isFileAssistant;
    _Bool _isOpenGroup;
    _Bool _isWifiChat;
    _Bool _isEncounterChat;
    _Bool _isSmartDevice;
    _Bool _isPhotoMode;
    int _xo;
    _Bool _isPttHotChat;
    _Bool _isSupportSILK;
    _Bool _isDiscussGroup;
    int _accSourceType;
}

@property(nonatomic) int accSourceType; // @synthesize accSourceType=_accSourceType;
@property(nonatomic) _Bool isDiscussGroup; // @synthesize isDiscussGroup=_isDiscussGroup;
@property(nonatomic) _Bool isSupportSILK; // @synthesize isSupportSILK=_isSupportSILK;
@property(nonatomic) _Bool isPttHotChat; // @synthesize isPttHotChat=_isPttHotChat;
- (void)clearMessages;
@property(retain, nonatomic) NSMutableArray *chatMessages; // @dynamic chatMessages;
- (void)dealloc;
- (id)init;
- (unsigned long long)giftBusinessType;

// Remaining properties
@property(nonatomic) _Bool isEncounterChat; // @dynamic isEncounterChat;
@property(nonatomic) _Bool isFileAssistant; // @dynamic isFileAssistant;
@property(nonatomic) _Bool isGroup; // @dynamic isGroup;
@property(nonatomic) _Bool isOpenGroup; // @dynamic isOpenGroup;
@property(nonatomic) _Bool isPhotoMode; // @dynamic isPhotoMode;
@property(nonatomic) _Bool isSmartDevice; // @dynamic isSmartDevice;
@property(nonatomic) _Bool isWifiChat; // @dynamic isWifiChat;
@property(copy, nonatomic) NSString *uin; // @dynamic uin;

@end

