//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIDetector.h"

@interface CIDetector (OCRDetector)
+ (id)getInstance;
- (id)filteredImageUsingContrastFilterOnImage:(id)arg1;
- (id)drawHighlightOverlayForPoints:(id)arg1 topLeft:(struct CGPoint)arg2 topRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4 bottomRight:(struct CGPoint)arg5;
- (id)_wordRectangle:(id)arg1;
- (id)_biggestRectangleInRectangles:(id)arg1;
- (id)biggestRectangleInImage:(id)arg1;
@end

