//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView, UILabel;

@interface PAPayersView : UIView
{
    NSArray *_payers;
    UIImageView *_headerImageView;
    UIImageView *_headerImageBaseView;
    UILabel *_nameLabel;
    UILabel *_accountLabel;
}

@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headerImageBaseView; // @synthesize headerImageBaseView=_headerImageBaseView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) NSArray *payers; // @synthesize payers=_payers;
- (void).cxx_destruct;
- (void)updateUI;
- (void)headerImageViewTaped:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

