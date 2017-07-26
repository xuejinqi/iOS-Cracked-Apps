//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIView;

@interface FLRowManager : NSObject
{
    NSMutableArray *_rowsArr;
    UIView *_ownerView;
    double _maxWidth;
    double _maxHeight;
}

@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak UIView *ownerView; // @synthesize ownerView=_ownerView;
- (void).cxx_destruct;
- (void)calcMaxWidth;
- (double)getOnwerViewInnerHeight;
- (double)getOnwerViewInnerWidth;
- (id)createRowWithView:(id)arg1;
- (id)insertNewRowWithView:(id)arg1 beforeRow:(id)arg2;
- (id)lastRow;
- (id)firstRow;
- (void)removeRow:(id)arg1;
- (id)appendNewRowWithView:(id)arg1 previousRow:(id)arg2;
- (void)appendView:(id)arg1;
- (void)recurReflowNextSiblingTopAndParentHeight:(id)arg1;
- (void)reflowOwnerViewHeight;
- (void)reflowAllRow;
- (void)reflowSubView;
- (struct FLSizeIsChange)reflowOwnerViewSizeWithReflowInner:(_Bool)arg1;
- (void)crush2PreviousRow:(id)arg1;
- (void)crush2NextRow:(id)arg1;
- (void)reflowWhenXChange:(id)arg1 need2ReflowSubView:(_Bool)arg2;
- (void)reflowWhenYChange:(id)arg1 need2reflowSelfTop:(_Bool)arg2;
- (id)initWithView:(id)arg1;

@end

