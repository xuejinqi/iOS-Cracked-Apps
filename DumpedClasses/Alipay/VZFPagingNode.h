//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZFNode.h"

@class NSArray;

@interface VZFPagingNode : VZFNode
{
    VZFNode *_pageControlNode;
    NSArray *_viewsCache;
    vector_dffc2367 _children;
    vector_48e1f07d _childrenLayout;
    struct PagingNodeSpecs _pagingNodeSpecs;
}

+ (id)newWithPagingAttributes:(const struct PagingNodeSpecs *)arg1 NodeSpecs:(const struct NodeSpecs *)arg2 Children:(vector_dffc2367)arg3;
@property(retain, nonatomic) NSArray *viewsCache; // @synthesize viewsCache=_viewsCache;
@property(readonly, nonatomic) vector_48e1f07d childrenLayout; // @synthesize childrenLayout=_childrenLayout;
@property(readonly, nonatomic) VZFNode *pageControlNode; // @synthesize pageControlNode=_pageControlNode;
@property(readonly, nonatomic) vector_dffc2367 children; // @synthesize children=_children;
@property(readonly, nonatomic) struct PagingNodeSpecs pagingNodeSpecs; // @synthesize pagingNodeSpecs=_pagingNodeSpecs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct NodeLayout)nodeDidLayout;

@end

