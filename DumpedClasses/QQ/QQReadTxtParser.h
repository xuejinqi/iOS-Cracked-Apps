//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQReadBaseParser.h"

@interface QQReadTxtParser : QQReadBaseParser
{
}

- (long long)fileWordsCount;
- (_Bool)isTextContentEndToFileTailwithOffset:(long long)arg1 andContentLength:(long long)arg2;
- (_Bool)isTextContentStartFromFileHeadwithOffset:(long long)arg1;
- (_Bool)islocationStartFromNewParaWithLocationOffset:(long long)arg1;
- (id)getContentBackwardUntil:(long long)arg1;
- (id)getContentForwardFrom:(long long)arg1;

@end

