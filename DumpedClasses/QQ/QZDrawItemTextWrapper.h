//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSMutableArray, NSString, QZAttributedTextBuilder, QZDrawTextItem, UIColor, UIFont;

@interface QZDrawItemTextWrapper : QZDrawItem
{
    _Bool _hasmore;
    _Bool _useDefualtNickColor;
    _Bool _useDefaultNickFont;
    _Bool _useParagraph;
    _Bool _fontNotLoad;
    int _textHorizontalAlignment;
    int _textVerticalAlignment;
    long long _maxLine;
    unsigned long long _lineNumber;
    double _totalHeight;
    NSMutableArray *_layoutList;
    double _width;
    double _height;
    NSString *_string;
    UIFont *_font;
    UIColor *_color;
    double _lineSpace;
    double _paragraphSpacing;
    long long _drawNormalTextOnly;
    long long _normalUrl;
    QZDrawTextItem *_textItemInternal;
    QZAttributedTextBuilder *_attributedTextBuilder;
    struct UIEdgeInsets _padding;
}

+ (id)generateTextWrapperItem:(id)arg1 Font:(id)arg2 Color:(id)arg3 LinkColor:(id)arg4 rect:(struct CGRect)arg5 maxLine:(long long)arg6;
@property(retain, nonatomic) QZAttributedTextBuilder *attributedTextBuilder; // @synthesize attributedTextBuilder=_attributedTextBuilder;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) int textVerticalAlignment; // @synthesize textVerticalAlignment=_textVerticalAlignment;
@property(nonatomic) int textHorizontalAlignment; // @synthesize textHorizontalAlignment=_textHorizontalAlignment;
@property(retain, nonatomic) QZDrawTextItem *textItemInternal; // @synthesize textItemInternal=_textItemInternal;
@property(nonatomic) _Bool fontNotLoad; // @synthesize fontNotLoad=_fontNotLoad;
@property(nonatomic) long long normalUrl; // @synthesize normalUrl=_normalUrl;
@property(nonatomic) long long drawNormalTextOnly; // @synthesize drawNormalTextOnly=_drawNormalTextOnly;
@property(nonatomic) _Bool useParagraph; // @synthesize useParagraph=_useParagraph;
@property(nonatomic) double paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) _Bool useDefaultNickFont; // @synthesize useDefaultNickFont=_useDefaultNickFont;
@property(nonatomic) _Bool useDefualtNickColor; // @synthesize useDefualtNickColor=_useDefualtNickColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool hasmore; // @synthesize hasmore=_hasmore;
@property(retain, nonatomic) NSMutableArray *layoutList; // @synthesize layoutList=_layoutList;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(nonatomic) long long maxLine; // @synthesize maxLine=_maxLine;
- (void).cxx_destruct;
- (id)getDrawItemVoiceText;
- (id)getDrawEmotionItemArray;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setCenterY:(double)arg1;
- (double)centerY;
@property(nonatomic) _Bool truncationNotShowMore; // @dynamic truncationNotShowMore;
- (long long)calculateLineNum:(long long)arg1 maximumLimit:(long long)arg2;
- (void)finish;
- (void)clear;
- (double)layoutEndY;
- (double)layoutEndX;
- (void)translate:(struct CGPoint)arg1;
- (void)setNeedWordWrap:(_Bool)arg1;
@property(nonatomic) _Bool isWrapping;
@property(nonatomic) int lineBreakMode;
- (void)setImage:(id)arg1 font:(id)arg2;
- (void)setFeedUser:(id)arg1 font:(id)arg2 color:(id)arg3 actionType:(long long)arg4;
- (void)setFeedUser:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)appendString:(id)arg1 font:(id)arg2 color:(id)arg3 attribute:(id)arg4 linkColor:(id)arg5 isAllNormal:(_Bool)arg6;
- (void)setString:(id)arg1 font:(id)arg2 color:(id)arg3 attribute:(id)arg4 linkColor:(id)arg5 isAllNormal:(_Bool)arg6;
- (void)setString:(id)arg1 Font:(id)arg2 Color:(id)arg3 isAllNormal:(_Bool)arg4;
- (void)setString:(id)arg1 Font:(id)arg2 Color:(id)arg3 LinkColor:(id)arg4;
- (void)setString:(id)arg1 Font:(id)arg2 Color:(id)arg3 Attribute:(id)arg4;
- (void)setNotDiyfontString:(id)arg1 Font:(id)arg2 Color:(id)arg3;
- (void)setString:(id)arg1 Font:(id)arg2 Color:(id)arg3;
- (void)setRect:(struct CGRect)arg1;
@property(nonatomic) long long etFontType; // @dynamic etFontType;
@property(copy, nonatomic) NSString *etFontUrl; // @dynamic etFontUrl;
@property(nonatomic) long long etFontId; // @dynamic etFontId;
- (void)setupTextItemInternal;
- (void)setupCustomizedParam:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1 startOffsetX:(long long)arg2;
- (id)initWithRect:(struct CGRect)arg1 maxLine:(long long)arg2 lineSpace:(double)arg3;
- (id)initWithRect:(struct CGRect)arg1 maxLine:(long long)arg2;
- (id)initWithRect:(struct CGRect)arg1;
- (id)init;

@end

