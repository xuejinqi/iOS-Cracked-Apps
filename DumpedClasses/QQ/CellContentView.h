//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQAvatarView, QQDiscussCell, UIImageView;

@interface CellContentView : UIView
{
    QQDiscussCell *_cell;
    UIImageView *checkBoxView;
    _Bool _highlighted;
    QQAvatarView *_avatarView;
}

@property(readonly, nonatomic) QQAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cell:(id)arg2;

@end

