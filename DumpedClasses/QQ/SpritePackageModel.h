//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface SpritePackageModel : NSObject <NSCopying>
{
    int _packageId;
    int _type;
    int _version;
    int _use;
    int _actionNumPerPage;
    int _totalPage;
    NSString *_name;
    NSMutableArray *_actionSetList;
    NSString *_apImg;
    NSString *_apcImg;
}

@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) int actionNumPerPage; // @synthesize actionNumPerPage=_actionNumPerPage;
@property(retain, nonatomic) NSString *apcImg; // @synthesize apcImg=_apcImg;
@property(retain, nonatomic) NSString *apImg; // @synthesize apImg=_apImg;
@property(retain, nonatomic) NSMutableArray *actionSetList; // @synthesize actionSetList=_actionSetList;
@property(nonatomic) int use; // @synthesize use=_use;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int packageId; // @synthesize packageId=_packageId;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)actionsInPageIndex:(int)arg1;
- (void)arrrangeData;
- (id)initWithDict:(id)arg1;
- (id)init;

@end

