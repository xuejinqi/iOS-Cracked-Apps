//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TrackerUIBase.h"

@interface TrackerView : TrackerUIBase
{
    struct CGPoint _touchInPoint;
    struct CGRect _frame;
}

+ (id)TRStringFromCGRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGPoint touchInPoint; // @synthesize touchInPoint=_touchInPoint;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)traceDescription;
- (id)initWithUIView:(id)arg1 uiTouchInPoint:(struct CGPoint)arg2;

@end

