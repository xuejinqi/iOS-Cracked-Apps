//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, QZTickerLabel, UILabel;

@interface QZPhotoClassifyView : UIView
{
    QZTickerLabel *_numberLabel;
    UILabel *_typeLabel;
    id <QZPhotoClassifyViewDelegate> _delegate;
    NSMutableArray *_imageViews;
    UIView *_imageContentView;
}

@property(retain, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) __weak id <QZPhotoClassifyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

