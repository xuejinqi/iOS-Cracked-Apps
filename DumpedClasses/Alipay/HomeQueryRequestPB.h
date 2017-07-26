//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class LocationPB;

@interface HomeQueryRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) double accuracy; // @dynamic accuracy;
@property(retain, nonatomic) LocationPB *currentLocation; // @dynamic currentLocation;
@property(readonly) _Bool hasAccuracy; // @dynamic hasAccuracy;
@property(readonly) _Bool hasCurrentLocation; // @dynamic hasCurrentLocation;
@property(readonly) _Bool hasIsFirstRequest; // @dynamic hasIsFirstRequest;
@property(readonly) _Bool hasLeftBottom; // @dynamic hasLeftBottom;
@property(readonly) _Bool hasMapCenterLocation; // @dynamic hasMapCenterLocation;
@property(readonly) _Bool hasRightTop; // @dynamic hasRightTop;
@property(readonly) _Bool hasZoomLevel; // @dynamic hasZoomLevel;
@property(nonatomic) _Bool isFirstRequest; // @dynamic isFirstRequest;
@property(retain, nonatomic) LocationPB *leftBottom; // @dynamic leftBottom;
@property(retain, nonatomic) LocationPB *mapCenterLocation; // @dynamic mapCenterLocation;
@property(retain, nonatomic) LocationPB *rightTop; // @dynamic rightTop;
@property(nonatomic) double zoomLevel; // @dynamic zoomLevel;

@end

