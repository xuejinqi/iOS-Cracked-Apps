//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FLView;

@interface TBStoryInteractiveTapNaviView : UIView
{
    FLView *_stateView;
    unsigned int _currType;
    id <TBStoryInteractiveTapNaviDelegate> _delegate;
}

@property(nonatomic) __weak id <TBStoryInteractiveTapNaviDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int currType; // @synthesize currType=_currType;
- (void).cxx_destruct;
- (void)toggleTapWithType:(unsigned int)arg1;
- (void)changeContentWithType:(unsigned int)arg1;
- (void)animateWithType:(unsigned int)arg1;
- (void)cleanBtnState;
- (void)onTap:(id)arg1;
- (struct LBCorner)getLBWithType:(unsigned int)arg1;
- (id)createTapWithType:(unsigned int)arg1 text:(id)arg2;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned int)arg2;

@end

