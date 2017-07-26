//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QRModel.h"

@interface QRReadingDurationModel : QRModel
{
    unsigned int _lastTimeTick;
    unsigned int _begin;
    unsigned int _end;
    unsigned int _bookId;
    unsigned int _duration;
    unsigned long long _uuid;
}

+ (id)useSchemaConfigs;
+ (id)useTable;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int bookId; // @synthesize bookId=_bookId;
@property(nonatomic) unsigned int end; // @synthesize end=_end;
@property(nonatomic) unsigned int begin; // @synthesize begin=_begin;
@property(nonatomic) unsigned long long uuid; // @synthesize uuid=_uuid;
- (void)resetLastTimeTick;
- (void)reset;
- (void)initData;
- (void)increase;
- (id)initWithBookId:(id)arg1;

@end

