//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class MVTableViewDelegateProxy;

@interface MVTableView : UITableView
{
    MVTableViewDelegateProxy *_delegateProxy;
}

@property(retain, nonatomic) MVTableViewDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

