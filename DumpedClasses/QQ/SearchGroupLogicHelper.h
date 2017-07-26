//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@interface SearchGroupLogicHelper : NSObject
{
    UIViewController *_viewController;
    NSString *_currenKeyword;
    NSString *_currenReportID;
    NSString *_currentSubID;
    int _xo;
}

- (void).cxx_destruct;
- (_Bool)checkNetwork;
- (void)pushQQGroupProfileViewController:(id)arg1 GroupSourceID:(int)arg2 GroupSubID:(int)arg3;
- (void)ActionKeywordSearchResult:(id)arg1;
- (void)ActionAccountSearchGroupResult:(id)arg1;
- (void)searchKeyword:(id)arg1 reportID:(id)arg2 subID:(id)arg3;
- (void)searchGroupAccount:(id)arg1 reportID:(id)arg2 subID:(id)arg3;
- (_Bool)isGroupAccount:(id)arg1;
- (_Bool)searchGroupAndShowInfo:(id)arg1 reportID:(id)arg2 reportSubID:(id)arg3;
- (_Bool)searchGroupAndJoin:(id)arg1 reportID:(id)arg2 reportSubID:(id)arg3;
- (void)searchGroupForKeyword:(id)arg1 reportID:(id)arg2 subID:(id)arg3;
- (id)initWithUIViewCtrl:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *currenKeyword; // @dynamic currenKeyword;
@property(copy, nonatomic) NSString *currenReportID; // @dynamic currenReportID;
@property(copy, nonatomic) NSString *currentSubID; // @dynamic currentSubID;
@property(retain, nonatomic) UIViewController *viewController; // @dynamic viewController;

@end

