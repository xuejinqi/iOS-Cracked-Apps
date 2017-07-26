//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZModelObject.h"

#import "QZJob.h"

@class NSString, UIImage;

@interface QZBaseJob : QZModelObject <QZJob>
{
    NSString *_thumbnailPath;
}

+ (id)operationWithJob:(id)arg1;
@property(copy, nonatomic) NSString *thumbnailPath; // @synthesize thumbnailPath=_thumbnailPath;
- (void).cxx_destruct;
- (id)jobTypeName;
- (_Bool)persistent;

// Remaining properties
@property(nonatomic) _Bool canceled; // @dynamic canceled;
@property(copy, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasFailed; // @dynamic hasFailed;
@property(nonatomic) _Bool hasRetried; // @dynamic hasRetried;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *jobBatchID; // @dynamic jobBatchID;
@property(copy, nonatomic) NSString *jobID; // @dynamic jobID;
@property(nonatomic) long long state; // @dynamic state;
@property(nonatomic) long long subJobCount; // @dynamic subJobCount;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImage *thumbnailImage; // @dynamic thumbnailImage;
@property(nonatomic) _Bool waitForWifi; // @dynamic waitForWifi;

@end

