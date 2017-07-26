//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, QTextSettings;

@interface QQAttributedTextMaker : NSObject
{
    _Bool _isOnline;
    QTextSettings *_textSettings;
    NSMutableDictionary *_fontRefCache;
}

@property(retain, nonatomic) NSMutableDictionary *fontRefCache; // @synthesize fontRefCache=_fontRefCache;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(retain, nonatomic) QTextSettings *textSettings; // @synthesize textSettings=_textSettings;
- (void).cxx_destruct;
- (id)attriStringWithSourceString:(id)arg1 andParaAttrInfo:(id)arg2;
- (struct __CTFont *)getCachedFontRefWithName:(id)arg1 size:(double)arg2;
- (struct __CTFont *)fontRefWithPath:(id)arg1 size:(double)arg2;
- (struct CTParagraphStyleSetting)paraStyleSetting:(unsigned int)arg1 ValueSize:(unsigned long long)arg2 Value:(const void *)arg3;
- (id)getParaAttrWithFormatType:(int)arg1 withUserInfo:(id)arg2 andIsNewPara:(_Bool)arg3;
- (id)contentAttriStringWithSourceString:(id)arg1 withContentStartFromNewPara:(_Bool)arg2 withStartOffset:(long long)arg3 andReadParser:(id)arg4;
- (void)dealloc;
- (id)init;

@end

