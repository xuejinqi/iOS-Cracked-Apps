//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatCtrlBase.h"

@class UIImageView, UILabel;

@interface PPChatCtrlInfo : PPChatCtrlBase
{
    UIImageView *_balanceImg;
    UILabel *_publicInfo;
    UILabel *_publicInfoBalance;
    UIImageView *_followIcon;
}

@property(retain, nonatomic) UIImageView *followIcon; // @synthesize followIcon=_followIcon;
@property(retain, nonatomic) UILabel *publicInfoBalance; // @synthesize publicInfoBalance=_publicInfoBalance;
@property(retain, nonatomic) UILabel *publicInfo; // @synthesize publicInfo=_publicInfo;
@property(retain, nonatomic) UIImageView *balanceImg; // @synthesize balanceImg=_balanceImg;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 param:(id)arg2 notify:(CDUnknownBlockType)arg3;

@end

