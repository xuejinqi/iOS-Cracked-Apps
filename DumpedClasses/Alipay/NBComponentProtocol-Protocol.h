//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBComponentDataProtocol.h"
#import "NBComponentLifeCycleProtocol.h"
#import "NSObject.h"

@class NBComponentContext, NSDictionary, NSString, UIView;

@protocol NBComponentProtocol <NSObject, NBComponentLifeCycleProtocol, NBComponentDataProtocol>
@property(copy, nonatomic) NSString *componentId;
@property(retain, nonatomic) NSDictionary *data;
@property(copy, nonatomic) NSString *type;
@property(retain, nonatomic) NBComponentContext *context;
@property(nonatomic) __weak id <NBComponentMessageDelegate> nbComponentMessageDelegate;
- (void)componentReceiveMessage:(NSString *)arg1 data:(NSDictionary *)arg2 callback:(void (^)(NSDictionary *))arg3;
- (UIView *)contentView;
@end

