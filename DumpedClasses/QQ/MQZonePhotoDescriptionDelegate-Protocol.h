//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexSet, UIImage;

@protocol MQZonePhotoDescriptionDelegate <NSObject>

@optional
- (void)onEditVideoWithIndex:(long long)arg1 videoInfo:(NSDictionary *)arg2;
- (void)onEditIndex:(long long)arg1 toImage:(UIImage *)arg2;
- (void)onClickSendPhotos:(NSArray *)arg1 eventIndex:(long long)arg2;
- (void)onUpdateOnePhoto:(unsigned long long)arg1 isSelected:(_Bool)arg2;
- (void)onDeleteWithIndexset:(NSIndexSet *)arg1;
- (void)onDelete:(unsigned long long)arg1;
@end

