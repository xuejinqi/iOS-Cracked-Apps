//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, PersonalSignHistoryManager, RichStateHistoryModel;

@protocol PersonalSignHistoryManagerObserver <NSObject>
- (void)historyManager:(PersonalSignHistoryManager *)arg1 didFailToRemoveHistoryWithError:(NSError *)arg2;
- (void)historyManager:(PersonalSignHistoryManager *)arg1 didRemoveHistory:(RichStateHistoryModel *)arg2 atIndex:(unsigned long long)arg3;
- (void)historyManager:(PersonalSignHistoryManager *)arg1 didUpdateHistory:(RichStateHistoryModel *)arg2 atIndex:(unsigned long long)arg3;
- (void)historyManager:(PersonalSignHistoryManager *)arg1 didFailLoadMoreHistorysWithError:(NSError *)arg2;
- (void)historyManager:(PersonalSignHistoryManager *)arg1 didLoadMoreHistorys:(NSArray *)arg2 hasMore:(_Bool)arg3;
- (void)historyManagerDidReloadHistorys:(PersonalSignHistoryManager *)arg1;
@end

