//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "OperatotViewDelegate.h"

@class NSString, OperatorView, ReadInJoyChannelArticle;

@interface ReadInJoySocialOperatorView : UIView <OperatotViewDelegate>
{
    OperatorView *commentView;
    OperatorView *likeView;
    OperatorView *biuView;
    ReadInJoyChannelArticle *_feedsModel;
}

@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)dealloc;
- (void)onOperatorViewClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

