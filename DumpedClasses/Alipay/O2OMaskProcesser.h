//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class O2OMaskView, UITabBarItem, UIViewController;

@interface O2OMaskProcesser : NSObject
{
    _Bool _hasBeenChecked;
    _Bool _isMaskShowing;
    O2OMaskView *_maskView;
    UITabBarItem *_o2oTabBarItem;
    UIViewController *_o2oIndexViewController;
}

@property(nonatomic) _Bool isMaskShowing; // @synthesize isMaskShowing=_isMaskShowing;
@property(nonatomic) _Bool hasBeenChecked; // @synthesize hasBeenChecked=_hasBeenChecked;
@property(nonatomic) __weak UIViewController *o2oIndexViewController; // @synthesize o2oIndexViewController=_o2oIndexViewController;
@property(nonatomic) __weak UITabBarItem *o2oTabBarItem; // @synthesize o2oTabBarItem=_o2oTabBarItem;
@property(retain, nonatomic) O2OMaskView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasShowing;
- (void)hideMaskView;
- (void)showMaskView;
- (void)hideRedPoint;
- (void)hideRedPointWithBusiness:(id)arg1;
- (void)showRedPointWithBusiness:(id)arg1 param:(id)arg2;
- (void)showRedPointWithBusiness:(id)arg1;
- (void)showRedPointWithContent:(id)arg1 business:(id)arg2 param:(id)arg3;
- (void)showRedPointWithContent:(id)arg1 business:(id)arg2;
- (_Bool)available;
- (void)check;
- (void)process;
- (_Bool)canShow;
- (_Bool)isMainlandViewController;

@end

