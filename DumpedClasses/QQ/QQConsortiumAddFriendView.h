//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVMaskAddFriendView.h"

@class NSMutableArray, QQConsortiumMemberModel, UILabel, UIView;

@interface QQConsortiumAddFriendView : QQAVMaskAddFriendView
{
    UILabel *_idLabel;
    UIView *_infoView;
    NSMutableArray *_idInfoViews;
    UILabel *_mainHeroLabel;
    NSMutableArray *_heroViews;
}

- (void)dismissAnimation;
- (struct CGRect)destHeadFrame;
- (void)setStatus:(long long)arg1;
- (void)switchToDetailModel;
- (void)ensureInfoView;
@property(readonly, nonatomic) QQConsortiumMemberModel *consortiumMemberModel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withModel:(id)arg2 withFromFrame:(struct CGRect)arg3 bgView:(id)arg4 showReport:(_Bool)arg5 avatarClass:(Class)arg6 AVRelationType:(long long)arg7;

@end

