//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAModel, QQViewController;

@protocol IFACategoryTableViewCellDelegate <NSObject>

@optional
- (QQViewController *)getHolderViewController;
- (void)onIconSelected:(FAModel *)arg1;
- (void)onClickBtnResume:(FAModel *)arg1;
- (void)onClickBtnView:(FAModel *)arg1;
- (void)onClickBtnStop:(FAModel *)arg1;
- (void)onClickBtnDown:(FAModel *)arg1;
@end

