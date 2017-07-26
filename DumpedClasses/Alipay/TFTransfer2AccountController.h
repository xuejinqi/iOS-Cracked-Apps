//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APContactViewControllerDelegate.h"
#import "TFMatchMobileListViewDelegate.h"
#import "TFTransferFormProtocol.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIViewControllerShowInForeground.h"

@class APContactInfo, APContactLocalSearchManager, APInputBox, NSString, TFAccountPasteComponent, TFMatchMobileListView, TFPasteTipView, TFReciverInfoChecker, TFTransferRequest, UIActivityIndicatorView, UIButton, UITableView, UITextField;

@interface TFTransfer2AccountController : DTViewController <UITableViewDataSource, UIViewControllerShowInForeground, UITableViewDelegate, UITextFieldDelegate, UIActionSheetDelegate, APContactViewControllerDelegate, TFMatchMobileListViewDelegate, TFTransferFormProtocol>
{
    _Bool _isShowForeground;
    _Bool _isKeyboardVisible;
    _Bool _contactOverlap;
    _Bool _showPasteTip;
    int _sourceIDFormatType;
    int _autoCallKeyboardRef;
    UITableView *_tableView;
    UIButton *_nextBtn;
    APInputBox *_accountInputBox;
    NSString *_selectedUid;
    TFReciverInfoChecker *_reciverInfoChecker;
    UITextField *_activeField;
    TFMatchMobileListView *_matchMobileListView;
    TFTransferRequest *_transferRequest;
    APContactInfo *_selectedContact;
    APContactLocalSearchManager *_contactSearchMgr;
    UIActivityIndicatorView *_loadingActivityView;
    TFAccountPasteComponent *_pasteComponent;
    TFPasteTipView *_pasteTipView;
    NSString *_delay;
}

@property(retain, nonatomic) NSString *delay; // @synthesize delay=_delay;
@property(nonatomic) _Bool showPasteTip; // @synthesize showPasteTip=_showPasteTip;
@property(retain, nonatomic) TFPasteTipView *pasteTipView; // @synthesize pasteTipView=_pasteTipView;
@property(retain, nonatomic) TFAccountPasteComponent *pasteComponent; // @synthesize pasteComponent=_pasteComponent;
@property(retain, nonatomic) UIActivityIndicatorView *loadingActivityView; // @synthesize loadingActivityView=_loadingActivityView;
@property(retain, nonatomic) APContactLocalSearchManager *contactSearchMgr; // @synthesize contactSearchMgr=_contactSearchMgr;
@property(nonatomic) _Bool contactOverlap; // @synthesize contactOverlap=_contactOverlap;
@property(nonatomic) int autoCallKeyboardRef; // @synthesize autoCallKeyboardRef=_autoCallKeyboardRef;
@property(nonatomic) _Bool isKeyboardVisible; // @synthesize isKeyboardVisible=_isKeyboardVisible;
@property(retain, nonatomic) APContactInfo *selectedContact; // @synthesize selectedContact=_selectedContact;
@property(retain, nonatomic) TFTransferRequest *transferRequest; // @synthesize transferRequest=_transferRequest;
@property(retain, nonatomic) TFMatchMobileListView *matchMobileListView; // @synthesize matchMobileListView=_matchMobileListView;
@property(retain, nonatomic) UITextField *activeField; // @synthesize activeField=_activeField;
@property(retain, nonatomic) TFReciverInfoChecker *reciverInfoChecker; // @synthesize reciverInfoChecker=_reciverInfoChecker;
@property(retain, nonatomic) NSString *selectedUid; // @synthesize selectedUid=_selectedUid;
@property(retain, nonatomic) APInputBox *accountInputBox; // @synthesize accountInputBox=_accountInputBox;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isShowForeground; // @synthesize isShowForeground=_isShowForeground;
@property(nonatomic) int sourceIDFormatType; // @synthesize sourceIDFormatType=_sourceIDFormatType;
- (void).cxx_destruct;
- (void)scrollToResignFirstResponder;
- (void)matchMobileListView:(id)arg1 didSelectedMobile:(id)arg2;
- (_Bool)needMoveView;
- (_Bool)activeViewController;
- (void)removeKeyBoardNotification;
- (void)addKeyBoardNotification;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)viewControllerIsShowForeground;
- (void)pop;
- (void)textFieldInputChanged:(id)arg1;
- (id)speratorLineWithLocY:(double)arg1;
- (void)gotoConfirm:(id)arg1 info:(id)arg2;
- (void)hideLoadingActivityView;
- (void)showLoadingActivityView;
- (void)doSelectedContact:(id)arg1 result:(_Bool)arg2 msg:(id)arg3;
- (void)updateAuAccountWithContactInfo:(id)arg1;
- (void)authAccountinfo:(id)arg1;
- (void)validdateWithSearchAccount:(id)arg1;
- (void)onPressContactBt;
- (void)doNext;
- (void)checkNextStepValid;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didSelectAPContactInfo:(id)arg1 controller:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)globalSearchAutoSubmit;
- (void)clearTipView;
- (void)loadPasteComponent;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)createMatchMobileListView;
- (void)createTableviews;
- (void)loadBackgound;
- (void)buildTitle;
- (void)back;
- (void)setDelegate;
- (void)clearDelegate;
- (void)clearAll;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dispatchBizWithRequest:(id)arg1;
- (id)initWithTransferRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

