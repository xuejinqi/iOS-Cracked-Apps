//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString;

@interface QQFlappyEggConfigModel : QQModel
{
    _Bool _isCrazyMode;
    _Bool _disabled;
    NSString *_configID;
    NSArray *_keywords;
    long long _comboLimit;
    long long _flappyEggLimit;
    NSArray *_flappyEggImages;
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool isCrazyMode; // @synthesize isCrazyMode=_isCrazyMode;
@property(retain, nonatomic) NSArray *flappyEggImages; // @synthesize flappyEggImages=_flappyEggImages;
@property(nonatomic) long long flappyEggLimit; // @synthesize flappyEggLimit=_flappyEggLimit;
@property(nonatomic) long long comboLimit; // @synthesize comboLimit=_comboLimit;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *configID; // @synthesize configID=_configID;
- (void).cxx_destruct;

@end

