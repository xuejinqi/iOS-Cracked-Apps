//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface ALUThemeManager : NSObject
{
    NSDictionary *_themeAttributes;
    NSArray *_respondClasseses;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSArray *respondClasseses; // @synthesize respondClasseses=_respondClasseses;
@property(retain, nonatomic) NSDictionary *themeAttributes; // @synthesize themeAttributes=_themeAttributes;
- (void).cxx_destruct;
- (void)applyThemes;

@end

