//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATableViewCell.h"

@interface PrinterTableViewCell : FATableViewCell
{
    id <IPrinterTableViewCellDelegate> _delegate;
}

@property(nonatomic) id <IPrinterTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionForFileTransfer:(id)arg1;
- (void)iconTouch:(id)arg1;
- (id)transferStatusTip;

@end

