//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface ALPCardVerifyView : UIView
{
    NSArray *_operations;
}

+ (id)operations:(id)arg1 passId:(id)arg2;
@property(readonly, nonatomic) NSArray *operations; // @synthesize operations=_operations;
- (void).cxx_destruct;
- (id)toString:(id)arg1;
- (id)alertTextForOperationMessage:(id)arg1;
- (id)codeForOperationMessage:(id)arg1;
- (id)pageForOperationMessage:(id)arg1 withMaxHeight:(double)arg2;
- (void)createOperation;
- (id)initWithFrame:(struct CGRect)arg1 operations:(id)arg2;

@end

