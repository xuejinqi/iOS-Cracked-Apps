//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation;

@interface TightTableViewCellModel : NSObject
{
    NSInvocation *_selectInvocation;
    CDUnknownBlockType _callBack;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) NSInvocation *selectInvocation; // @synthesize selectInvocation=_selectInvocation;
- (void).cxx_destruct;
- (void)convertFromModel:(id)arg1;
- (id)reuseIdentifier;
- (double)heightForRow;

@end

