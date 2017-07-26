//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFaceBaseCollectionViewCell.h"

#import "QQLoadObserver.h"

@class NSString, QQFaceLabel, UIActivityIndicatorView, UIImageView;

@interface QQFaceCollectionCell : QQFaceBaseCollectionViewCell <QQLoadObserver>
{
    QQFaceLabel *_faceLabel;
    UIImageView *_faceImageView;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *faceImageView; // @synthesize faceImageView=_faceImageView;
@property(retain, nonatomic) QQFaceLabel *faceLabel; // @synthesize faceLabel=_faceLabel;
- (void)dealloc;
- (void)loader:(id)arg1 didUpdateProgress:(double)arg2 userData:(id)arg3;
- (void)downloadFace;
- (void)refreshUI;
- (void)setFaceCellModel:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

