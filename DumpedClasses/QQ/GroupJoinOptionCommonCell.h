//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface GroupJoinOptionCommonCell : UITableViewCell
{
    UILabel *_titleLbl;
    UIImageView *_tickIcon;
    UIImageView *_expandIcon;
}

- (void)setText:(id)arg1;
- (id)imageRotated:(id)arg1 degrees:(double)arg2;
- (void)setExpanded:(int)arg1;
- (void)setTicked:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

