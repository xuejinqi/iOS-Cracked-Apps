//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface DAUViewControllerShowEvent : NSObject
{
    NSDictionary *_viewDidLoadEvent;
    NSDictionary *_viewDidAppearEvent;
    NSDictionary *_updateTitleEvent;
}

@property(retain, nonatomic) NSDictionary *updateTitleEvent; // @synthesize updateTitleEvent=_updateTitleEvent;
@property(retain, nonatomic) NSDictionary *viewDidAppearEvent; // @synthesize viewDidAppearEvent=_viewDidAppearEvent;
@property(retain, nonatomic) NSDictionary *viewDidLoadEvent; // @synthesize viewDidLoadEvent=_viewDidLoadEvent;
- (void).cxx_destruct;

@end

