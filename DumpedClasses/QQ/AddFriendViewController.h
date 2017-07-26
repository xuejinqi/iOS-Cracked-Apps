//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITextFieldDelegate.h"

@class AddFriendSendMessageViewController, NSMutableArray, NSString, ProgressIndicator, UIActivityIndicatorView, UIButton, UILabel, UITextField, UIViewController;

@interface AddFriendViewController : QQViewController <UITextFieldDelegate>
{
    _Bool isInprogress;
    NSString *_uin;
    NSString *_searchUin;
    UITextField *inputField;
    UIButton *btnSearch;
    UIActivityIndicatorView *progress;
    UILabel *statusLabel;
    UIViewController *myRootViewController;
    ProgressIndicator *myIndicator;
    AddFriendSendMessageViewController *_sendMessageViewController;
    UILabel *tipsMsg;
    int _controllerType;
    int _reqSummarySeqID;
    _Bool _needBackToAIO;
    NSMutableArray *_mayKnowFriendList;
    _Bool _notShowKeyboardAutomic;
}

@property _Bool notShowKeyboardAutomic; // @synthesize notShowKeyboardAutomic=_notShowKeyboardAutomic;
@property(retain, nonatomic) AddFriendSendMessageViewController *sendMessageViewController; // @synthesize sendMessageViewController=_sendMessageViewController;
- (void)ActionOnExchangeUinResult:(id)arg1;
- (void)onResponseSummaryNotification:(id)arg1;
- (void)_searchBadResultsFilter:(id)arg1;
- (void)onGetSearchResultNoti:(id)arg1;
- (void)onExchangeUinTimeout;
- (void)onTimeout;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)requestSearchFriendModel:(id)arg1;
- (void)refeshFriendList;
- (void)onClickSearchButton:(id)arg1;
- (void)searchForGroups:(id)arg1;
- (void)startSearch;
- (void)leftButtonClick:(id)arg1;
- (void)backToPreView:(id)arg1;
- (void)setInprogress:(_Bool)arg1;
- (void)reloadAppearance;
- (void)restoreData;
- (void)loadView;
- (void)ActionDisplayAddFriendResponse:(id)arg1;
- (void)ActionDisplayFriendDetailVew:(id)arg1;
- (void)ActionSearchGroupResult:(id)arg1;
- (void)pushQQGroupProfileViewController:(id)arg1 GroupSourceID:(int)arg2;
- (void)ActionKeyWordsSearchGroupResult:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)reloadData;
- (void)addObserver;
- (id)initWithUin:(id)arg1 rootController:(id)arg2 ControllerType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool needBackToAIO; // @dynamic needBackToAIO;
@property(retain, nonatomic) NSString *searchUin; // @dynamic searchUin;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

