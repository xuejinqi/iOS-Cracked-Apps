//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IQQModelLabel <NSObject>
+ (void)setSearchModelPriority:(int)arg1;
- (int)getSearchModelPriority;
- (int)getSearchModelType;
- (long long)compareLabel:(id <IQQModelLabel>)arg1;
- (struct _NSRange)getModelLabelMatchRange;
- (NSString *)getRemarkLabel;
- (NSString *)getModelLabel;
@end

