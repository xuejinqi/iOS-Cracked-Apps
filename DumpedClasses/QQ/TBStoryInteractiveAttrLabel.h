//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBStoryInteractiveAttrLabel : NSObject
{
}

+ (id)layoutFailCommentAttrWithString:(id)arg1;
+ (id)layoutLikeNormalAttrWithString:(id)arg1;
+ (id)layoutNormalAttrWithString:(id)arg1;
+ (id)layoutNickAttrWithString:(id)arg1;
+ (id)createParagraphStyle;
+ (void)insertCommentFaceWithLabel:(id)arg1 faceList:(id)arg2;
+ (void)insertCommentIconWithLabel:(id)arg1 model:(id)arg2 string:(id)arg3;
+ (id)parseFaceText:(id)arg1 startIndex:(long long)arg2;
+ (id)spliceCommentAttrTextWithLabel:(id)arg1 model:(id)arg2;
+ (double)calcCommentHeightWithWidth:(double)arg1 model:(id)arg2;
+ (id)calcCommentListHeightWithWidth:(double)arg1 model:(id)arg2;
+ (id)createCommentAttrLabelWithSize:(struct CGSize)arg1;
+ (void)insertLikeIconWithLabel:(id)arg1 likeList:(id)arg2 string:(id)arg3;
+ (id)createLikeStringWithLikeList:(id)arg1 likeNickStr:(id)arg2 totalNum:(unsigned int)arg3 showType:(long long)arg4;
+ (id)createLikeNickStringWithLikeList:(id)arg1;
+ (id)spliceLikeAttrTextWithLabel:(id)arg1 likeModel:(id)arg2 showType:(long long)arg3;
+ (double)calcLikeAttrLabelWithWidth:(double)arg1 likeModel:(id)arg2 showType:(long long)arg3;
+ (id)createLikeAttrLabelWithSize:(struct CGSize)arg1;

@end

