//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ComicSectionPicInfoModel : NSObject
{
    NSString *_picUrl;
    NSString *_picId;
    int _width;
    int _height;
    int _index;
    int _xo;
}

@property(retain, nonatomic) NSString *picId; // @synthesize picId=_picId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) int index; // @dynamic index;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(nonatomic) int width; // @dynamic width;

@end

