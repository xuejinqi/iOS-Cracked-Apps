//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBar.h"

@class CustomLeftView, NSString, UIActivityIndicatorView, UIImageView, UILabel, UITextField;

@interface TaggedSearchBar : QQSearchBar
{
    NSString *_searchTag;
    float _tagOriginX;
    float _tagOriginY;
    float _tagWidth;
    CustomLeftView *_customLeftView;
    UIImageView *_magnifyGlass;
    UIActivityIndicatorView *_indicator;
    UILabel *_tagLabel;
    _Bool _showIndicator;
    _Bool _tagDeleted;
    _Bool _editing;
    id <TaggedSearchBarDelegate> _delegateEx;
}

@property(nonatomic) id <TaggedSearchBarDelegate> delegateEx; // @synthesize delegateEx=_delegateEx;
@property(copy, nonatomic) NSString *searchTag; // @synthesize searchTag=_searchTag;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cancelSearch;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)text;
- (void)setText:(id)arg1;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)showLoadingIndicatorDelay;
- (void)dealloc;
- (void)resizeLeftView;
@property(readonly, nonatomic) _Bool isSearchingWithTag;
- (void)layoutSubviews;
- (void)handleKeyboardWillHide:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UITextField *textField;

@end

