//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBaseBizModel.h"

@class NSString, UIViewController;

@interface aluBindTaobaoBizModelV2 : aluBaseBizModel
{
    CDUnknownBlockType _callback;
    NSString *_userId;
    UIViewController *_parentController;
    NSString *_memo;
    NSString *_txtMemo;
    NSString *_btnMemo;
    NSString *_resultCode;
    NSString *_h5Url;
}

@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *btnMemo; // @synthesize btnMemo=_btnMemo;
@property(retain, nonatomic) NSString *txtMemo; // @synthesize txtMemo=_txtMemo;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) UIViewController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;

@end

