//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSString;

@interface SpriteGameModel : NSObject
{
    NSString *_idStr;
    NSString *_name;
    NSString *_coverImgUrl;
    NSString *_resUrl;
    NSString *_version;
    NSString *_actionIdStr;
    NSString *_introUrl;
    NSNumber *_iosShow;
    NSString *_iosStartVersion;
    NSString *_iosEndVersion;
    NSString *_rankImgUrl;
    NSMutableArray *_ctcBtnArray;
    NSMutableArray *_groupBtnArray;
    unsigned long long _querySlice;
    NSString *_joinPicName;
    NSString *_startPicName;
    NSString *_endPicName;
    NSString *_listCoverUrl;
    NSString *_bigCoverUrl;
    NSString *_bigCoverBgColor;
    NSString *_lifeImgUrl;
}

@property(retain, nonatomic) NSString *lifeImgUrl; // @synthesize lifeImgUrl=_lifeImgUrl;
@property(retain, nonatomic) NSString *bigCoverBgColor; // @synthesize bigCoverBgColor=_bigCoverBgColor;
@property(retain, nonatomic) NSString *bigCoverUrl; // @synthesize bigCoverUrl=_bigCoverUrl;
@property(retain, nonatomic) NSString *listCoverUrl; // @synthesize listCoverUrl=_listCoverUrl;
@property(retain, nonatomic) NSString *endPicName; // @synthesize endPicName=_endPicName;
@property(retain, nonatomic) NSString *startPicName; // @synthesize startPicName=_startPicName;
@property(retain, nonatomic) NSString *joinPicName; // @synthesize joinPicName=_joinPicName;
@property(nonatomic) unsigned long long querySlice; // @synthesize querySlice=_querySlice;
@property(retain, nonatomic) NSMutableArray *groupBtnArray; // @synthesize groupBtnArray=_groupBtnArray;
@property(retain, nonatomic) NSMutableArray *ctcBtnArray; // @synthesize ctcBtnArray=_ctcBtnArray;
@property(retain, nonatomic) NSString *rankImgUrl; // @synthesize rankImgUrl=_rankImgUrl;
@property(retain, nonatomic) NSString *iosEndVersion; // @synthesize iosEndVersion=_iosEndVersion;
@property(retain, nonatomic) NSString *iosStartVersion; // @synthesize iosStartVersion=_iosStartVersion;
@property(retain, nonatomic) NSNumber *iosShow; // @synthesize iosShow=_iosShow;
@property(retain, nonatomic) NSString *introUrl; // @synthesize introUrl=_introUrl;
@property(retain, nonatomic) NSString *actionIdStr; // @synthesize actionIdStr=_actionIdStr;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(retain, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;
- (void)dealloc;
- (id)initWithDict:(id)arg1;

@end

