//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ChatPhotoView, QQChatFilesRichMediaModel, UIView;

@interface QQChatFilesRichMediaCell : UICollectionViewCell
{
    QQChatFilesRichMediaModel *_model;
    UIView *_maskView;
    ChatPhotoView *_thumbView;
}

@property(readonly, retain, nonatomic) ChatPhotoView *thumbView; // @synthesize thumbView=_thumbView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)showSelectedAnimation;
- (void)updateUI;
- (void)setChatModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

