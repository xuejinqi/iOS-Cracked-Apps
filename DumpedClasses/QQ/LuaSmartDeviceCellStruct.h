//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmartDeviceCellBase.h"

@class UIImage, UIImageView, UILabel, UIView;

@interface LuaSmartDeviceCellStruct : SmartDeviceCellBase
{
    UIImage *_bgImageNormal;
    UIImage *_bgImageSelected;
    UILabel *_labelTitle;
    UILabel *_labelTime;
    UIImageView *_thumbImage;
    UIImageView *_statusView;
    UILabel *_labelDigest;
    UIView *_viewLine;
    UILabel *_labelGuideWords;
    UIImageView *_arrowGuideImage;
}

+ (int)GetBlodFontCapHeight:(int)arg1;
@property(retain, nonatomic) UIImage *bgImageSelected; // @synthesize bgImageSelected=_bgImageSelected;
@property(retain, nonatomic) UIImage *bgImageNormal; // @synthesize bgImageNormal=_bgImageNormal;

@end

