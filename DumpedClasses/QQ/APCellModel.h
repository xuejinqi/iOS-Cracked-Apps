//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APCellModel : NSObject
{
    int _mcc;
    int _mnc;
    int _lac;
    int _cellId;
    int _rssi;
    int _xo;
}

- (id)description;

// Remaining properties
@property(nonatomic) int cellId; // @dynamic cellId;
@property(nonatomic) int lac; // @dynamic lac;
@property(nonatomic) int mcc; // @dynamic mcc;
@property(nonatomic) int mnc; // @dynamic mnc;
@property(nonatomic) int rssi; // @dynamic rssi;

@end

