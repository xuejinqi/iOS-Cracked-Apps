//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMsgConfigSubItem.h"

@class NSString;

@interface AdMsgExConfigSubItem : AdMsgConfigSubItem
{
    unsigned int _showTimePeriod;
    short _showTimeSeconds;
    NSString *_beginDate;
    NSString *_endDate;
    NSString *_md5;
}

@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSString *beginDate; // @synthesize beginDate=_beginDate;
@property(nonatomic) short showTimeSeconds; // @synthesize showTimeSeconds=_showTimeSeconds;
@property(nonatomic) unsigned int showTimePeriod; // @synthesize showTimePeriod=_showTimePeriod;

@end

