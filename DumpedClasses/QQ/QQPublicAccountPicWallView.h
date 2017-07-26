//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PubAccountFaceWallImageDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface QQPublicAccountPicWallView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, PubAccountFaceWallImageDelegate>
{
    NSArray *_picConfigInfo;
    NSMutableArray *_picWalls;
    UIScrollView *_photoScrollView;
    id <QQPubImageDelegate> _picWallDelegate;
}

@property(nonatomic) id <QQPubImageDelegate> picWallDelegate; // @synthesize picWallDelegate=_picWallDelegate;
- (_Bool)isSupportRightDragToGoBack;
- (void)imageTouch:(id)arg1;
- (void)layoutSubviews;
- (void)reloadImagesConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

