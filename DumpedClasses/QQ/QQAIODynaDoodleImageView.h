//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLKView.h"

#import "QQCreateDoodlePreviewImageMgrDelegate.h"

@class DoodleInfo, EAGLContext, GLKBaseEffect, NSString, NSThread, NSTimer, UIImage, UIImageView;

@interface QQAIODynaDoodleImageView : GLKView <QQCreateDoodlePreviewImageMgrDelegate>
{
    EAGLContext *context;
    GLKBaseEffect *TextureEffect;
    GLKBaseEffect *ColorEffect;
    unsigned int length;
    unsigned int dotsLength;
    float penThickness;
    float previousThickness;
    struct CGPoint previousPoint;
    struct CGPoint previousMidPoint;
    struct GLTouchPoint previousVertex;
    struct GLTouchPoint *DoodleVertexData;
    struct GLTouchPoint *DoodleDotsData;
    struct GLTexture *TextureLinesData;
    struct GLTexture *TextureDotsData;
    struct GLColor *ColorLinesData;
    struct GLColor *ColorDotsData;
    long long lineIndex;
    long long pointIndex;
    long long oneTimerDrawCount;
    _Bool rainbowColor;
    struct CGSize areaDrawSize;
    double lineWidthMin;
    double lineWidthMax;
    double VelocityClampMin;
    double VelocityClampMax;
    unsigned int initVertecesSize;
    unsigned int initDotsSize;
    NSString *_msgMd5;
    _Bool needCreatePreImage;
    _Bool _isBackground;
    _Bool _enterForgroundDelaying;
    id <QQCreateDoodlePreviewImageMgrDelegate> _createPreImageDelegate;
    id <QQDoodlePlayDelegate> _playDoodleDelegate;
    UIImageView *_backImageView;
    DoodleInfo *_doodleUnitData;
    UIImage *_tempBackImage;
    UIImage *_previewImage;
    NSTimer *_drawTimer;
    NSThread *_createPreviewImageThread;
}

@property(retain, nonatomic) NSThread *createPreviewImageThread; // @synthesize createPreviewImageThread=_createPreviewImageThread;
@property(retain, nonatomic) NSTimer *drawTimer; // @synthesize drawTimer=_drawTimer;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIImage *tempBackImage; // @synthesize tempBackImage=_tempBackImage;
@property(retain, nonatomic) DoodleInfo *doodleUnitData; // @synthesize doodleUnitData=_doodleUnitData;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) __weak id <QQDoodlePlayDelegate> playDoodleDelegate; // @synthesize playDoodleDelegate=_playDoodleDelegate;
@property(nonatomic) __weak id <QQCreateDoodlePreviewImageMgrDelegate> createPreImageDelegate; // @synthesize createPreImageDelegate=_createPreImageDelegate;
- (void).cxx_destruct;
- (void)clearOpenGLContext;
- (_Bool)checkOpenGLContext;
- (void)createPreviewImage:(id)arg1;
- (_Bool)setRainbowColorResPath:(id)arg1;
- (void)setLineColor:(id)arg1;
- (void)addTriangleStripPointsForPrevious:(struct GLTouchPoint)arg1 next:(struct GLTouchPoint)arg2;
- (void)drawLineTail:(struct CGPoint)arg1;
- (_Bool)drawLinePoint:(struct CGPoint)arg1;
- (void)drawLineHead:(struct CGPoint)arg1;
- (void)drawSinglePoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)StopRunSimlateDraw;
- (_Bool)IsRuningSimulateDraw;
- (void)showStatisPreImage;
- (void)clearStatisPreImage;
- (void)applicationWillResignActiveNotification;
- (void)delayEnableRendering;
- (void)onAppActive;
- (void)onAppDeActive;
- (void)dynamicDoodleTimerAction;
- (_Bool)openDrawTimer;
- (_Bool)interiorRunDynamicDoodle;
- (_Bool)runDynamicDoodle;
- (long long)getPointCount;
- (struct CGPoint)pointScalChange:(struct CGPoint)arg1 viewsize:(struct CGSize)arg2;
- (void)clearGLData:(_Bool)arg1;
- (void)createImageFail:(id)arg1;
- (void)createImageSucceed:(id)arg1 image:(id)arg2 doodleData:(id)arg3 quality:(_Bool)arg4;
- (void)setDoodleData:(id)arg1 preImage:(id)arg2 msgMd5:(id)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupGL;
- (void)initGLView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

