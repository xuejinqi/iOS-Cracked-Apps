//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQARAbstractPretreatment.h"

@class NSObject<OS_dispatch_queue>;

@interface QQARStarFacePretreatment : QQARAbstractPretreatment
{
    NSObject<OS_dispatch_queue> *_detectQueue;
}

- (void).cxx_destruct;
- (void)extractFeatures:(id)arg1 matImage:(const struct Mat *)arg2;
- (void)runPretreatmentThread;
- (void)dealloc;
- (id)init;

@end

