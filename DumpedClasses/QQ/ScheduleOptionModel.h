//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ScheduleOptionModel : NSObject
{
    int _optionCode;
    long long _optionType;
    long long _optionStatus;
}

@property(nonatomic) int optionCode; // @synthesize optionCode=_optionCode;
@property(nonatomic) long long optionStatus; // @synthesize optionStatus=_optionStatus;
@property(nonatomic) long long optionType; // @synthesize optionType=_optionType;
- (void)dealloc;
- (id)initModel;

@end

