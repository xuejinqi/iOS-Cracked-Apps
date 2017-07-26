//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIColor;

@interface MVRateLabel : UILabel
{
    UIColor *_rateColor;
    double _rate;
    UIColor *_countColor;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UIColor *countColor; // @synthesize countColor=_countColor;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(retain, nonatomic) UIColor *rateColor; // @synthesize rateColor=_rateColor;
- (void).cxx_destruct;
- (void)setRate:(double)arg1 andCount:(long long)arg2;
- (id)init;

@end

