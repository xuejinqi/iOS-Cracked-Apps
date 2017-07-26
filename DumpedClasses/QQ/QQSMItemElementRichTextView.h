//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMItemElementBaseView.h"

#import "QQEmotionLabelDelegate.h"

@class NSString, QQEmotionLabel, UIImageView, UILabel, UIView;

@interface QQSMItemElementRichTextView : QQSMItemElementBaseView <QQEmotionLabelDelegate>
{
    NSString *_content;
    UILabel *_normalLabel;
    UIImageView *_moreArrowView;
    UIImageView *_detailArrowView;
    UIView *_hrView;
    long long _normalLableInsetH;
    long long _normalLableInsetV;
    QQEmotionLabel *_contentLabel;
    int numberOfLines;
}

+ (id)getQQSMItemElementTextBaseFont:(id)arg1;
+ (void)setChineseItalicOfHtml:(id)arg1 withAttrText:(id)arg2;
+ (int)getDefaultLinesOfElement:(id)arg1;
+ (id)getPlainTextFromHtml:(id)arg1;
+ (_Bool)isItalicTextElement:(id)arg1;
+ (_Bool)isHtmlTextElement:(id)arg1;
+ (id)getContentFromElement:(id)arg1;
+ (struct CGSize)layoutElements:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (double)fontBlankOfSummaryTitle:(id)arg1;
+ (id)createQQSMItemElementRichTextView:(id)arg1 withFrame:(struct CGRect)arg2;
@property(retain, nonatomic) UILabel *normalLabel; // @synthesize normalLabel=_normalLabel;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int numberOfLines; // @synthesize numberOfLines;
- (void)emotionLabelHandleUrl:(id)arg1;
- (void)layoutSubviews;
- (void)layoutContentLabel;
- (_Bool)shouldHandleTouch:(struct CGPoint)arg1;
- (void)setNormalTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setQQSMItemElementBase:(id)arg1;
- (void)prepareForReuse;
- (_Bool)shouldReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

