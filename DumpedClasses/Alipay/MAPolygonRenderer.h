//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAOverlayPathRenderer.h"

@class MAPolygon;

@interface MAPolygonRenderer : MAOverlayPathRenderer
{
}

- (id)initWithPolygon:(id)arg1;
- (void)glRender;
- (void)referenceDidChange;
@property(readonly, nonatomic) MAPolygon *polygon;

@end

