//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface QZVideoFeedsTouchView : UIView
{
    id <QZVideoFeedsTouchViewDelegate> _delegate;
    double _lastEventTimestamp;
}

@property(nonatomic) double lastEventTimestamp; // @synthesize lastEventTimestamp=_lastEventTimestamp;
@property(nonatomic) __weak id <QZVideoFeedsTouchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

