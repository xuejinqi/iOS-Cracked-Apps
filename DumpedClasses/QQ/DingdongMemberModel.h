//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DingdongMemberModel : NSObject
{
    NSString *_pinyinOfName;
    long long _MemUin;
    NSString *_showName;
    NSString *_nameSortKey;
}

@property(retain, nonatomic) NSString *nameSortKey; // @synthesize nameSortKey=_nameSortKey;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(nonatomic) long long MemUin; // @synthesize MemUin=_MemUin;
- (long long)compareDingdongMemberModel:(id)arg1;
@property(readonly, retain, nonatomic) NSString *pinyinOfName;
- (void)dealloc;

@end

