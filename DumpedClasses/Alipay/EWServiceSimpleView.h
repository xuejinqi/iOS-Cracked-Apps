//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWBaseView.h"

@class EWServiceViewModel, UIImageView, UILabel;

@interface EWServiceSimpleView : EWBaseView
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)loadData:(id)arg1;
- (void)initView;
- (void)tapGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) EWServiceViewModel *viewModel;

@end

