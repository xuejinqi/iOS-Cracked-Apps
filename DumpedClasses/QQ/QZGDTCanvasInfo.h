//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface QZGDTCanvasInfo : NSObject
{
    NSString *_id;
    NSString *_canvasName;
    long long _animationType;
    double _basicWidth;
    long long _basicRootFontSize;
    NSMutableArray *_pageList;
}

+ (id)findPreLoadImageUrls:(id)arg1;
+ (_Bool)isValidJsonInfo:(id)arg1;
- (void).cxx_destruct;
- (void)fillAdCanvasData:(id)arg1;
- (id)pageList;

@end

