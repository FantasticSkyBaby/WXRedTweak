//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "ShakeMsgNotifyMgrDelegate.h"

@class NSString, ShakeBeaconStorage, ShakeMsgNotifyMgr, ShakeMusicStorage, ShakePeopleStorage, ShakeTvStorage;

@interface ShakeMgr : MMService <ShakeMsgNotifyMgrDelegate, MMService>
{
    int m_shakeType;
    ShakePeopleStorage *m_peopleStorage;
    ShakeMusicStorage *m_musicStorage;
    ShakeTvStorage *m_tvStorage;
    ShakeBeaconStorage *m_beaconStorage;
    long long m_peopleStorageRefCount;
    long long m_pageStorageRefCount;
    long long m_musicStorageRefCount;
    long long m_tvStorageRefCount;
    long long m_shakeShareStorageRefCount;
    long long m_beaconStorageRefCount;
    ShakeMsgNotifyMgr *m_shakeMsgNotifyMgr;
}

- (void).cxx_destruct;
- (void)ClearMusicStorage;
- (void)ClearPeopleStorage;
- (void)ClearTvStorage;
- (void)LoadBeaconStorage;
- (void)LoadMusicStorage;
- (void)LoadPeopleStorage;
- (void)LoadTvStorage;
- (void)NotifyStatusChanged;
- (void)SaveMusicStorage:(_Bool)arg1;
- (void)SavePeopleStorage:(_Bool)arg1;
- (void)SaveTvStorage:(_Bool)arg1;
- (void)beginBeaconStorage;
- (void)beginMusicStorage;
- (void)beginPeopleStorage;
- (void)beginTvStorage;
- (_Bool)canShowShakeMusic;
- (_Bool)canShowShakeTV;
- (void)clearBeaconStorage;
- (void)dealloc;
- (void)deleteAllMessages;
- (void)deleteMessageItem:(id)arg1;
- (void)endBeaconStorage;
- (void)endMusicStorage;
- (void)endPeopleStorage;
- (void)endTvStorage;
- (id)getBeaconStorage;
- (id)getLastestUnreadMessage;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getMusicStorage;
- (id)getPeopleStorage;
- (id)getShakeBackgroundView;
- (int)getShakeType;
- (int)getSoundStatus;
- (id)getTvStorage;
- (unsigned long long)getUnreadMessageCount;
- (id)getUnreadMessages;
- (id)getUnreadMsgPidDesc;
- (_Bool)hasUnreadMessages;
- (id)init;
- (void)insertMsgItem:(id)arg1;
- (_Bool)isShakeMusicOversea;
- (void)markMessageListRead:(id)arg1;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onShakeMsgUnreadCountChanged;
- (void)saveBeaconStorage:(_Bool)arg1;
- (void)setSoundStatus:(int)arg1;
- (void)shakeSwitch:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

