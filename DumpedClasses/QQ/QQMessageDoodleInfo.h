//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface QQMessageDoodleInfo : QQModel
{
    unsigned int _uint32Offset;
    unsigned int _uintGifID;
    NSString *_resID;
    NSString *_resMd5;
    NSString *_doodleFilePath;
    NSString *_doodleFileName;
    NSString *_doodleUrl;
    NSString *_doodleMd5;
}

+ (id)parseFromJson:(id)arg1;
+ (id)toJson:(id)arg1;
@property(retain, nonatomic) NSString *doodleMd5; // @synthesize doodleMd5=_doodleMd5;
@property(retain, nonatomic) NSString *doodleUrl; // @synthesize doodleUrl=_doodleUrl;
@property(nonatomic) unsigned int uintGifID; // @synthesize uintGifID=_uintGifID;
@property(nonatomic) unsigned int uint32Offset; // @synthesize uint32Offset=_uint32Offset;
@property(retain, nonatomic) NSString *doodleFileName; // @synthesize doodleFileName=_doodleFileName;
@property(retain, nonatomic) NSString *doodleFilePath; // @synthesize doodleFilePath=_doodleFilePath;
@property(retain, nonatomic) NSString *resMd5; // @synthesize resMd5=_resMd5;
@property(retain, nonatomic) NSString *resID; // @synthesize resID=_resID;
- (void)parseFromJson:(id)arg1;
- (id)toJson;
- (_Bool)isValidModel;
- (void)getValue:(id)arg1;
- (void)setJsonValue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

