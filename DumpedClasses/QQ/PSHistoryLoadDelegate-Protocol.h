//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, PSHistoryLoader;

@protocol PSHistoryLoadDelegate <NSObject>
- (void)historyLoaderDidUpdateLatestHistory:(PSHistoryLoader *)arg1;
- (void)historyLoader:(PSHistoryLoader *)arg1 didFailToDeleteHistoryWithError:(NSError *)arg2;
- (void)historyLoader:(PSHistoryLoader *)arg1 didDeleteHistoryWithFeedId:(NSString *)arg2;
- (void)historyLoader:(PSHistoryLoader *)arg1 didFailToLoadMoreHistorysWithError:(NSError *)arg2;
- (void)historyLoader:(PSHistoryLoader *)arg1 didLoadMoreHistorys:(NSArray *)arg2 hasMore:(_Bool)arg3 userData:(id)arg4;
@end

