//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class TBQQUserInfoModel, TBStoryCardVideoInfoModel;

@interface TBStoryNormalCardInfoModel : QQModel
{
    TBQQUserInfoModel *_owner;
    TBStoryCardVideoInfoModel *_cardVideoInfo;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) TBStoryCardVideoInfoModel *cardVideoInfo; // @synthesize cardVideoInfo=_cardVideoInfo;
@property(retain, nonatomic) TBQQUserInfoModel *owner; // @synthesize owner=_owner;
- (void)dealloc;

@end

