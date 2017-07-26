//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRBaseRespVO.h"

#import "NSCoding.h"

@class CCRConfigInfo, NSArray;

@interface CCRGetCreditCardListRespVO : CCRBaseRespVO <NSCoding>
{
    _Bool _hasNext;
    NSArray *_creditCardInfoList;
    NSArray *_savedCardList;
    CCRConfigInfo *_configInfo;
}

+ (Class)savedCardListElementClass;
+ (Class)creditCardInfoListElementClass;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(retain, nonatomic) CCRConfigInfo *configInfo; // @synthesize configInfo=_configInfo;
@property(retain, nonatomic) NSArray *savedCardList; // @synthesize savedCardList=_savedCardList;
@property(retain, nonatomic) NSArray *creditCardInfoList; // @synthesize creditCardInfoList=_creditCardInfoList;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

