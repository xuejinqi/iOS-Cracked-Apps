//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZTextAttachment.h"

@class NSAttributedString;

@interface QZETTextAttachment : QZTextAttachment
{
    NSAttributedString *_etText;
    unsigned long long _etFontId;
}

+ (void)initialize;
@property(nonatomic) unsigned long long etFontId; // @synthesize etFontId=_etFontId;
@property(retain, nonatomic) NSAttributedString *etText; // @synthesize etText=_etText;
- (void).cxx_destruct;
- (id)copyableText;
- (id)voiceText;

@end

