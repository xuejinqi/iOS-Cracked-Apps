//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIButton, UILabel;

@interface O2OMerchantProtocolView : UIView
{
    UIButton *_button;
    UILabel *_titleLabel;
    UILabel *_titleLabel2;
    UIView *_whiteView;
    NSArray *_urlArray;
    NSString *_key;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)show;
- (void)agree;
- (void)cancel;
- (void)jump:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subDesc:(id)arg3 buttonTitle:(id)arg4 nameArray:(id)arg5 key:(id)arg6 block:(CDUnknownBlockType)arg7;
- (void)dealloc;

@end

