//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSArray, NSString;

@interface WCLabsSettingViewController : MMUIViewController <ILinkEventExt, tableViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    NSArray *m_onlineLabsItems;
    NSArray *m_offlineLabItems;
    _Bool m_bHasOnlineSection;
    _Bool m_bHasOfflineSection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)genHeadOrFootView:(id)arg1 topPading:(double)arg2 bottomPadding:(double)arg3 textAlignment:(long long)arg4;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)genTableHeaderView;
- (double)getHeaderBottomPaddingInSection:(long long)arg1;
- (id)getHeaderTitleWithSection:(long long)arg1;
- (double)getHeaderTopPaddingInSection:(long long)arg1;
- (id)getLabsAppItemAtIndexPath:(id)arg1;
- (double)heightForHeadOrFootView:(id)arg1 topPading:(double)arg2 bottomPadding:(double)arg3;
- (void)initFooterView;
- (id)initWithSortedOnlineLabsItems:(id)arg1 OfflineLabItems:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
