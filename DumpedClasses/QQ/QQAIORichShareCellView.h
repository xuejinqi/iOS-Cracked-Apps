//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIORichCellView.h"

@class CATextLayer, QQAIORichModel;

@interface QQAIORichShareCellView : QQAIORichCellView
{
    CATextLayer *_srcLayer;
    QQAIORichModel *_richModel;
}

- (void).cxx_destruct;
- (struct CGRect)getTailRectWithRect:(struct CGRect)arg1;
- (id)getSourceName;
- (struct CGSize)GetTailInfoSize;
- (_Bool)hasTail;
- (void)preparePaopao:(id)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)willDrawBubble;
- (void)setAioModel:(id)arg1;

@end

