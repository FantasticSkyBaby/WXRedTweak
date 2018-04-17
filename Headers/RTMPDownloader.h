//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXIStreamDownloader.h"

@class NSLock, NSMutableArray, TXCRecvThread;

@interface RTMPDownloader : TXIStreamDownloader
{
    TXCRecvThread *_currentThread;
    NSLock *_threadMutex;
    NSMutableArray *_arrayUrls;
    _Bool _hasTcpStreamUrl;
}

- (void).cxx_destruct;
- (void)connectServer:(double)arg1;
- (void)dealloc;
- (id)getDownloadStats;
- (id)init;
- (void)reconnectServer:(_Bool)arg1;
- (void)sendNotifyEvent:(unsigned long long)arg1;
- (void)startDownload:(id)arg1;
- (void)stopDownload;

@end
