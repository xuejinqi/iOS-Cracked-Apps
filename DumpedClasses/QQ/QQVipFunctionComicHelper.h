//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface QQVipFunctionComicHelper : NSObject
{
    NSMutableArray *_reqList;
    NSMutableArray *_blockList;
    NSLock *_lock;
    int _xo;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onRespSectionInfo:(id)arg1;
- (void)onRespComicInfo:(id)arg1;
- (void)getComicSectionInfo:(id)arg1 withSectionID:(id)arg2 withLastObj:(id)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getComicSectionInfo:(id)arg1 withSectionID:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getPicInfoArrayAndSectionModel:(id)arg1 withComicModel:(id)arg2 isPreferLocal:(_Bool)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getPicInfoArrayAndSectionModel:(id)arg1 withComicModel:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getPicInfoArray:(id)arg1 withComicModel:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getPicInfoArray:(id)arg1 withComicModel:(id)arg2 isPreferLocal:(_Bool)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getPicInfoArray:(id)arg1 withComicID:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getPicInfoArrayAndModel:(id)arg1 sectionIndex:(long long)arg2 withComicID:(id)arg3 isPreferLocal:(_Bool)arg4 withCompleteBlock:(CDUnknownBlockType)arg5;
- (void)getPicInfoArrayAndModel:(id)arg1 sectionIndex:(unsigned long long)arg2 withComicID:(id)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getPicInfoArrayAndModel:(id)arg1 withComicID:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getSectionModelInfo:(id)arg1 withComicModel:(id)arg2 withLastObj:(id)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getSectionModelArrayInfo:(id)arg1 withComicModel:(id)arg2 withLastObj:(id)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (id)emptySectionModelsBySectionIDs:(id)arg1;
- (id)filterQuerySectionModelIDs:(id)arg1 withComicModel:(id)arg2 withDeleteIDs:(id)arg3;
- (void)getSimpleSectionArrayModelInfo:(id)arg1 withComicModel:(id)arg2 withSimpleMode:(int)arg3 preferLocalData:(_Bool)arg4 withCompleteBlock:(CDUnknownBlockType)arg5;
- (void)getSimpleSectionArrayModelInfo:(id)arg1 withComicID:(id)arg2 withSimpleMode:(int)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getSectionArrayModelInfo:(id)arg1 withComicID:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getSectionModelArrayInfo:(id)arg1 withLastObj:(id)arg2 withComicModel:(id)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getSectionModelInfo:(id)arg1 withComicModel:(id)arg2 isPreferLocal:(_Bool)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getSectionModelInfo:(id)arg1 withComicModel:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getSectionModelInfo:(id)arg1 sectionIndex:(unsigned long long)arg2 withComicID:(id)arg3 withCompleteBlock:(CDUnknownBlockType)arg4;
- (void)getSectionModelInfo:(id)arg1 withComicID:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getComicModelInfo:(id)arg1 isPreferLocal:(_Bool)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)getComicModelInfo:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2;
- (void)updateComicInfo:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2 withLastObj:(id)arg3 withPageInfoModel:(id)arg4 withType:(unsigned long long)arg5;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blockList; // @dynamic blockList;
@property(retain, nonatomic) NSLock *lock; // @dynamic lock;
@property(retain, nonatomic) NSMutableArray *reqList; // @dynamic reqList;

@end

