//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EmotionParse : NSObject
{
}

+ (unsigned long long)parseSpriteActionWith:(id)arg1 outResult:(id)arg2 length:(double *)arg3 pos:(int *)arg4 lineHeight:(double)arg5;
+ (id)parseCommentUin:(id)arg1 text:(id)arg2 url:(id)arg3;
+ (id)filterSmallFaceStr:(id)arg1;
+ (id)refreshSmallCacheArrayByText:(id)arg1 text:(id)arg2;
+ (int)numberOfSmallFaceAtPrevious:(id)arg1;
+ (id)recoverSmallFaceByArrayCache:(id)arg1 inputStr:(id)arg2;
+ (id)getAllSmallFaceToArray:(id)arg1;
+ (id)getSmallFaceNewEscapeSequence:(id)arg1;
+ (id)voiceOverStringWithString:(id)arg1 pareseResult:(id)arg2;
+ (id)parseSensContent:(id)arg1 text:(id)arg2;
+ (id)parseKeyWord:(id)arg1 text:(id)arg2;
+ (id)parseKeyWord:(id)arg1 text:(id)arg2 isSupportPinyin:(_Bool)arg3;
+ (id)parseNumber:(id)arg1;
+ (id)parseEmail:(id)arg1;
+ (id)parseURL:(id)arg1;
+ (id)preParseURL:(id)arg1;
+ (id)stringByRemoveRightParenthesesWithOrigin:(id)arg1;
+ (id)getQQUrlsWithLayoutResult:(id)arg1 atPoint:(struct CGPoint)arg2;
+ (void)loadGifView:(id)arg1 withStringPath:(id)arg2;
+ (id)faceGifPathForName:(id)arg1;
+ (void)drawQQEmotionString:(id)arg1 inView:(id)arg2 inRect:(struct CGRect)arg3 withFont:(id)arg4 withLayoutResult:(id)arg5 color:(id)arg6 isShadow:(_Bool)arg7 animated:(_Bool)arg8 needHightLighted:(_Bool)arg9 needTailTruncation:(_Bool)arg10;
+ (void)drawQQEmotionString:(id)arg1 inView:(id)arg2 inRect:(struct CGRect)arg3 withFont:(id)arg4 withLayoutResult:(id)arg5 color:(id)arg6 shadowColor:(id)arg7 shadowOffset:(struct CGSize)arg8 shadowBlur:(double)arg9;
+ (void)drawQQEmotionString:(id)arg1 inView:(id)arg2 inRect:(struct CGRect)arg3 withFont:(id)arg4 withLayoutResult:(id)arg5 color:(id)arg6 isShadow:(_Bool)arg7 shadowColor:(id)arg8 shadowOffset:(struct CGSize)arg9 shadowBlur:(double)arg10 animated:(_Bool)arg11;
+ (void)drawQQEmotionString:(id)arg1 inView:(id)arg2 inRect:(struct CGRect)arg3 withFont:(id)arg4 withLayoutResult:(id)arg5 color:(id)arg6 isShadow:(_Bool)arg7 animated:(_Bool)arg8 needHightLighted:(_Bool)arg9;
+ (void)ftsDrawQQEmotionString:(id)arg1 inView:(id)arg2 inRect:(struct CGRect)arg3 withFont:(id)arg4 withLayoutResult:(id)arg5 color:(id)arg6 highlightColor:(id)arg7 isShadow:(_Bool)arg8 animated:(_Bool)arg9;
+ (id)CZ_LayoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 hasSystemEomji:(_Bool)arg5 isFts:(_Bool)arg6;
+ (id)CZ_LayoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 hasSystemEomji:(_Bool)arg5 isFts:(_Bool)arg6 customeLineHeight:(double)arg7;
+ (id)CZ_LayoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 hasSystemEomji:(_Bool)arg5 isFts:(_Bool)arg6 customeLineHeight:(double)arg7 alignment:(long long)arg8;
+ (void)drawEmotionString:(id)arg1 emotionView:(id)arg2 result:(id)arg3 color:(id)arg4 rect:(struct CGRect)arg5 font:(id)arg6 isShadow:(_Bool)arg7 shadowColor:(id)arg8 shadowOffset:(struct CGSize)arg9 shadowBlur:(double)arg10 shadowBlurColor:(id)arg11 animated:(_Bool)arg12 lineBreakMode:(long long)arg13 descriptor:(void *)arg14 animateFontParameters:(id)arg15;
+ (void)VAS_DrawQQEmotionString:(id)arg1 inView:(id)arg2 inRect:(struct CGRect)arg3 aioTextFont:(id)arg4 withLayoutResult:(id)arg5 color:(id)arg6 isShadow:(_Bool)arg7 shadowColor:(id)arg8 shadowOffset:(struct CGSize)arg9 shadowBlur:(double)arg10 shadowBlurColor:(id)arg11 animated:(_Bool)arg12 lineBreakMode:(long long)arg13 descriptor:(void *)arg14 animateFontParameters:(id)arg15;
+ (void)VAS_DrawQQEmotionString:(id)arg1 inView:(id)arg2 inRect:(struct CGRect)arg3 aioTextFont:(id)arg4 withLayoutResult:(id)arg5 color:(id)arg6 isShadow:(_Bool)arg7 shadowColor:(id)arg8 shadowOffset:(struct CGSize)arg9 shadowBlur:(double)arg10 shadowBlurColor:(id)arg11 animated:(_Bool)arg12;
+ (void)drawEmotionImageAtView:(id)arg1 drawRect:(struct CGRect)arg2 parseRange:(id)arg3 animated:(_Bool)arg4;
+ (void)drawEllipses:(struct CGRect)arg1 font:(id)arg2;
+ (struct CGRect)imageDrawRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
+ (_Bool)shouldDrawEllipses:(struct CGRect)arg1 parseResult:(id)arg2 index:(unsigned long long)arg3 font:(id)arg4 lineBreakMode:(long long)arg5;
+ (void)drawQQEmotionAndSmallEmotionOnView:(id)arg1 inRect:(struct CGRect)arg2 withLayoutResult:(id)arg3 animated:(_Bool)arg4 font:(id)arg5 lineBreakMode:(long long)arg6;
+ (id)VAS_LayoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 aioTextFont:(id)arg3 emotionWidth:(double)arg4 customeLineHeight:(double)arg5 isMagicFont:(_Bool)arg6 magicSeed:(unsigned long long)arg7 isFts:(_Bool)arg8 alignment:(long long)arg9;
+ (id)VAS_LayoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 aioTextFont:(id)arg3 emotionWidth:(double)arg4 customeLineHeight:(double)arg5 isMagicFont:(_Bool)arg6 magicSeed:(unsigned long long)arg7 isFts:(_Bool)arg8;
+ (id)VAS_LayoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 aioTextFont:(id)arg3 userFontId:(long long)arg4 customeLineHeight:(double)arg5 isMagicFont:(_Bool)arg6 magicSeed:(unsigned long long)arg7;
+ (id)replaceAtUnvisibleCharacter:(id)arg1;
+ (void)insertQQEmotionOrSamllerEmotionToParseResult:(id)arg1 parseStr:(id)arg2 currentUnitInfo:(id)arg3 currentLineProcessedUnitTotalWidth:(double)arg4 currentLineStartY:(double)arg5 currentLine:(unsigned long long)arg6 emotionIndex:(int)arg7;
+ (void)adjustParseRectYWithEmotionParseResult:(id)arg1 currentLine:(unsigned long long)arg2 currentLineActualHeight:(double)arg3 textLineHeightNormal:(double)arg4 textLineHeightMagicBigger:(double)arg5 textLineHeightMagicSmaller:(double)arg6 isNormalExistInCurrentLine:(_Bool)arg7 isMagicBiggerExistInCurrentLine:(_Bool)arg8 isMagicSmallerExistInCurrentLine:(_Bool)arg9 normalAscent:(double)arg10 magicBiggerAscent:(double)arg11 magicSmallerAscent:(double)arg12 alignment:(long long)arg13;
+ (void)adjustParseRectYWithEmotionParseResult:(id)arg1 currentLine:(unsigned long long)arg2 currentLineActualHeight:(double)arg3 textLineHeightNormal:(double)arg4 textLineHeightMagicBigger:(double)arg5 textLineHeightMagicSmaller:(double)arg6 isNormalExistInCurrentLine:(_Bool)arg7 isMagicBiggerExistInCurrentLine:(_Bool)arg8 isMagicSmallerExistInCurrentLine:(_Bool)arg9 normalAscent:(double)arg10 magicBiggerAscent:(double)arg11 magicSmallerAscent:(double)arg12;
+ (void)getNextUnitFromString:(id)arg1 withStartIndex:(unsigned long long)arg2 textLimit:(unsigned long long)arg3 messageSplitInfo:(id)arg4 isFts:(_Bool)arg5;
+ (id)getMagicCharacterIndexFromString:(id)arg1 withSeed:(unsigned long long)arg2 configModel:(id)arg3;
+ (void)getWordSegmentInfoFromString:(id)arg1;
+ (_Bool)isMaxScale;
+ (id)ftsLayoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 hasSystemEomji:(_Bool)arg5;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 hasSystemEomji:(_Bool)arg5 customeLineHeight:(double)arg6 alignment:(long long)arg7;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 hasSystemEomji:(_Bool)arg5 customeLineHeight:(double)arg6;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 hasSystemEomji:(_Bool)arg5;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 customeLineHeight:(double)arg5 alignment:(long long)arg6;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 customeLineHeight:(double)arg5;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 emotionWidth:(double)arg4 numberOfLines:(long long)arg5;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 userFontId:(long long)arg4;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 customeLineHeight:(double)arg4 alignment:(long long)arg5;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 customeLineHeight:(double)arg4;
+ (id)layoutQQEmotionString:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
+ (id)layoutQQEmotionStringNormally:(id)arg1 maxWidth:(double)arg2 maxHeight:(double)arg3 font:(id)arg4 emotionWidth:(double)arg5;
+ (id)emojiRangeWithEmojiStr:(id)arg1;
+ (void)mergeUrlArray:(id)arg1 withParseResult:(id)arg2 srcString:(id)arg3 font:(id)arg4;
+ (void)makeStrRectList:(id)arg1 url:(id)arg2 font:(id)arg3;
+ (id)getInfoStringArray:(id)arg1;

@end

