//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZanTipsViewButtonItem : NSObject
{
    NSString *_text;
    CDUnknownBlockType _clickCallBack;
    long long _style;
}

+ (id)buttonItemWithText:(id)arg1 callback:(CDUnknownBlockType)arg2 style:(long long)arg3;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType clickCallBack; // @synthesize clickCallBack=_clickCallBack;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

