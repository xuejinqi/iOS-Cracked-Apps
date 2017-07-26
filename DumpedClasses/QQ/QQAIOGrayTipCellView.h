//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCellView.h"

#import "NIAttributedLabelDelegate.h"

@class NIAttributedLabel, NSMutableArray, NSMutableAttributedString, NSString, QQAIOGrayTipModel;

@interface QQAIOGrayTipCellView : QQAIOCellView <NIAttributedLabelDelegate>
{
    NIAttributedLabel *_tipLabel;
    NSMutableAttributedString *_content;
    _Bool _touchBegan;
    NSMutableArray *_accessibleElements;
}

@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)getGrayTipEventHandler;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)insertIcon:(id)arg1 tipLabel:(id)arg2;
- (void)updateIcon;
- (void)updateClick;
- (void)updateTipLable;
- (void)updateHighLight;
- (void)updateContent;
- (void)updateCellView;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(nonatomic) __weak QQAIOGrayTipModel *aioModel; // @dynamic aioModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

