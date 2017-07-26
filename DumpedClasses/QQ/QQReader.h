//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UINavigationController;

@interface QQReader : NSObject
{
    long long openType;
    int curChannelID;
    _Bool inReadingView;
    _Bool _luaInitialized;
    NSString *curReadingBookName;
    UINavigationController *_navigationController;
    NSString *_channelSrc2;
    NSString *_channelSrc3;
    NSString *_from1;
    NSString *_from2;
    NSString *_from3;
}

+ (id)append:(id)arg1;
+ (long long)convertOldColToNew:(long long)arg1;
+ (_Bool)shouldTextViewControllerLogDeallocMessage;
+ (id)generateSendBookXML:(id)arg1;
+ (id)transferParam:(id)arg1 value:(id)arg2;
+ (id)getCurChannelID;
+ (void)followStrP2:(id)arg1;
+ (void)followStrP:(id)arg1;
+ (void)addSetFollow:(_Bool)arg1 withBookID:(id)arg2;
+ (void)test2:(id)arg1;
+ (id)stringToHex:(id)arg1;
+ (void)releaseInstance;
+ (id)instance;
@property(nonatomic) _Bool luaInitialized; // @synthesize luaInitialized=_luaInitialized;
@property(copy, nonatomic) NSString *from3; // @synthesize from3=_from3;
@property(copy, nonatomic) NSString *from2; // @synthesize from2=_from2;
@property(copy, nonatomic) NSString *from1; // @synthesize from1=_from1;
@property(copy, nonatomic) NSString *channelSrc3; // @synthesize channelSrc3=_channelSrc3;
@property(copy, nonatomic) NSString *channelSrc2; // @synthesize channelSrc2=_channelSrc2;
@property(nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool inReadingView; // @synthesize inReadingView;
@property(retain, nonatomic) NSString *curReadingBookName; // @synthesize curReadingBookName;
- (void)enterBackground:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)handleQQAccountLogoutNotification:(id)arg1;
- (void)onExitActiveViewCtr:(id)arg1;
- (void)gotoBookcity:(id)arg1 column:(int)arg2 animated:(_Bool)arg3;
- (void)userWillEnterActiveView:(id)arg1 Animation:(_Bool)arg2;
- (void)onEnterActiveViewCtr:(id)arg1;
- (_Bool)readBookFromService:(id)arg1 navi:(id)arg2;
- (_Bool)readDetailSendBook:(id)arg1 navi:(id)arg2;
- (_Bool)readSplashSendBook:(id)arg1 navi:(id)arg2;
- (void)dealloc;
- (void)updateBookInfo;
- (void)startRunReaderLua;
- (id)init;

@end

