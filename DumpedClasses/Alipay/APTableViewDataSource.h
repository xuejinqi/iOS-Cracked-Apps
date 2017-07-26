//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APTableViewDataSource.h"
#import "UITableViewDataSource.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface APTableViewDataSource : NSObject <UITableViewDataSource, APTableViewDataSource>
{
    NSMutableArray *_sections;
    NSMutableDictionary *_classMap;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (id)rowsInSection:(long long)arg1;
- (void)addSectionsFromArray:(id)arg1;
- (void)addSection:(id)arg1;
- (id)allSections;
- (void)registerClass:(Class)arg1 forCellReuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

