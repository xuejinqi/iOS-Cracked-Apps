//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PAAdMsgPreloadVideoInfo : NSObject
{
    int _playId;
    NSString *_vid;
    NSString *_fileID;
    long long _preloadTime;
}

@property(nonatomic) long long preloadTime; // @synthesize preloadTime=_preloadTime;
@property(copy, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(nonatomic) int playId; // @synthesize playId=_playId;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithVid:(id)arg1 playId:(int)arg2 fileID:(id)arg3;

@end

