//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSMutableDictionary;

@interface UITableView (observerMotion)
- (void)QQRemoveObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)QQRemoveObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)QQAddObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSMutableDictionary *registerObservers; // @dynamic registerObservers;
@end

