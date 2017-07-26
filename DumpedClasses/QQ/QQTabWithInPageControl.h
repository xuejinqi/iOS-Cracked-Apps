//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, UIColor, UIImageView, UIView;

@interface QQTabWithInPageControl : UIControl
{
    unsigned long long _selectedSegmentIndex;
    long long _numberOfSegments;
    int _xo;
    UIColor *_normalTitleColor;
    UIColor *_selectedTitledColor;
    UIColor *_disableTitleColor;
    UIImageView *_highlightLineView;
    NSArray *_tabWithInPageButtons;
    NSArray *_titles;
    _Bool _followTheme;
    UIView *lineView;
}

- (void).cxx_destruct;
- (void)setSplitLineColor:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)setAccessibilityLabels:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (id)buttonAtIndex:(int)arg1;
- (void)setTitle:(id)arg1 atIndex:(int)arg2;
- (_Bool)isMarkedAtIndex:(int)arg1;
- (void)setMarked:(_Bool)arg1 atIndex:(int)arg2;
- (_Bool)showNewAtIndex:(int)arg1;
- (void)setShowNew:(_Bool)arg1 atIndex:(int)arg2;
- (id)iconAtIndex:(int)arg1;
- (void)setIcon:(id)arg1 atIndex:(int)arg2;
- (void)setDisableTitleColor:(id)arg1;
- (void)setSelectedTitledColor:(id)arg1;
- (void)setNormalTitleColor:(id)arg1;
- (void)setDisableStatus:(unsigned long long)arg1 disableStatus:(_Bool)arg2;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @dynamic selectedSegmentIndex;
@property(retain, nonatomic) NSArray *titles; // @dynamic titles;
- (id)initWithTitles:(struct CGRect)arg1 Titles:(id)arg2 followTheme:(_Bool)arg3;

// Remaining properties
@property(readonly, nonatomic) _Bool followTheme; // @dynamic followTheme;
@property(readonly, nonatomic) long long numberOfSegments; // @dynamic numberOfSegments;

@end

