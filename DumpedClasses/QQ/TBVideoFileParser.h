//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBVideoFileParser : NSObject
{
    struct __sFILE *_fp;
    char *_pBuffer;
    int _bufferOffset;
    int _bufferLenth;
    int _fileOffset;
    unsigned int _timeScale;
    struct list<float, std::allocator<float>> _retList;
    _Bool _curTrackVideo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getPTSArray;
- (void)parseTrakBox:(struct BOXHEADER *)arg1;
- (void)parseStsdBox:(struct BOXHEADER *)arg1;
- (void)parseMdhdBox:(struct BOXHEADER *)arg1;
- (struct STTSRECORD *)getNextSttsRecord:(struct STTSRECORD *)arg1;
- (void)parseSttsBox:(struct BOXHEADER *)arg1;
- (void)parseNormalBox:(struct BOXHEADER *)arg1;
- (void)parseBox:(struct BOXHEADER *)arg1;
- (_Bool)getNextFileBuffer;
- (struct BOXHEADER *)getNextBox:(int)arg1;
- (_Bool)hasSubBox:(char *)arg1;
- (void)searchBox;
- (_Bool)openVideoFile:(id)arg1;
- (_Bool)parseVideoFile:(id)arg1;
- (void)unInit;
- (void)initParser;
- (void)dealloc;
- (id)init;

@end

