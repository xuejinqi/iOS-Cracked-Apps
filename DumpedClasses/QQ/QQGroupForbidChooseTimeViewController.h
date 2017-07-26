//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQGroupTimeCountDownDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, QQGroupForbidTimeCountDownView, UIButton, UITableView;

@interface QQGroupForbidChooseTimeViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, QQGroupTimeCountDownDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_tableViewData;
    NSMutableArray *_shutupTimeArray;
    UIButton *_sureButton;
    QQGroupForbidTimeCountDownView *_datePicker;
    unsigned long long _groupCode;
    unsigned long long _memUin;
    int _selectedRow;
    int _selectedRowUnCustom;
    int _indexOfCustomRow;
    int _maxDay;
    int _defDay;
    int _defHour;
    int _defMinute;
    _Bool _isWillCustomTime;
    _Bool _isDidCustomTime;
    double _customTime;
}

- (id)getTextBySeconds:(unsigned int)arg1;
- (void)close;
- (void)setPushTime:(double)arg1;
- (void)showDatePicker:(id)arg1;
- (void)headerTapped;
- (_Bool)isShowSureButton;
- (void)onSettingForbiddenTime:(id)arg1;
- (void)unSelectAllCell;
- (void)unSelectCell:(id)arg1;
- (void)selectCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)createDefaultStyleForCellWithIdentifier:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)scrollTableToHeader:(_Bool)arg1;
- (void)scrollTableToFoot:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)initDataSource;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithGroupCode:(unsigned long long)arg1 withMemUin:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

