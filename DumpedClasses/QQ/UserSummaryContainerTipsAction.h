//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface UserSummaryContainerTipsAction : NSObject
{
    NSString *_actionName;
    UIView *_tips;
    unsigned long long _tipsType;
    int _xo;
    _Bool *_hidden;
}

@property(nonatomic) _Bool *hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *actionName; // @dynamic actionName;
@property(retain, nonatomic) UIView *tips; // @dynamic tips;
@property(nonatomic) unsigned long long tipsType; // @dynamic tipsType;

@end

