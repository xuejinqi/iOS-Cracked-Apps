//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQFontModel : NSObject <NSCoding>
{
    unsigned int _fontId;
    NSString *_fontName;
    NSString *_version;
    int _status;
    int _progress;
    int _xo;
}

@property(nonatomic) int progress; // @synthesize progress=_progress;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) unsigned int fontId; // @synthesize fontId=_fontId;
- (id)copy;
- (id)initWithFontId:(long long)arg1;
- (id)initWithData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

