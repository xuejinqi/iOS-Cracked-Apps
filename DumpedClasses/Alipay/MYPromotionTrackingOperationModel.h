//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MYPromotionTrackingOperationModel : NSObject
{
    NSString *_operationName;
    NSString *_type;
    double _modalThreshold;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 operationName:(id)arg2;

@end

