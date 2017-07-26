//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQH5MagicFaceViewController;

@interface QQH5MagicFaceManager : NSObject
{
    QQH5MagicFaceViewController *_h5controller;
    unsigned long long _emojiID;
}

+ (_Bool)isH5MagicViewControllerExist;
+ (_Bool)canPlay;
+ (id)getH5Manager;
@property(nonatomic) unsigned long long emojiID; // @synthesize emojiID=_emojiID;
@property(retain, nonatomic) QQH5MagicFaceViewController *h5controller; // @synthesize h5controller=_h5controller;
- (void)dealloc;
- (id)getH5MagicFaceViewController;

@end

