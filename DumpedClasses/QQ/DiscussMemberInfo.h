//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface DiscussMemberInfo : NSObject <NSCoding>
{
    NSString *_memberUin;
    int _type;
    int _flag;
    NSString *_remarkName;
    NSString *_remarkNamePinyin;
    NSString *_remarkNameFullPinyin;
    NSArray *_remarkNameFullPinyinLocation;
    int _remarkNameSource;
    NSString *_comparePYStr;
    NSString *_nameSortKey;
    int _joinTime;
    int _readMsgSeq;
    int _xo;
    unsigned long long _disUin;
}

+ (id)createFromDict:(id)arg1;
@property(nonatomic) unsigned long long disUin; // @synthesize disUin=_disUin;
@property(readonly, retain, nonatomic) NSString *nameSortKey; // @synthesize nameSortKey=_nameSortKey;
- (id)description;
- (id)getPinyin;
- (long long)compareByName:(id)arg1;
@property(retain, nonatomic) NSString *remarkNameFullPinyin; // @dynamic remarkNameFullPinyin;
@property(retain, nonatomic) NSString *remarkNamePinyin; // @dynamic remarkNamePinyin;
@property(retain, nonatomic) NSString *remarkName; // @dynamic remarkName;
- (long long)compareByUIN:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) int flag; // @dynamic flag;
@property(nonatomic) int joinTime; // @dynamic joinTime;
@property(retain, nonatomic) NSString *memberUin; // @dynamic memberUin;
@property(nonatomic) int readMsgSeq; // @dynamic readMsgSeq;
@property(retain, nonatomic) NSArray *remarkNameFullPinyinLocation; // @dynamic remarkNameFullPinyinLocation;
@property(nonatomic) int remarkNameSource; // @dynamic remarkNameSource;
@property(nonatomic) int type; // @dynamic type;

@end

