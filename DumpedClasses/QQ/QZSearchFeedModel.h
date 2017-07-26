//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSArray, NSString, QzoneFeedModel;

@interface QZSearchFeedModel : QZoneModel
{
    _Bool _isHaveVideo;
    _Bool _cellSeparator;
    int _type;
    unsigned int _qzTotalpicNum;
    NSString *_qzFeedId;
    NSString *_nickName;
    NSString *_Uin;
    NSString *_remark;
    NSArray *_keywords;
    NSString *_detail;
    NSString *_feedTime;
    NSString *_title;
    NSArray *_photoList;
    NSString *_jumpUrl;
    NSString *_qzResultId;
    NSString *_jumeMoreUlr;
    QzoneFeedModel *_feedModel;
}

@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
@property(nonatomic) _Bool cellSeparator; // @synthesize cellSeparator=_cellSeparator;
@property(retain, nonatomic) NSString *jumeMoreUlr; // @synthesize jumeMoreUlr=_jumeMoreUlr;
@property(retain, nonatomic) NSString *qzResultId; // @synthesize qzResultId=_qzResultId;
@property(nonatomic) unsigned int qzTotalpicNum; // @synthesize qzTotalpicNum=_qzTotalpicNum;
@property(nonatomic) _Bool isHaveVideo; // @synthesize isHaveVideo=_isHaveVideo;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *photoList; // @synthesize photoList=_photoList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *feedTime; // @synthesize feedTime=_feedTime;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *Uin; // @synthesize Uin=_Uin;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *qzFeedId; // @synthesize qzFeedId=_qzFeedId;
- (void).cxx_destruct;
- (id)getValueByKey:(id)arg1 fromText:(id)arg2;
- (id)analyzeURL:(id)arg1;
- (id)analyzeNick:(id)arg1;
- (id)getFilteredText:(id)arg1;
- (double)imageHeight;
- (double)detailHeight;
- (double)titleHeight;
- (double)nickNameHeight;
@property(readonly, nonatomic) double viewHeight;
- (id)init;

@end

