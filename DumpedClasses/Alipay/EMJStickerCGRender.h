//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EMJStickerRenderParams;

@interface EMJStickerCGRender : NSObject
{
    _Bool _fixSemiTransparentPixels;
    EMJStickerRenderParams *_renderParams;
}

+ (id)flipImageVertical:(id)arg1;
@property(nonatomic) _Bool fixSemiTransparentPixels; // @synthesize fixSemiTransparentPixels=_fixSemiTransparentPixels;
@property(retain, nonatomic) EMJStickerRenderParams *renderParams; // @synthesize renderParams=_renderParams;
- (void).cxx_destruct;
- (void)_drawFace:(struct CGContext *)arg1 image:(id)arg2 canvasSize:(struct CGSize)arg3;
- (void)_drawImage:(struct CGContext *)arg1 image:(id)arg2 canvasSize:(struct CGSize)arg3;
- (id)renderImage;

@end

