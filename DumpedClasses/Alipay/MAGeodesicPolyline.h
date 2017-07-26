//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAPolyline.h"

@interface MAGeodesicPolyline : MAPolyline
{
}

+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
+ (struct MAMapPoint *)geodesicLinesForMapPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2 outCount:(unsigned long long *)arg3;
+ (double)longitudeSpanWithCoord1:(struct CLLocationCoordinate2D)arg1 coord2:(struct CLLocationCoordinate2D)arg2;

@end

