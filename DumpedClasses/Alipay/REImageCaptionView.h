//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEECaptionView.h"

@class UILabel;

@interface REImageCaptionView : BEECaptionView
{
    UILabel *_hintLabel;
}

@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupCaption;

@end

