//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHCSVParserDelegate.h"

@class NSArray, NSError, NSMutableArray, NSString;

@interface _CHCSVAggregator : NSObject <CHCSVParserDelegate>
{
    NSMutableArray *_lines;
    NSMutableArray *_currentLine;
    NSError *_error;
}

@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSArray *lines; // @synthesize lines=_lines;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 didReadField:(id)arg2 atIndex:(long long)arg3;
- (void)parser:(id)arg1 didEndLine:(unsigned long long)arg2;
- (void)parser:(id)arg1 didBeginLine:(unsigned long long)arg2;
- (void)parserDidBeginDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

