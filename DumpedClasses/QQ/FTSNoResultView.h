//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NIAttributedLabel;

@interface FTSNoResultView : UITableView
{
    NIAttributedLabel *_noResultLabel;
    id <FTSNoResultsProtocol> _ftsNoResultsProtocol;
}

@property(nonatomic) __weak id <FTSNoResultsProtocol> ftsNoResultsProtocol; // @synthesize ftsNoResultsProtocol=_ftsNoResultsProtocol;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)ftsShowNoResultWithWording:(id)arg1 highLightWord:(id)arg2 keywordRange:(struct _NSRange)arg3;
- (void)_ftsShowNoResultWithWording:(id)arg1 highLightWord:(id)arg2 keywordRange:(struct _NSRange)arg3;
- (void)loadNoResults;
- (id)initWithFrame:(struct CGRect)arg1;

@end

