//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterFriendRankCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSArray, NSString;

@interface GameCenterNewRankListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, GameCenterFriendRankCellDelegate>
{
    MMTableView *_tableView;
    NSArray *_rankList;
    NSString *_rankTitle;
    NSString *_myDesc;
    NSString *_downloadUrl;
    int _sourceScene;
    NSString *_appID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)createHeaderView;
- (void)dealloc;
- (void)initEmptyView;
- (void)initTableView;
- (id)initWithRankList:(id)arg1 appID:(id)arg2 Title:(id)arg3 RankTitle:(id)arg4 MyDesc:(id)arg5 DownloadUrl:(id)arg6 sourceScene:(int)arg7;
- (void)onLaunchGame;
- (void)onRankCell:(id)arg1 upButtonClickedWithRankInfo:(id)arg2;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

