//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichPTVGLProgramBase.h"

@interface QQRichGLProgramFrameOpt : QQRichPTVGLProgramBase
{
    unsigned int _positionVBO;
    unsigned int _texcoordVBO;
    struct CGSize _outputTextureSize;
    struct CGSize _inputTextureSize;
    double _rotatingRadians;
    unsigned int _outputTexture;
    struct CGRect _cropRect;
    union _GLKMatrix4 _rotateMatrix;
}

@property(nonatomic) union _GLKMatrix4 rotateMatrix; // @synthesize rotateMatrix=_rotateMatrix;
@property(readonly, nonatomic) unsigned int outputTexture; // @synthesize outputTexture=_outputTexture;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (_Bool)renderInputTexture:(unsigned int)arg1 inputTextureSize:(struct CGSize)arg2 frameBuffer:(unsigned int)arg3;
- (void)setInputTextureSize:(struct CGSize)arg1;
- (void)cleanOutputTexture;
@property(readonly, nonatomic) struct CGSize outputTextureSize;
- (void)updateOutputTexture;
- (void)updateTexCoord;
- (void)clearBufferObjects;
- (void)setDefaultVBOVaule;
- (void)setupBufferObjects;
- (void)useProgram;
- (void)compileShaders;
- (void)dealloc;
- (id)init;

@end

