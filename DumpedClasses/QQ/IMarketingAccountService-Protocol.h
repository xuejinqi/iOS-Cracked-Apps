//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol IMarketingAccountService
- (void)sendMenuRequestOnFollowWithUin:(unsigned long long)arg1;
- (NSArray *)getMenuArrayWithUin:(NSString *)arg1;
- (void)sendMenuEventRequest:(NSDictionary *)arg1 toUin:(NSString *)arg2;
- (void)sendMenuRequestWithUin:(NSString *)arg1 lastSeqno:(unsigned int)arg2;
@end

