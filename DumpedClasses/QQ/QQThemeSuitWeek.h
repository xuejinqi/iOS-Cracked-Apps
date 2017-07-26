//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface QQThemeSuitWeek : NSObject <NSCoding>
{
    unsigned int _themeSuitId;
    unsigned long long _themeStartTime;
    NSMutableArray *_themeIdArray;
}

@property(nonatomic) unsigned long long themeStartTime; // @synthesize themeStartTime=_themeStartTime;
@property(retain, nonatomic) NSMutableArray *themeIdArray; // @synthesize themeIdArray=_themeIdArray;
@property(nonatomic) unsigned int themeSuitId; // @synthesize themeSuitId=_themeSuitId;
- (unsigned int)getThemeId:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithSuitId:(unsigned int)arg1 startTime:(unsigned long long)arg2 themeIdArr:(id)arg3;

@end

