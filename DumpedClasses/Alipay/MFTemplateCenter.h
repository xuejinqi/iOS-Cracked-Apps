//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableDictionary;

@interface MFTemplateCenter : NSObject
{
    NSMutableDictionary *_templates;
    NSCache *_gcTemplates;
}

+ (id)sharedMFTemplateCenter;
@property(retain, nonatomic) NSCache *gcTemplates; // @synthesize gcTemplates=_gcTemplates;
@property(retain, nonatomic) NSMutableDictionary *templates; // @synthesize templates=_templates;
- (void).cxx_destruct;
- (void)printTemplateInfo;
- (void)clearTemplatesWithTids:(id)arg1 appId:(id)arg2 biz:(id)arg3;
- (void)clearWithFilePath:(id)arg1;
- (void)clearWithAppId:(id)arg1 biz:(id)arg2;
- (void)clearAll;
- (_Bool)matchingTemplate:(id)arg1 filePath:(id)arg2;
- (_Bool)matchingTemplate:(id)arg1 appId:(id)arg2 biz:(id)arg3;
- (id)loadTemplateWithId:(id)arg1 forceDisk:(_Bool)arg2 appIdentifer:(id)arg3 biz:(id)arg4 html:(id)arg5 css:(id)arg6 binding:(id)arg7 js:(id)arg8;
- (id)loadTemplateWithId:(id)arg1 forceDisk:(_Bool)arg2 filePath:(id)arg3;
- (id)loadTemplateWithId:(id)arg1 forceDisk:(_Bool)arg2 appIdentifer:(id)arg3 biz:(id)arg4;
- (id)init;

@end

