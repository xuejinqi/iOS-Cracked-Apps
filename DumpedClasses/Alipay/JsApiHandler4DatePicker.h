//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JsApiHandlerBase.h"

@class H5DatePicker, NSString;

@interface JsApiHandler4DatePicker : JsApiHandlerBase
{
    H5DatePicker *_h5DatePicker;
    NSString *_currentTarget;
}

@property(retain, nonatomic) NSString *currentTarget; // @synthesize currentTarget=_currentTarget;
@property(retain, nonatomic) H5DatePicker *h5DatePicker; // @synthesize h5DatePicker=_h5DatePicker;
- (void).cxx_destruct;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

