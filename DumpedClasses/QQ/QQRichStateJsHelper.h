//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQRichStateJsHelper : NSObject
{
    id <QQRichStateJsHelperDelegate> _delegate;
}

+ (id)dictionaryWithURLQueryString:(id)arg1;
+ (id)parseWebAppApiCall:(id)arg1;
+ (_Bool)isWebAppApiCall:(id)arg1 method:(id)arg2 query:(id)arg3 resp:(id *)arg4;
@property(nonatomic) id <QQRichStateJsHelperDelegate> delegate; // @synthesize delegate=_delegate;

@end

