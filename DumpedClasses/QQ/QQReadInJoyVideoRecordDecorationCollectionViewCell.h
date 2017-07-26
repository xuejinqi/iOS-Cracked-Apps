//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MCGridVideoItem, QQCircularLoadingProgressView, UIImageView, UIView;

@interface QQReadInJoyVideoRecordDecorationCollectionViewCell : UICollectionViewCell
{
    UIImageView *_thumbnailImageView;
    UIImageView *_selectedImageView;
    UIImageView *_tobeDownloadImageView;
    UIView *_selectedMaskView;
    QQCircularLoadingProgressView *_progressView;
    MCGridVideoItem *_item;
    unsigned long long _itemState;
}

@property(nonatomic) unsigned long long itemState; // @synthesize itemState=_itemState;
@property(retain, nonatomic) MCGridVideoItem *item; // @synthesize item=_item;
@property(retain, nonatomic) QQCircularLoadingProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(nonatomic) __weak UIImageView *tobeDownloadImageView; // @synthesize tobeDownloadImageView=_tobeDownloadImageView;
@property(nonatomic) __weak UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) __weak UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)downloadTemplate;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

