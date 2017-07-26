//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OSEARCHToString.h"

@class NSArray, NSString;

@interface O2OSEARCHSuggestInfo : O2OSEARCHToString
{
    NSString *_suggestId;
    NSString *_word;
    NSString *_desc;
    NSString *_subTitle;
    NSString *_icon;
    NSString *_type;
    NSString *_target;
    NSArray *_pluginInfos;
    NSArray *_pluginImages;
}

+ (Class)pluginImagesElementClass;
+ (Class)pluginInfosElementClass;
@property(retain, nonatomic) NSArray *pluginImages; // @synthesize pluginImages=_pluginImages;
@property(retain, nonatomic) NSArray *pluginInfos; // @synthesize pluginInfos=_pluginInfos;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) NSString *suggestId; // @synthesize suggestId=_suggestId;
- (void).cxx_destruct;

@end

