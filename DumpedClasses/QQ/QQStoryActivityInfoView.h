//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface QQStoryActivityInfoView : UIView
{
    UILabel *_title;
    UIImageView *_leftLine;
    UIImageView *_rightLine;
    UILabel *_joinLabel;
    UILabel *_describeInfo;
    double _maxWidth;
}

- (struct CGSize)getSizeWithLabel:(id)arg1 withText:(id)arg2 maxWidth:(double)arg3;
- (struct CGSize)setModel:(id)arg1;
- (void)doInitUI;
- (void)dealloc;
- (id)initWithMaxWidth:(double)arg1;

@end

