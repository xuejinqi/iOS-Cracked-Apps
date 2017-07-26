//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface O2OBirdTemplateManager : NSObject
{
}

+ (id)templateNameIfFail:(id)arg1;
+ (id)defaultManager;
- (void)deserializeTemplateJson:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)downloadTemplate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 page:(id)arg3 bundleName:(id)arg4;
- (void)bindTemplateJson:(id)arg1 withTemplates:(id)arg2;
- (id)loadLocalTempates:(id)arg1 processItems:(id)arg2 bundleName:(id)arg3 hasFailed:(_Bool *)arg4;
- (id)tplsWithBundleName:(id)arg1 templates:(id)arg2;
- (void)logIfHasFailed:(_Bool)arg1 hasUpdated:(_Bool)arg2 pageName:(id)arg3 failIds:(id)arg4;
- (void)downloadTemplates:(id)arg1 withItems:(id)arg2 completion:(CDUnknownBlockType)arg3 page:(id)arg4 bundleName:(id)arg5;
- (id)queryCacheTemplate:(id)arg1 bundleName:(id)arg2;
- (id)sharedQueue;

@end

