//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ARERPCEngine, NSString, UIImage;

@interface APScanAREnvelope : NSObject
{
    _Bool _scanARFrame;
    UIImage *_currentImage;
    NSString *_uploadCurrentImageTaskId;
    ARERPCEngine *_rpcEngine;
}

+ (void)showArEnvelopeToSuperView:(id)arg1 scanEvelopeParams:(CDUnknownBlockType)arg2 arType:(id)arg3 arModelInfo:(id)arg4;
@property(retain, nonatomic) ARERPCEngine *rpcEngine; // @synthesize rpcEngine=_rpcEngine;
@property(retain, nonatomic) NSString *uploadCurrentImageTaskId; // @synthesize uploadCurrentImageTaskId=_uploadCurrentImageTaskId;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic, setter=setScanARFrame:) _Bool scanARFrame; // @synthesize scanARFrame=_scanARFrame;
- (void).cxx_destruct;
- (void)dealloc;

@end

