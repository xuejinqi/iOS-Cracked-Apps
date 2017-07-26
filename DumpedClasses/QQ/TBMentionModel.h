//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface TBMentionModel : QQModel
{
    NSString *_uid;
    NSString *_nick;
    unsigned long long _orientation;
    double _coordinateX;
    double _coordinateY;
}

+ (id)createWithVideoAttributeJson:(id)arg1;
@property(nonatomic) double coordinateY; // @synthesize coordinateY=_coordinateY;
@property(nonatomic) double coordinateX; // @synthesize coordinateX=_coordinateX;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getJsonDict;
- (void)dealloc;

@end

