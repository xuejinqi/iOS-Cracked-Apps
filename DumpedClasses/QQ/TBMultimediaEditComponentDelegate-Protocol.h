//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBMultimediaEditComponent;

@protocol TBMultimediaEditComponentDelegate <NSObject>

@optional
- (void)componentReset:(TBMultimediaEditComponent *)arg1;
- (void)componentStop:(TBMultimediaEditComponent *)arg1;
- (void)componentStart:(TBMultimediaEditComponent *)arg1;
- (void)componentButtonClicked:(TBMultimediaEditComponent *)arg1;
@end

