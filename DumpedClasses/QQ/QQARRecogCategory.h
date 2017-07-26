//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class QQARImagePreprocess;

@interface QQARRecogCategory : QQModel <NSCopying>
{
    long long _recogntionType;
    unsigned long long _recogntionPriority;
    unsigned long long _recogntionWaitTime;
    unsigned long long _cloudRecogOpen;
    unsigned long long _localRecogOpen;
    QQARImagePreprocess *_arImagePreprocess;
}

@property(copy, nonatomic) QQARImagePreprocess *arImagePreprocess; // @synthesize arImagePreprocess=_arImagePreprocess;
@property(nonatomic) unsigned long long localRecogOpen; // @synthesize localRecogOpen=_localRecogOpen;
@property(nonatomic) unsigned long long cloudRecogOpen; // @synthesize cloudRecogOpen=_cloudRecogOpen;
@property(nonatomic) unsigned long long recogntionWaitTime; // @synthesize recogntionWaitTime=_recogntionWaitTime;
@property(nonatomic) unsigned long long recogntionPriority; // @synthesize recogntionPriority=_recogntionPriority;
@property(nonatomic) long long recogntionType; // @synthesize recogntionType=_recogntionType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

