//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage, UINavigationController, UIView;

@interface QQGroupChatViewAnonymousUIParam : NSObject
{
    UIImage *_leftBntSkinImageNormal;
    UIImage *_leftBntSkinImageHighlighted;
    UIColor *_orgNickColor;
    UINavigationController *_orgNav;
    UIColor *_orgAIOBKColor;
    UIImage *_rightBntSkinImageNormal;
    UIImage *_rightBntSkinImageHighlighted;
    UIView *_orgTitleView;
    NSString *_orgPlaceholder;
    int _xo;
    int _leftBntColorNormal;
    int _leftBntColorHighlighted;
    long long _lastStatusBarStyle;
}

@property long long lastStatusBarStyle; // @synthesize lastStatusBarStyle=_lastStatusBarStyle;
@property int leftBntColorHighlighted; // @synthesize leftBntColorHighlighted=_leftBntColorHighlighted;
@property int leftBntColorNormal; // @synthesize leftBntColorNormal=_leftBntColorNormal;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIImage *leftBntSkinImageHighlighted; // @dynamic leftBntSkinImageHighlighted;
@property(retain, nonatomic) UIImage *leftBntSkinImageNormal; // @dynamic leftBntSkinImageNormal;
@property(retain, nonatomic) UIColor *orgAIOBKColor; // @dynamic orgAIOBKColor;
@property(nonatomic) UINavigationController *orgNav; // @dynamic orgNav;
@property(retain, nonatomic) UIColor *orgNickColor; // @dynamic orgNickColor;
@property(retain, nonatomic) NSString *orgPlaceholder; // @dynamic orgPlaceholder;
@property(retain, nonatomic) UIView *orgTitleView; // @dynamic orgTitleView;
@property(retain, nonatomic) UIImage *rightBntSkinImageHighlighted; // @dynamic rightBntSkinImageHighlighted;
@property(retain, nonatomic) UIImage *rightBntSkinImageNormal; // @dynamic rightBntSkinImageNormal;

@end

