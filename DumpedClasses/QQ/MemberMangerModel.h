//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MemberMangerModel : NSObject
{
    NSString *_title;
    id _target;
    id _userInfo;
    int _xo;
    SEL _sel;
    SEL _cellCreateSelector;
}

+ (id)model:(id)arg1 target:(id)arg2 Sel:(SEL)arg3 userInfo:(id)arg4 cellCreateSel:(SEL)arg5;
@property(nonatomic) SEL cellCreateSelector; // @synthesize cellCreateSelector=_cellCreateSelector;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) id target; // @dynamic target;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) id userInfo; // @dynamic userInfo;

@end

