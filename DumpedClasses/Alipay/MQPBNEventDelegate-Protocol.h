//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol MQPBNEventDelegate <NSObject>

@optional
- (_Bool)handleAsyncEvent:(NSDictionary *)arg1 withBlock:(void (^)(NSDictionary *))arg2 from:(id)arg3;
- (_Bool)handleEvent:(NSDictionary *)arg1 from:(id)arg2;
@end

