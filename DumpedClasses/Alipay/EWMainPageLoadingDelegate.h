//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EWBaseSectionDelegate.h"

@class EWMainPageViewModel, UIImageView;

@interface EWMainPageLoadingDelegate : EWBaseSectionDelegate
{
    UIImageView *_loadImageView;
}

@property(retain, nonatomic) UIImageView *loadImageView; // @synthesize loadImageView=_loadImageView;
- (void).cxx_destruct;
- (_Bool)hasData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(retain, nonatomic) EWMainPageViewModel *viewModel;

@end

