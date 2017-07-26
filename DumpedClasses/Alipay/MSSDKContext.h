//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSSDKDevice, MSSDKReachability, NSMutableDictionary, NSString;

@interface MSSDKContext : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)currentContext;
- (void).cxx_destruct;
- (id)nickname;
- (id)userId;
- (void)setUserId:(id)arg1 nickname:(id)arg2;
- (id)contextValueForKey:(id)arg1;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSString *utdid;
@property(readonly, nonatomic) MSSDKReachability *reachability;
@property(readonly, nonatomic) MSSDKDevice *device;
- (id)init;

@end

