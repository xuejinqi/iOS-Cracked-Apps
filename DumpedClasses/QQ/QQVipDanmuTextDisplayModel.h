//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQVipDanmuTextModel;

@interface QQVipDanmuTextDisplayModel : NSObject
{
    QQVipDanmuTextModel *_textModel;
    double _speed;
    unsigned long long _state;
    unsigned long long _displayOrder;
    unsigned long long _dispalyType;
    long long _seq;
    struct CGPoint _startPoint;
    struct CGPoint _targetPoint;
    struct CGRect _dispalyBounds;
}

@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned long long dispalyType; // @synthesize dispalyType=_dispalyType;
@property(nonatomic) unsigned long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property(nonatomic) struct CGPoint targetPoint; // @synthesize targetPoint=_targetPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) struct CGRect dispalyBounds; // @synthesize dispalyBounds=_dispalyBounds;
@property(retain, nonatomic) QQVipDanmuTextModel *textModel; // @synthesize textModel=_textModel;
- (void).cxx_destruct;

@end

