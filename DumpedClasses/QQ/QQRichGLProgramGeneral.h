//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichPTVGLProgramBase.h"

@interface QQRichGLProgramGeneral : QQRichPTVGLProgramBase
{
    unsigned int _outputTexture;
    CDUnknownBlockType _registerVertexAttributesBlock;
    CDUnknownBlockType _registerUniformsBlock;
    CDUnknownBlockType _updateUniformsBlock;
    struct CGSize _outputSize;
}

@property(copy, nonatomic) CDUnknownBlockType updateUniformsBlock; // @synthesize updateUniformsBlock=_updateUniformsBlock;
@property(copy, nonatomic) CDUnknownBlockType registerUniformsBlock; // @synthesize registerUniformsBlock=_registerUniformsBlock;
@property(copy, nonatomic) CDUnknownBlockType registerVertexAttributesBlock; // @synthesize registerVertexAttributesBlock=_registerVertexAttributesBlock;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) unsigned int outputTexture; // @synthesize outputTexture=_outputTexture;
- (void)renderWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2;
- (void)updateUniforms;
- (void)clearBufferObjects;
- (void)setupRenderVBO;
- (void)useProgram;
- (void)registerUniforms;
- (void)registerVertexAttributes;
- (void)dealloc;
- (id)init;

@end

