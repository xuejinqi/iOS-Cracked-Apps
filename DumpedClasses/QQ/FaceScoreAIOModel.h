//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@class FaceScoreMsgExInfo;

@interface FaceScoreAIOModel : QQAIOMsgModel
{
    FaceScoreMsgExInfo *_faceScoreInfo;
    double _cellViewHeight;
}

+ (_Bool)faceScoreMsgTypeCheck:(id)arg1 smMsg:(id)arg2 isLocalCreate:(_Bool)arg3;
+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) double cellViewHeight; // @synthesize cellViewHeight=_cellViewHeight;
@property(retain, nonatomic) FaceScoreMsgExInfo *faceScoreInfo; // @synthesize faceScoreInfo=_faceScoreInfo;
- (void)dealloc;
- (double)cellHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;
- (id)initWithMessageModel:(id)arg1;

@end

