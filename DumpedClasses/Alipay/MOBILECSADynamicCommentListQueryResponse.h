//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSABaseRpcResponse.h"

@class NSArray, NSString;

@interface MOBILECSADynamicCommentListQueryResponse : MOBILECSABaseRpcResponse
{
    NSString *_commentGrade;
    NSArray *_blockList;
}

+ (Class)blockListElementClass;
@property(retain, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
@property(retain, nonatomic) NSString *commentGrade; // @synthesize commentGrade=_commentGrade;
- (void).cxx_destruct;

@end

