//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface QQRichStatusText : UILabel
{
    _Bool _hasDataText;
    long long _actionTextStartIndex;
    long long _actiontextEndIndex;
    long long _dataTextStartIndex;
    long long _dataTextEndIndex;
    int _xo;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)reportWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) long long actionTextStartIndex; // @dynamic actionTextStartIndex;
@property(nonatomic) long long actiontextEndIndex; // @dynamic actiontextEndIndex;
@property(nonatomic) long long dataTextEndIndex; // @dynamic dataTextEndIndex;
@property(nonatomic) long long dataTextStartIndex; // @dynamic dataTextStartIndex;
@property(nonatomic) _Bool hasDataText; // @dynamic hasDataText;

@end

