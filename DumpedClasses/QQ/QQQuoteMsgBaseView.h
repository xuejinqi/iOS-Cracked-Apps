//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQAIOCommonCellView, QQAIOModel;

@interface QQQuoteMsgBaseView : UIView
{
    int _quoteMsgType;
    QQAIOModel *_aioModel;
    QQAIOCommonCellView *_ownerCellView;
}

+ (double)getTextWidthWithViewWidth:(double)arg1;
+ (struct CGRect)preCalRectWithFont:(id)arg1 titleResult:(id)arg2 msgResult:(id)arg3 maxWidth:(double)arg4;
+ (id)parseResultWithModel:(id)arg1 width:(double)arg2 font:(id)arg3 fontId:(long long)arg4;
+ (Class)QQQuoteViewForMsgModel:(id)arg1;
+ (id)newQuoteMsgViewWithMsgModel:(id)arg1;
@property(retain, nonatomic) QQAIOModel *aioModel; // @synthesize aioModel=_aioModel;
@property(nonatomic) QQAIOCommonCellView *ownerCellView; // @synthesize ownerCellView=_ownerCellView;
@property(nonatomic) int quoteMsgType; // @synthesize quoteMsgType=_quoteMsgType;
- (struct CGRect)preCalRectWithWidth:(double)arg1 titleResult:(id)arg2 msgResult:(id)arg3;
- (void)refreshQuoteMsg:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)gotoQutoMsg;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)refreshUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

