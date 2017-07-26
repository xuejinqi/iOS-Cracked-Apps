//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSString, UIColor, UIImage;

@interface QZDrawItemInteractionRect : QZDrawItem
{
    UIColor *_color;
    UIColor *_highlightColor;
    _Bool _isHighlight;
    _Bool _isLongPress;
    _Bool _needCorner;
    _Bool _showView;
    _Bool _aboveView;
    long long _type;
    long long _commentIndex;
    long long _replyIndex;
    NSString *_text;
    UIImage *_backgroundImage;
    double _arcRadius;
    double _cornerRadius;
    long long _timeType;
    long long _commentType;
}

+ (id)generateInteractionItemWithType:(long long)arg1 color:(id)arg2 highlightColor:(id)arg3 text:(id)arg4 handleTouch:(_Bool)arg5 rect:(struct CGRect)arg6;
@property(nonatomic) long long commentType; // @synthesize commentType=_commentType;
@property(nonatomic) long long timeType; // @synthesize timeType=_timeType;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool aboveView; // @synthesize aboveView=_aboveView;
@property(nonatomic) _Bool showView; // @synthesize showView=_showView;
@property(nonatomic) double arcRadius; // @synthesize arcRadius=_arcRadius;
@property(nonatomic) _Bool needCorner; // @synthesize needCorner=_needCorner;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long replyIndex; // @synthesize replyIndex=_replyIndex;
@property(nonatomic) long long commentIndex; // @synthesize commentIndex=_commentIndex;
@property(nonatomic) _Bool isLongPress; // @synthesize isLongPress=_isLongPress;
@property(nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)draw;
- (id)getDrawItemVoiceText;

@end

