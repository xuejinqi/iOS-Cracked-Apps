//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLLWData.h"

@class BLLWImageData, BLLWTextData;

@interface BLLWSectionData : BLLWData
{
    BLLWImageData *_line;
    BLLWTextData *_centerText;
}

+ (id)dataWithResponseData:(id)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) BLLWTextData *centerText; // @synthesize centerText=_centerText;
@property(retain, nonatomic) BLLWImageData *line; // @synthesize line=_line;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;

@end

