//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OnlineTag, QRBookInfo, ReadingBaseViewController, UINavigationController, UIViewController;

@interface OpenBookManager : NSObject
{
    _Bool _waitOpenBook;
    _Bool _isOpenOnlineBook;
    UINavigationController *_navVC;
    ReadingBaseViewController *_readingVCForOnlyOnePage;
    OnlineTag *_onlineTag;
    QRBookInfo *_bookInfo;
    UIViewController *_viewControllerNeedPushBeforeTextView;
}

+ (id)shareInstance;
@property(retain, nonatomic) UIViewController *viewControllerNeedPushBeforeTextView; // @synthesize viewControllerNeedPushBeforeTextView=_viewControllerNeedPushBeforeTextView;
@property(retain, nonatomic) QRBookInfo *bookInfo; // @synthesize bookInfo=_bookInfo;
@property(retain, nonatomic) OnlineTag *onlineTag; // @synthesize onlineTag=_onlineTag;
@property(nonatomic) _Bool isOpenOnlineBook; // @synthesize isOpenOnlineBook=_isOpenOnlineBook;
@property(nonatomic) _Bool waitOpenBook; // @synthesize waitOpenBook=_waitOpenBook;
@property(retain, nonatomic) ReadingBaseViewController *readingVCForOnlyOnePage; // @synthesize readingVCForOnlyOnePage=_readingVCForOnlyOnePage;
@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
- (void).cxx_destruct;
- (_Bool)isTextViewOpened;
- (void)saveFocusBookId:(id)arg1;
- (void)dealySaveFocusBookID;
- (void)clearOpenBookData;
- (void)addToBookShelf:(id)arg1;
- (void)continueToOpenBookWithNavVC:(id)arg1;
- (void)popTextViewControllerIfExit;
- (void)releaseReadingVCForOnlyOnePage;
- (void)openBookFromService:(id)arg1 WithNavVC:(id)arg2;
- (void)openOnlineBookFromBookcity:(id)arg1;
- (void)openBookFromBookcity:(id)arg1 WithNavVC:(id)arg2;
- (void)doJumpOpenBook:(id)arg1 withNavVC:(id)arg2;
- (void)openBookByBookinfo:(id)arg1 WithNavVC:(id)arg2;
- (void)openBookByBookinfo:(id)arg1 shouldWait:(_Bool)arg2 WithNavVC:(id)arg3;
- (void)openNormalBookDelay:(id)arg1 command:(id)arg2;
- (void)openNormalBookDelay:(id)arg1;
- (void)openNormalBook:(id)arg1 shouldWait:(_Bool)arg2 WithNavVC:(id)arg3;
- (void)openOnlineBookWhetherNeedDownloadWithOnlineTag:(id)arg1 command:(id)arg2;
- (void)openOnlineBookWhetherNeedDownloadWithOnlineTag:(id)arg1;
- (void)dealloc;
- (id)init;

@end

