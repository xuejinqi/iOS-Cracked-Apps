//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class CADisplayLink, NSDate, UIFont;

@interface QGFPSLabel : UILabel
{
    CADisplayLink *_link;
    unsigned long long _count;
    double _lastTime;
    UIFont *_font;
    UIFont *_subFont;
    _Bool _reading;
    unsigned long long _logInteval;
    NSDate *_createTimestamp;
    long long _createMemory;
}

+ (id)shareFpsLabel;
@property(nonatomic) long long createMemory; // @synthesize createMemory=_createMemory;
@property(retain, nonatomic) NSDate *createTimestamp; // @synthesize createTimestamp=_createTimestamp;
- (void)exitComicReader;
- (void)enterComicReader;
- (void)logMemCost:(const char *)arg1;
- (void)updateCreateInfo;
- (void)tick:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateLink;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

