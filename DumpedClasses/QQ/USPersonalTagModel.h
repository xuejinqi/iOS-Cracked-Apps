//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSMutableArray;

@interface USPersonalTagModel : QQModel
{
    unsigned int _addQuotaCount;
    unsigned int _maxPhotoQuota;
    unsigned int _totalPhoto;
    unsigned int _totalPraise;
    unsigned int _unReadPraise;
    NSMutableArray *_labelInfos;
    unsigned long long _lastPraiseUin;
}

@property(nonatomic) unsigned long long lastPraiseUin; // @synthesize lastPraiseUin=_lastPraiseUin;
@property(nonatomic) unsigned int unReadPraise; // @synthesize unReadPraise=_unReadPraise;
@property(nonatomic) unsigned int totalPraise; // @synthesize totalPraise=_totalPraise;
@property(nonatomic) unsigned int totalPhoto; // @synthesize totalPhoto=_totalPhoto;
@property(nonatomic) unsigned int maxPhotoQuota; // @synthesize maxPhotoQuota=_maxPhotoQuota;
@property(nonatomic) unsigned int addQuotaCount; // @synthesize addQuotaCount=_addQuotaCount;
@property(retain, nonatomic) NSMutableArray *labelInfos; // @synthesize labelInfos=_labelInfos;
- (void).cxx_destruct;
- (id)description;

@end

