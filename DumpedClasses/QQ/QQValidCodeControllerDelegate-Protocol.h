//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol QQValidCodeControllerDelegate <NSObject>

@optional
- (void)cancelVerifyByClickRightButton;
- (_Bool)commitVerifyTicket:(NSData *)arg1 sessionID:(int)arg2;
- (_Bool)refreshVerifyCodeWithSessionID:(int)arg1;
- (_Bool)commitVerifyCode:(NSString *)arg1 sessionID:(int)arg2;
@end

