//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PagingScrollView;

@protocol PagingScrollViewDelegate <NSObject>

@optional
- (void)pagingScrollViewDidEndDecelerating:(PagingScrollView *)arg1;
- (void)pagingScrollViewDidScroll:(PagingScrollView *)arg1;
- (void)pagingScrollViewWillBeginDragging:(PagingScrollView *)arg1;
- (void)pagingScrollView:(PagingScrollView *)arg1 didScrollToItemAtIndex:(long long)arg2;
@end

