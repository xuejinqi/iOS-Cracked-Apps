//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBReqReportCommentModel : NSObject
{
    unsigned int _commentId;
    unsigned int _type;
    NSString *_feedID;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (id)description;
- (id)getRequestPBData;
- (void)dealloc;

@end

