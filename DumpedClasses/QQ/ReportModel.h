//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ReportModel : NSObject
{
    _Bool _sLoadMore;
    NSString *_sKey;
    unsigned long long _sScene;
    unsigned long long _sPScene;
    NSArray *_sItemList;
    unsigned long long _sItemListPage;
    unsigned long long _sItemListStart;
    unsigned long long _sCategory;
    unsigned long long _sItem;
    unsigned long long _sItemPos;
    unsigned long long _sFrom;
    unsigned long long _sDirect;
    unsigned long long _sFolder;
}

@property(nonatomic) _Bool sLoadMore; // @synthesize sLoadMore=_sLoadMore;
@property(nonatomic) unsigned long long sFolder; // @synthesize sFolder=_sFolder;
@property(nonatomic) unsigned long long sDirect; // @synthesize sDirect=_sDirect;
@property(nonatomic) unsigned long long sFrom; // @synthesize sFrom=_sFrom;
@property(nonatomic) unsigned long long sItemPos; // @synthesize sItemPos=_sItemPos;
@property(nonatomic) unsigned long long sItem; // @synthesize sItem=_sItem;
@property(nonatomic) unsigned long long sCategory; // @synthesize sCategory=_sCategory;
@property(nonatomic) unsigned long long sItemListStart; // @synthesize sItemListStart=_sItemListStart;
@property(nonatomic) unsigned long long sItemListPage; // @synthesize sItemListPage=_sItemListPage;
@property(retain, nonatomic) NSArray *sItemList; // @synthesize sItemList=_sItemList;
@property(nonatomic) unsigned long long sPScene; // @synthesize sPScene=_sPScene;
@property(nonatomic) unsigned long long sScene; // @synthesize sScene=_sScene;
@property(retain, nonatomic) NSString *sKey; // @synthesize sKey=_sKey;
- (void).cxx_destruct;

@end

