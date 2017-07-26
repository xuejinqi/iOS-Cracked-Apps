//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ArkAppNameView : NSObject
{
    int _retCode;
    int _sceneMask;
    NSString *_msg;
    NSString *_appPath;
    NSString *_appName;
    NSString *_appView;
    NSString *_viewDesc;
    NSMutableArray *_requiredMetaList;
    NSMutableArray *_optionalMetaList;
}

@property(readonly) NSMutableArray *optionalMetaList; // @synthesize optionalMetaList=_optionalMetaList;
@property(readonly) NSMutableArray *requiredMetaList; // @synthesize requiredMetaList=_requiredMetaList;
@property(copy) NSString *viewDesc; // @synthesize viewDesc=_viewDesc;
@property int sceneMask; // @synthesize sceneMask=_sceneMask;
@property(retain) NSString *appView; // @synthesize appView=_appView;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NSString *appPath; // @synthesize appPath=_appPath;
@property(retain) NSString *msg; // @synthesize msg=_msg;
@property int retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;
- (id)init;

@end

