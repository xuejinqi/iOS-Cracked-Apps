//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableDictionary, NSString;

@interface RPContentView : UIView
{
    NSString *_path;
    NSArray *_displayInfos;
    id _delegate;
    int _xo;
    NSMutableDictionary *_tagCache;
    _Bool _isEnterForeground;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)shrinkDisplayToWidth:(double)arg1;
- (_Bool)isUseSameDisplayinfo:(id)arg1 fromRPItemView:(id)arg2;
@property(retain, nonatomic) NSArray *displayInfos; // @dynamic displayInfos;
- (long long)displayInfoTag:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id delegate; // @dynamic delegate;
@property(retain, nonatomic) NSString *path; // @dynamic path;

@end

