//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFImageView.h"

#import "MFWidgetPluginProtocol.h"

@class NSString;

@interface MFCloudImageView : MFImageView <MFWidgetPluginProtocol>
{
    NSString *_imageUrl;
    struct CGSize _originalImageSize;
    struct CGSize _cutImageSize;
}

+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(nonatomic) struct CGSize cutImageSize; // @synthesize cutImageSize=_cutImageSize;
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 rawImageSize:(struct CGSize)arg3 fitImageSize:(struct CGSize)arg4 business:(id)arg5 progress:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setImageWithUrl:(id)arg1 placeholderImage:(id)arg2 rawImageSize:(struct CGSize)arg3 fitImageSize:(struct CGSize)arg4 business:(id)arg5 radius:(double)arg6 dealType:(int)arg7 qualityValue:(unsigned long long)arg8 isSyncLoadCatch:(_Bool)arg9 progress:(CDUnknownBlockType)arg10 completion:(CDUnknownBlockType)arg11;
- (void)setImageWithUrl:(id)arg1 placeholderImage:(id)arg2 rawImageSize:(struct CGSize)arg3 fitImageSize:(struct CGSize)arg4 business:(id)arg5 progress:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)updateImageBasicInfo:(id)arg1 rawImageSize:(struct CGSize)arg2 fitImageSize:(struct CGSize)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

