//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TFDialogVO;

@interface TFToCardFeeTipManager : NSObject
{
    long long onceToken;
    TFDialogVO *_dialogVO;
}

@property(retain, nonatomic) TFDialogVO *dialogVO; // @synthesize dialogVO=_dialogVO;
- (void).cxx_destruct;
- (void)showFeeTip;
- (id)initWithDialogVO:(id)arg1;

@end

