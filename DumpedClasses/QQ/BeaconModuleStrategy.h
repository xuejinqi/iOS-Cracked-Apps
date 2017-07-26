//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconEncodeObject.h"

@class NSArray, NSDictionary, NSString;

@interface BeaconModuleStrategy : BeaconEncodeObject
{
    NSString *_uploadUrl;
    int _moduleKey;
    _Bool _onOff;
    NSDictionary *_detail;
    NSArray *_preventEventCode;
    NSArray *_sampleEvent;
    int _xo;
}

- (void)dealloc;
- (_Bool)isEventCanReport:(id)arg1;
- (id)initWithWUPMSModel:(struct ModuleStrategy *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *uploadUrl; // @dynamic uploadUrl;

// Remaining properties
@property(retain, nonatomic) NSDictionary *detail; // @dynamic detail;
@property(nonatomic) int moduleKey; // @dynamic moduleKey;
@property(nonatomic) _Bool onOff; // @dynamic onOff;
@property(retain, nonatomic) NSArray *preventEventCode; // @dynamic preventEventCode;
@property(retain, nonatomic) NSArray *sampleEvent; // @dynamic sampleEvent;

@end

