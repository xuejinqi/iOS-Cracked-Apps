//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRContainer.h"

#import "MFWidgetPluginProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UIColor, VRImageView, VRView;

@interface VRContainerMF : VRContainer <UIGestureRecognizerDelegate, MFWidgetPluginProtocol>
{
    _Bool _touchEnabled;
    _Bool _tracksTouch;
    _Bool _intellgentCrop;
    NSString *_backgroundImage;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
    unsigned long long _borderTop;
    unsigned long long _borderBottom;
    UIColor *_borderTopColor;
    UIColor *_borderBottomColor;
    VRImageView *_backgroundImageView;
    VRView *_topLine;
    VRView *_bottomLine;
    NSString *_intellgentCropRegion;
    NSString *_bgContentMode;
    NSString *_business;
    NSString *_bizType;
}

@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *bgContentMode; // @synthesize bgContentMode=_bgContentMode;
@property(copy, nonatomic) NSString *intellgentCropRegion; // @synthesize intellgentCropRegion=_intellgentCropRegion;
@property(nonatomic) _Bool intellgentCrop; // @synthesize intellgentCrop=_intellgentCrop;
@property(nonatomic) _Bool tracksTouch; // @synthesize tracksTouch=_tracksTouch;
@property(retain, nonatomic) VRView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) VRView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) VRImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIColor *borderBottomColor; // @synthesize borderBottomColor=_borderBottomColor;
@property(retain, nonatomic) UIColor *borderTopColor; // @synthesize borderTopColor=_borderTopColor;
@property(nonatomic) unsigned long long borderBottom; // @synthesize borderBottom=_borderBottom;
@property(nonatomic) unsigned long long borderTop; // @synthesize borderTop=_borderTop;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool touchEnabled; // @synthesize touchEnabled=_touchEnabled;
- (void).cxx_destruct;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundImage:(id)arg1 withPlaceholder:(id)arg2 rawSize:(struct CGSize)arg3;
- (void)setBackgroundColor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

