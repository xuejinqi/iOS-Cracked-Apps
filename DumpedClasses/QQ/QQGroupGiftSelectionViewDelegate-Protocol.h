//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQGroupGiftSelectionView;

@protocol QQGroupGiftSelectionViewDelegate <NSObject>
- (void)groupGiftSelectionViewDidSelect;

@optional
- (_Bool)allowPublicGiftOfGiftSelectionView:(QQGroupGiftSelectionView *)arg1;
- (NSString *)confirmButtonTitleOfGiftSelectionView:(QQGroupGiftSelectionView *)arg1;
- (_Bool)groupGiftSelectionViewDidSelectCheckSelectMember;
@end

