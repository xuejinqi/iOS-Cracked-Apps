//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCoding.h"

@class NSString;

@interface PGCStoryShareModel : QQModel <NSCoding>
{
    NSString *_storyId;
    NSString *_coverURL;
    NSString *_logoURL;
    NSString *_title;
    NSString *_themeColor;
}

@property(retain, nonatomic) NSString *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(retain, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(retain, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
- (void).cxx_destruct;

@end

