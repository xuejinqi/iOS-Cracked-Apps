//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBStrokeTextureDownloadManager : NSObject
{
}

+ (void)setTextureVersion:(long long)arg1;
+ (long long)textureVersion;
+ (id)versionKey;
+ (void)saveTextureModels:(id)arg1;
+ (id)loadTextureModelsData;
+ (id)modelsDataPath;
+ (id)createDownloadDirectory;
+ (void)downloadWithModel:(id)arg1;
+ (_Bool)deleteTexturePack:(id)arg1;

@end

