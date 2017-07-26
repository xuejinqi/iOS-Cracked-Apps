//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface CPTPlotRange : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    CDStruct_6ece915e location;
    CDStruct_6ece915e length;
    double locationDouble;
    double lengthDouble;
}

+ (id)plotRangeWithLocation:(CDStruct_6ece915e)arg1 length:(CDStruct_6ece915e)arg2;
@property(readonly, nonatomic) double lengthDouble; // @synthesize lengthDouble;
@property(readonly, nonatomic) double locationDouble; // @synthesize locationDouble;
@property(nonatomic) CDStruct_6ece915e length; // @synthesize length;
@property(nonatomic) CDStruct_6ece915e location; // @synthesize location;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (int)compareToDouble:(double)arg1;
- (int)compareToDecimal:(CDStruct_6ece915e)arg1;
- (int)compareToNumber:(id)arg1;
- (_Bool)containsRange:(id)arg1;
- (_Bool)isEqualToRange:(id)arg1;
- (_Bool)contains:(CDStruct_6ece915e)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double maxLimitDouble; // @dynamic maxLimitDouble;
@property(readonly, nonatomic) CDStruct_6ece915e maxLimit; // @dynamic maxLimit;
@property(readonly, nonatomic) CDStruct_6ece915e midPoint; // @dynamic midPoint;
@property(readonly, nonatomic) double minLimitDouble; // @dynamic minLimitDouble;
@property(readonly, nonatomic) CDStruct_6ece915e minLimit; // @dynamic minLimit;
@property(readonly, nonatomic) double endDouble; // @dynamic endDouble;
@property(readonly, nonatomic) CDStruct_6ece915e end; // @dynamic end;
- (id)init;
- (id)initWithLocation:(CDStruct_6ece915e)arg1 length:(CDStruct_6ece915e)arg2;

@end

