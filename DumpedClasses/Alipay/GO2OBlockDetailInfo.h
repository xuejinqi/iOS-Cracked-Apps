//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSDictionary, NSString;

@interface GO2OBlockDetailInfo : GO2OServiceObject
{
    _Bool _showFlag;
    int _sortId;
    NSString *_identity;
    NSString *_blockId;
    NSString *_templateJson;
    NSString *_md5;
    NSString *_degradeInfo;
    NSDictionary *_data;
}

@property(nonatomic) _Bool showFlag; // @synthesize showFlag=_showFlag;
@property(nonatomic) int sortId; // @synthesize sortId=_sortId;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *degradeInfo; // @synthesize degradeInfo=_degradeInfo;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *blockId; // @synthesize blockId=_blockId;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

