//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQCouponPBHandler : NSObject
{
    int _seq;
    unsigned long long _reqTs;
    NSMutableDictionary *_userInfo;
    id <QQCouponPBHandlerDelegate> _delegate;
}

+ (void)updateMyFavourBusinessListTs:(unsigned long long)arg1;
+ (void)updateMyCouponsListTs:(unsigned long long)arg1;
+ (id)storageKeyForCurrentUin:(id)arg1;
@property(nonatomic) id <QQCouponPBHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAddCouponFavourResp:(id)arg1;
- (void)onMarkBusinessFavourUpdateResp:(id)arg1;
- (void)keepCouponWithBid:(unsigned int)arg1 sourceId:(unsigned int)arg2 cid:(unsigned int)arg3 city:(id)arg4;
- (void)removeMyFavourBusinessesUpdateBadge;
- (void)didKeptCoupon:(id)arg1 error:(id)arg2;
- (void)didRemovedMyFavourBusinessesUpdateBadgeWithError:(id)arg1;
- (id)commandErrorWithCode:(long long)arg1;
- (id)commandError;
- (id)requestErrorWithCode:(long long)arg1;
- (_Bool)isSuccessResponse:(id)arg1;
- (_Bool)checkResponse:(id)arg1 didMatchCmd:(id)arg2 message:(id *)arg3 errorCode:(int *)arg4;
- (_Bool)sendData:(id)arg1 withCmd:(id)arg2;
- (_Bool)parseMessage:(struct MessageLite *)arg1 FromData:(id)arg2;
- (id)serializeToData:(struct MessageLite *)arg1;
- (void)removeNotificationHandler:(id)arg1;
- (void)handleNotification:(id)arg1 with:(SEL)arg2 andSendRequest:(struct MessageLite *)arg3;
- (void)handleNotification:(id)arg1 with:(SEL)arg2 andSendData:(id)arg3;
- (void)handleNotification:(id)arg1 with:(SEL)arg2;
- (void)dealloc;
- (id)init;

@end

