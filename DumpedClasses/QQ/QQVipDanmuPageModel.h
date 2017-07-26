//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQVIPFunctionLockMutableArray;

@interface QQVipDanmuPageModel : UIView
{
    NSString *_comicID;
    NSString *_sectionID;
    NSString *_pageID;
    unsigned long long _state;
    QQVIPFunctionLockMutableArray *_sourceDanmuList;
    QQVIPFunctionLockMutableArray *_displayingDanmuList;
    long long _nextIndex;
    struct CGSize _pageSize;
}

@property(nonatomic) long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(retain, nonatomic) QQVIPFunctionLockMutableArray *displayingDanmuList; // @synthesize displayingDanmuList=_displayingDanmuList;
@property(retain, nonatomic) QQVIPFunctionLockMutableArray *sourceDanmuList; // @synthesize sourceDanmuList=_sourceDanmuList;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *comicID; // @synthesize comicID=_comicID;
- (void).cxx_destruct;
- (id)nextTextDisplayModel:(unsigned long long)arg1;
- (id)init;

@end

