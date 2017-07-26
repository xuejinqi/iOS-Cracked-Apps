//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface CharmInfoModel : QQModel
{
    _Bool _popFlag;
    _Bool _showCharmLevel;
    _Bool _showTipsAnimation;
    unsigned int _charmRank;
    unsigned int _charmOld;
    unsigned int _charmLevelOld;
    unsigned int _profPercentOld;
    unsigned int _charm;
    unsigned int _charmLevel;
    unsigned int _profPercent;
    unsigned int _nextLevelThreshold;
    unsigned int _curLevelCharm;
    unsigned int _charmLevelLimit;
    NSString *_tipsContent;
    NSString *_levelType;
}

@property(copy, nonatomic) NSString *levelType; // @synthesize levelType=_levelType;
@property(copy, nonatomic) NSString *tipsContent; // @synthesize tipsContent=_tipsContent;
@property(nonatomic) unsigned int charmLevelLimit; // @synthesize charmLevelLimit=_charmLevelLimit;
@property(nonatomic) unsigned int curLevelCharm; // @synthesize curLevelCharm=_curLevelCharm;
@property(nonatomic) unsigned int nextLevelThreshold; // @synthesize nextLevelThreshold=_nextLevelThreshold;
@property(nonatomic) unsigned int profPercent; // @synthesize profPercent=_profPercent;
@property(nonatomic) unsigned int charmLevel; // @synthesize charmLevel=_charmLevel;
@property(nonatomic) unsigned int charm; // @synthesize charm=_charm;
@property(nonatomic) unsigned int profPercentOld; // @synthesize profPercentOld=_profPercentOld;
@property(nonatomic) unsigned int charmLevelOld; // @synthesize charmLevelOld=_charmLevelOld;
@property(nonatomic) unsigned int charmOld; // @synthesize charmOld=_charmOld;
@property(nonatomic) _Bool showTipsAnimation; // @synthesize showTipsAnimation=_showTipsAnimation;
@property(nonatomic) _Bool showCharmLevel; // @synthesize showCharmLevel=_showCharmLevel;
@property(nonatomic) _Bool popFlag; // @synthesize popFlag=_popFlag;
@property(nonatomic) unsigned int charmRank; // @synthesize charmRank=_charmRank;
- (void)dealloc;

@end

