//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol IQSContactsEngineObserver <NSObject>

@optional
- (void)notifyHideContacts:(NSDictionary *)arg1;
- (void)notifyUploadContactsProgress:(NSDictionary *)arg1;
- (void)notifyCancelBinding:(NSDictionary *)arg1;
- (void)notifyUpdateContactsStat:(NSDictionary *)arg1;
- (void)notifyRequestResendSMSCode:(NSDictionary *)arg1;
- (void)notifyVerifyBindingSMSCode:(NSDictionary *)arg1;
- (void)notifyFetchContacts;
- (void)notifyUploadContacts:(NSDictionary *)arg1;
- (void)notifyBindPhoneCode:(NSDictionary *)arg1;
- (void)notifyUpdateBindingInfo:(NSDictionary *)arg1;
@end

