//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface H5HistoryItem : NSObject
{
    _Bool _isFromFragment;
    UIImage *_snapshot;
    NSString *_URLStrTag;
}

@property(nonatomic) _Bool isFromFragment; // @synthesize isFromFragment=_isFromFragment;
@property(copy, nonatomic) NSString *URLStrTag; // @synthesize URLStrTag=_URLStrTag;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
- (void).cxx_destruct;

@end

