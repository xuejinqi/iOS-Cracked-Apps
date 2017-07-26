//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface CTActionToolView : UIView
{
    _Bool _disableActions;
    id <CTActionToolViewDelegate> _actionDelegate;
    UIButton *_share;
    UIButton *_collect;
    UIButton *_delete;
}

+ (id)defaultActionToolView;
@property(retain, nonatomic) UIButton *delete; // @synthesize delete=_delete;
@property(retain, nonatomic) UIButton *collect; // @synthesize collect=_collect;
@property(retain, nonatomic) UIButton *share; // @synthesize share=_share;
@property(nonatomic) _Bool disableActions; // @synthesize disableActions=_disableActions;
@property(nonatomic) __weak id <CTActionToolViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)actionToolView:(id)arg1 didPerformSEL:(int)arg2;
- (void)clickActionButton:(id)arg1;
- (void)updateToolViewOnlyDelete:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

