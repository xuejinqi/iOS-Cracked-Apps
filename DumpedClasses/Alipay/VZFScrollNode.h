//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZFNode.h"

@interface VZFScrollNode : VZFNode
{
    struct ScrollNodeSpecs _scrollNodeSpecs;
    struct CGSize _contentSize;
    vector_dffc2367 _children;
    struct StackNodeSpecs _stackNodeSpecs;
}

+ (id)newWithScrollAttributes:(const struct ScrollNodeSpecs *)arg1 StackAttributes:(const struct StackNodeSpecs *)arg2 NodeSpecs:(const struct NodeSpecs *)arg3 BackingViewClass:(Class)arg4 Children:(vector_dffc2367)arg5;
+ (id)newWithScrollAttributes:(const struct ScrollNodeSpecs *)arg1 StackAttributes:(const struct StackNodeSpecs *)arg2 NodeSpecs:(const struct NodeSpecs *)arg3 Children:(vector_dffc2367)arg4;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) vector_dffc2367 children; // @synthesize children=_children;
@property(readonly, nonatomic) struct StackNodeSpecs stackNodeSpecs; // @synthesize stackNodeSpecs=_stackNodeSpecs;
@property(readonly, nonatomic) struct ScrollNodeSpecs scrollNodeSpecs; // @synthesize scrollNodeSpecs=_scrollNodeSpecs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct NodeLayout)nodeDidLayout;

@end

