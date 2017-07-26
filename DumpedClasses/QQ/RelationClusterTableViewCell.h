//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSMutableArray, QQTabView;

@interface RelationClusterTableViewCell : UITableViewCell
{
    NSMutableArray *_buttons;
    QQTabView *_clusterView;
    NSArray *_tags;
    id <RelationClusterButtonTouchCallback> _callback;
}

@property(nonatomic) id <RelationClusterButtonTouchCallback> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)showUnreadTagForTabAtIndex:(long long)arg1 withType:(long long)arg2 withCount:(unsigned long long)arg3 withUin:(id)arg4;
- (void)showUnreadTagForTabAtIndexOnMainThread:(id)arg1;
- (void)hiddenAll:(long long)arg1;
- (void)showeHeadRedPointUnreadOnMainThread:(long long)arg1 uin:(id)arg2;
- (void)showeNumberRedPointUnreadOnMainThread:(long long)arg1 count:(long long)arg2;
- (void)reloadAppearance;
- (void)layoutSubviews;
- (void)initSubClusterButtons;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

