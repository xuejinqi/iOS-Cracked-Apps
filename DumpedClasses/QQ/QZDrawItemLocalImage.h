//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSString, UIImage;

@interface QZDrawItemLocalImage : QZDrawItem
{
    UIImage *_image;
    UIImage *_hightImage;
    _Bool _disableAdjust;
    _Bool _usingView;
    _Bool _isFrontView;
    _Bool _underTextView;
    NSString *_imageName;
    long long _actionType;
}

@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool underTextView; // @synthesize underTextView=_underTextView;
@property(nonatomic) _Bool isFrontView; // @synthesize isFrontView=_isFrontView;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool usingView; // @synthesize usingView=_usingView;
@property(nonatomic) _Bool disableAdjust; // @synthesize disableAdjust=_disableAdjust;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)draw;
- (id)initWithImage:(id)arg1 hightImage:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2;

@end

