//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QZHorizontalTableCell, UITableViewCell;

@protocol QZHorizontalTableCellDelegate <NSObject>
- (double)tableViewCell:(QZHorizontalTableCell *)arg1 widthForColumnAtIndex:(long long)arg2;
- (UITableViewCell *)tableViewCell:(QZHorizontalTableCell *)arg1 cellForColumnAtIndex:(long long)arg2;
- (long long)numberOfColumnsInTableViewCell:(QZHorizontalTableCell *)arg1;
@end

