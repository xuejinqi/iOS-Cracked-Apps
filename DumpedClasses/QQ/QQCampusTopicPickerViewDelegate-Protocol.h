//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQCampusTopic, QQCampusTopicPickerView;

@protocol QQCampusTopicPickerViewDelegate <NSObject>
- (void)topicPickerView:(QQCampusTopicPickerView *)arg1 deselectButtonTouched:(id)arg2;
- (void)topicPickerView:(QQCampusTopicPickerView *)arg1 selectButtonTouched:(id)arg2;
- (void)topicPickerView:(QQCampusTopicPickerView *)arg1 didSelectTopic:(QQCampusTopic *)arg2;
@end

