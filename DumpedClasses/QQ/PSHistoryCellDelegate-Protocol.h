//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PSHistoryCell, RichStateHistoryModel;

@protocol PSHistoryCellDelegate <NSObject>
- (void)psHistoryCell:(PSHistoryCell *)arg1 TemplateAreaTaped:(RichStateHistoryModel *)arg2;
- (void)psHistoryCellHeadIconOnClick:(NSString *)arg1;
- (void)psHistoryCellMoreHeadButtonOnClick:(PSHistoryCell *)arg1;
- (void)psHistoryCellLikeButtonOnClick:(PSHistoryCell *)arg1;
- (void)psHistoryCellActionButtonOnClick:(PSHistoryCell *)arg1;
- (void)psHistoryCellDeleteButtonOnClick:(PSHistoryCell *)arg1;
- (void)psHistoryCellShowDeleteButton:(PSHistoryCell *)arg1;
- (_Bool)psHistoryCellCheckOtherCellShowDeleteButton:(PSHistoryCell *)arg1;
@end

