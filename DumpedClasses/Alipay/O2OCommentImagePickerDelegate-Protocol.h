//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class O2OCommentImagePickerView, UIImageView;

@protocol O2OCommentImagePickerDelegate <NSObject>
- (void)tiledImageView:(O2OCommentImagePickerView *)arg1 configImageForImageView:(UIImageView *)arg2 atIndex:(long long)arg3;
- (long long)numberOfImagesInTiledImageView:(O2OCommentImagePickerView *)arg1;

@optional
- (void)tiledImageViewDidTapBackground:(O2OCommentImagePickerView *)arg1;
- (void)tiledImageView:(O2OCommentImagePickerView *)arg1 didTapImageView:(UIImageView *)arg2 atIndex:(long long)arg3;
@end

