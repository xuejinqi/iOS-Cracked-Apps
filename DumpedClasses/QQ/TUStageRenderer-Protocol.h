//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TUKeyNameModel;

@protocol TUStageRenderer <NSObject>
@property(nonatomic) _Bool isMaster;
@property(nonatomic) _Bool isShowName;
@property(nonatomic) _Bool isCommotion;
@property(retain, nonatomic) TUKeyNameModel *knm;
- (void)didShown;
@end

