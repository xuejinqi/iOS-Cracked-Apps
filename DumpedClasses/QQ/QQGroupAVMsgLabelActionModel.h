//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface QQGroupAVMsgLabelActionModel : NSObject
{
    int _actionType;
    NSDictionary *_actionDict;
    long long _actionsIndex;
    struct _NSRange _range;
}

@property(nonatomic) long long actionsIndex; // @synthesize actionsIndex=_actionsIndex;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSDictionary *actionDict; // @synthesize actionDict=_actionDict;
- (void).cxx_destruct;

@end

