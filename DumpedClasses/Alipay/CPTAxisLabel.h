//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class CPTLayer;

@interface CPTAxisLabel : NSObject <NSCoding>
{
    CPTLayer *contentLayer;
    double offset;
    double rotation;
    int alignment;
    CDStruct_6ece915e tickLocation;
}

@property(nonatomic) CDStruct_6ece915e tickLocation; // @synthesize tickLocation;
@property(nonatomic) int alignment; // @synthesize alignment;
@property(nonatomic) double rotation; // @synthesize rotation;
@property(nonatomic) double offset; // @synthesize offset;
@property(retain, nonatomic) CPTLayer *contentLayer; // @synthesize contentLayer;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)positionRelativeToViewPoint:(struct CGPoint)arg1 forCoordinate:(int)arg2 inDirection:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContentLayer:(id)arg1;
- (id)initWithText:(id)arg1 textStyle:(id)arg2;

@end

