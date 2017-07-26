//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber;

@interface EMJStickerManager : NSObject
{
    NSNumber *_version;
    NSDictionary *_stickerSetCache;
    NSArray *_shapeItems;
    NSArray *_stickerSetItems;
    NSMutableDictionary *_downloadingRequestIDs;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
+ (id)bootstrapSharedInstance;
+ (id)templateRootPath;
@property(retain, nonatomic) NSMutableDictionary *downloadingRequestIDs; // @synthesize downloadingRequestIDs=_downloadingRequestIDs;
@property(readonly, nonatomic) NSArray *stickerSetItems; // @synthesize stickerSetItems=_stickerSetItems;
@property(readonly, nonatomic) NSArray *shapeItems; // @synthesize shapeItems=_shapeItems;
- (void).cxx_destruct;
- (void)_stickerSetDownloaded:(id)arg1;
- (id)stickerSetWithId:(id)arg1;
- (void)resetStickerSetsWithPackageList:(id)arg1;
- (void)downloadTemplateWithStickerSet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

