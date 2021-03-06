//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ActionList, MMTableView, NSString;

@interface ProductPriceDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _getA8KeyScence;
    NSString *_productId;
    ActionList *_actionList;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
- (void)OnReturn;
@property(retain, nonatomic) ActionList *actionList; // @synthesize actionList=_actionList;
- (id)genDescLabel2Cell:(id)arg1;
- (id)genDigestLabel2Cell:(id)arg1;
- (id)genNameLabel2Cell:(id)arg1;
- (id)getSystemAppID:(unsigned int)arg1;
- (id)initWithActionList:(id)arg1 ProductID:(id)arg2 Scence:(unsigned int)arg3;
- (void)makeCell:(id)arg1 actionBase:(id)arg2;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

