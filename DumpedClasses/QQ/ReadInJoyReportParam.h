//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ReadInJoyReportParam : NSObject
{
    int _user_idle_report;
    int _tab_click_gap_in_seconds;
    int _tab_click_count_limit;
    int _tab_click_push_algo_id;
    int _tab_click_forbid_report_time_in_seconds;
    int _fore_ground_gap_in_seconds;
}

@property(nonatomic) int fore_ground_gap_in_seconds; // @synthesize fore_ground_gap_in_seconds=_fore_ground_gap_in_seconds;
@property(nonatomic) int tab_click_forbid_report_time_in_seconds; // @synthesize tab_click_forbid_report_time_in_seconds=_tab_click_forbid_report_time_in_seconds;
@property(nonatomic) int tab_click_push_algo_id; // @synthesize tab_click_push_algo_id=_tab_click_push_algo_id;
@property(nonatomic) int tab_click_count_limit; // @synthesize tab_click_count_limit=_tab_click_count_limit;
@property(nonatomic) int tab_click_gap_in_seconds; // @synthesize tab_click_gap_in_seconds=_tab_click_gap_in_seconds;
@property(nonatomic) int user_idle_report; // @synthesize user_idle_report=_user_idle_report;
- (int)getValueForKey:(id)arg1;
- (void)updateParam;

@end

