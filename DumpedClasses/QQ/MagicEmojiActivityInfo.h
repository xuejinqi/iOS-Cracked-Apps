//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MagicEmojiActivityInfo : NSObject
{
    NSString *_uin;
    NSString *_uinInfoKey;
}

+ (id)infoForLatest;
+ (id)infoWithCurrentUin;
+ (id)infoWithUin:(id)arg1;
@property(copy, nonatomic) NSString *uinInfoKey; // @synthesize uinInfoKey=_uinInfoKey;
@property(readonly, copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (id)gifFilePath;
- (id)imgFilePath;
- (id)p_kFolderPath;
- (id)p_filePathForName:(id)arg1;
- (id)gifUrl;
- (id)imgUrl;
- (id)p_urlForName:(id)arg1;
- (id)description;
- (id)p_objectForKey:(id)arg1;
- (void)p_setObject:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSString *gifName;
- (void)p_removeFileWithName:(id)arg1;
- (void)p_removeCacheFileName:(id)arg1;
@property(copy, nonatomic) NSString *imgName;
@property(copy, nonatomic) NSString *activityUrl;
@property(nonatomic) long long version;
@property(nonatomic) _Bool showActivityBtn;
- (id)image;
- (id)initWithUin:(id)arg1;

@end

