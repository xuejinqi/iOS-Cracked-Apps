//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMItemElementAction.h"

@class NSString;

@interface QQSMItemElementGroupitem : QQSMItemElementAction
{
    int _paddingLeft;
    int _paddingRight;
    NSString *_animation;
    NSString *_duration;
    NSString *_expand;
}

@property(nonatomic) int paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) int paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(copy, nonatomic) NSString *expand; // @synthesize expand=_expand;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *animation; // @synthesize animation=_animation;
- (void)dealloc;

@end

