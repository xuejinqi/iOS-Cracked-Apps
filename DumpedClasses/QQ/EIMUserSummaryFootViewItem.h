//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQAvatarView, UIImageView, UILabel;

@interface EIMUserSummaryFootViewItem : UIView
{
    UILabel *_Name;
    UILabel *_Type;
    UIImageView *_Verify;
    QQAvatarView *_vHead;
    int _nType;
    NSString *_uin;
    NSString *_strQR;
}

@property(nonatomic) int nType; // @synthesize nType=_nType;
@property(retain, nonatomic) NSString *strQR; // @synthesize strQR=_strQR;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void)setVerify:(_Bool)arg1;
- (id)getName;
- (id)getType;
- (void)setType:(id)arg1;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setWXHead:(id)arg1;
- (void)setQQPubHead:(id)arg1;
- (void)setQQGroupHead:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

