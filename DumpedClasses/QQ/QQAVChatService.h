//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQAVChatService.h"

@class NSString, UIWebView;

@interface QQAVChatService : NSObject <IQQAVChatService>
{
    UIWebView *_phoneCallWebView;
    _Bool _isPushPhoneCall;
    NSString *_calledPhoneCall;
    struct dispatch_queue_s *_queueAVService;
    struct dispatch_queue_s *_queueAVCamera;
}

+ (id)GetInstance;
- (void)asyncDispatchToCamera:(CDUnknownBlockType)arg1;
- (void)syncDispatchToAVService:(CDUnknownBlockType)arg1;
- (void)asyncDispatchToAVService:(CDUnknownBlockType)arg1;
- (_Bool)isTelePhoneCalling;
- (void)makePhoneCall:(id)arg1;
- (void)resetTotalUnreadCount;
- (void)resetUnreadCount:(id)arg1 accType:(int)arg2;
- (int)getAVUnreadCount:(id)arg1 accType:(int)arg2;
- (int)getTotalAVUnreadCount;
- (void)dealloc;
- (id)init;

@end

