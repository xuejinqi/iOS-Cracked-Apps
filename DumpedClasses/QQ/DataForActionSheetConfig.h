//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DataForActionSheetConfig : NSObject
{
    _Bool _needEditFont;
    _Bool _isCopyCustomContentMode;
    NSString *_relatedAccountUin;
    int _relatedAccountType;
    int _xo;
    long long _hiddenItems;
    long long _showItems;
}

@property long long showItems; // @synthesize showItems=_showItems;
@property long long hiddenItems; // @synthesize hiddenItems=_hiddenItems;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool isCopyCustomContentMode; // @dynamic isCopyCustomContentMode;
@property(nonatomic) _Bool needEditFont; // @dynamic needEditFont;
@property(nonatomic) int relatedAccountType; // @dynamic relatedAccountType;
@property(retain, nonatomic) NSString *relatedAccountUin; // @dynamic relatedAccountUin;

@end

