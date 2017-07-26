//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SPFriendDataModel, SUImageView, UIButton, UIControl, UIImageView, UILabel;

@interface SPPersonInfoView : UIView
{
    UIControl *_headControl;
    SUImageView *_headView;
    UILabel *_nameLabel;
    UIImageView *_realNameIcon;
    UILabel *_feedsLabel;
    UIButton *_addFrndBtn;
    SPFriendDataModel *_bizData;
    NSString *_nwFeedsText;
    CDUnknownBlockType _headTapCallback;
    CDUnknownBlockType _addFrndCallback;
}

@property(copy, nonatomic) CDUnknownBlockType addFrndCallback; // @synthesize addFrndCallback=_addFrndCallback;
@property(copy, nonatomic) CDUnknownBlockType headTapCallback; // @synthesize headTapCallback=_headTapCallback;
@property(retain, nonatomic) NSString *nwFeedsText; // @synthesize nwFeedsText=_nwFeedsText;
@property(retain, nonatomic) SPFriendDataModel *bizData; // @synthesize bizData=_bizData;
@property(retain, nonatomic) UIButton *addFrndBtn; // @synthesize addFrndBtn=_addFrndBtn;
@property(retain, nonatomic) UILabel *feedsLabel; // @synthesize feedsLabel=_feedsLabel;
@property(retain, nonatomic) UIImageView *realNameIcon; // @synthesize realNameIcon=_realNameIcon;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) SUImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIControl *headControl; // @synthesize headControl=_headControl;
- (void).cxx_destruct;
- (void)onAddFriend:(id)arg1;
- (void)onHeadTap:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

