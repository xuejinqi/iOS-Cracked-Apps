//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface aluGatewayResponse : NSObject
{
    int _resultStatus;
    NSString *_memo;
    id _result;
    NSString *_tips;
}

@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) int resultStatus; // @synthesize resultStatus=_resultStatus;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
- (void).cxx_destruct;

@end

