//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichPTVGLProgramBase.h"

@class AnalyzingFaceManager, MCTmplItem;

@interface QQRichGLProgramCustom : QQRichPTVGLProgramBase
{
    unsigned int _outputTexture;
    MCTmplItem *_currentItem;
    AnalyzingFaceManager *_faceAnalyzer;
    struct CGSize _outputSize;
}

@property(retain, nonatomic) AnalyzingFaceManager *faceAnalyzer; // @synthesize faceAnalyzer=_faceAnalyzer;
@property(retain, nonatomic) MCTmplItem *currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, nonatomic) unsigned int outputTexture; // @synthesize outputTexture=_outputTexture;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (int)currentFaceStat:(float (*)[2])arg1;
- (void)loadShaderProgramParam;
- (void)renderWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2;
- (id)decryptShaderIfNeed:(id)arg1;
- (void)compileShaders:(id)arg1 fragmentShaderFromFile:(id)arg2;
- (void)dealloc;
- (id)initWithVertexShaderFromFile:(id)arg1 fragmentShaderFromFile:(id)arg2;

@end

