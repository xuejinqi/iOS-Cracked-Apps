//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComicInfoModel, ComicSectionModel, ComicSectionPicInfoModel, NSArray, NSArray<ComicSectionPicInfoModel>, NSError, NSString, UIImage;

@protocol QQVIPFunctionComicReaderPatchLogicDelegate <NSObject>

@optional
- (_Bool)shouldDownloadImageForComic:(ComicInfoModel *)arg1 andSection:(ComicSectionModel *)arg2 andPicInfo:(ComicSectionPicInfoModel *)arg3 andIndex:(unsigned long long)arg4;
- (void)getPicImageProcess:(double)arg1 pageIndex:(long long)arg2;
- (void)getPicImageSuccess:(UIImage *)arg1 pageIndex:(long long)arg2 sectionID:(NSString *)arg3;
- (void)getPicImageFailed:(long long)arg1;
- (void)getPicInfoFailed:(long long)arg1 error:(NSError *)arg2;
- (void)getPicInfoSuccess:(NSString *)arg1 picInfoModels:(NSArray<ComicSectionPicInfoModel> *)arg2;
- (void)getPatchSectionInfoFailed:(long long)arg1 error:(NSError *)arg2;
- (void)getPatchSectionInfoSuccess:(ComicInfoModel *)arg1 sectionModels:(NSArray *)arg2;
- (void)getPatchInfoSuccess:(ComicInfoModel *)arg1 sectionInfoModel:(ComicSectionModel *)arg2 picInfoModels:(NSArray<ComicSectionPicInfoModel> *)arg3;
- (void)getPatchInfoFailed:(long long)arg1 error:(NSError *)arg2;
@end

