//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpriteBaseModel.h"

@class NSArray, NSString;

@interface SpriteRoleModel : SpriteBaseModel
{
    unsigned long long bubbleTipsAddr;
    unsigned long long dressIdsAddr;
    unsigned long long AlignTop;
    NSString *_bubbleTips;
    NSArray *_dressIds;
    unsigned long long AlignBottom;
    _Bool _isAIRole;
}

+ (id)backgroundPathWithId:(id)arg1;
+ (id)rolePlayPathWithId:(id)arg1;
+ (id)roleModuleRootPath;
@property(nonatomic) _Bool isAIRole; // @synthesize isAIRole=_isAIRole;
@property(retain, nonatomic) NSArray *dressIds; // @synthesize dressIds=_dressIds;
@property(retain, nonatomic) NSString *bubbleTips; // @synthesize bubbleTips=_bubbleTips;
- (id)getRoleDetailDictionary;
- (id)readBubbleClothModelsWithId:(id)arg1;
- (id)readBubbleClothModels;
- (id)appearanceActionInfoWithId:(long long)arg1;
- (id)readDefaultAction:(long long)arg1;
- (id)readDefaultActionWitType:(id)arg1 needLoadData:(_Bool)arg2;
- (id)readDefaultActionWithPath:(id)arg1 idstr:(id)arg2;
- (void)dealloc;
- (void)moveUnzipRes;
- (void)setLightResWithAnother:(id)arg1;
- (void)setPlayResDataWithAnother:(id)arg1;
- (void)wearPlayRes;
- (void)wearLightRes;
- (id)getPlayResFileUnifiedName;
- (id)getModelFolderName;
- (id)initWithIdStr:(id)arg1;
- (id)initWithNumIdStr:(id)arg1;
- (id)initWithDic:(id)arg1;
- (id)init;

@end

