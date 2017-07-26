//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, QGMapView;

@interface QQAIOTextMapCellView : QQAIOCommonCellView <UIGestureRecognizerDelegate>
{
    double _rectWidth;
    QGMapView *_mapView;
}

@property(retain, nonatomic) QGMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)getMenuItems;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (void)createMapView;
- (void)drawMapViewWithNeedsDisplay;
- (void)layoutSubviews;
- (void)updateCellView;
- (void)willDrawBubble;
- (void)preparePaopao:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

