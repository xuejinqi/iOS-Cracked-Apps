//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQChatImageMetaInfo : NSObject
{
    struct CGSize _fitSize;
    struct CGSize _maxSize;
    int _isGif;
    NSString *_filePath;
    _Bool _noRoundCorner;
    id <QQChatImageMetaInfoObserver> _observer;
    double _ratio;
    struct CGSize _oriPicSize;
    struct CGSize _minSize;
    struct CGSize _defaultSize;
}

@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=_defaultSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) struct CGSize oriPicSize; // @synthesize oriPicSize=_oriPicSize;
@property(retain, nonatomic) id <QQChatImageMetaInfoObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) _Bool noRoundCorner; // @synthesize noRoundCorner=_noRoundCorner;
- (id)getClipOrScaleImage20PercentOffsetYWebPCompatible:(_Bool)arg1;
- (id)getClipOrScaleImage20PercentOffsetY;
- (void)asyncGetFillImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)getFitSizeImage;
- (id)getFillImageWebPCompatible:(_Bool)arg1;
- (id)getFillImage;
- (id)getScaleImage;
- (struct CGSize)fitSizebyScreenScale:(_Bool)arg1;
- (struct CGSize)fitSize;
- (_Bool)isGif;
- (_Bool)isImageExist;
- (id)GetImagePath;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 ifGif:(unsigned long long)arg2 oriPicSize:(struct CGSize)arg3;
- (id)initWithFilePath:(id)arg1;

@end

