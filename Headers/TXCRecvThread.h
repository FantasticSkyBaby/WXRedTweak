//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

@interface TXCRecvThread : NSObject
{
    struct CTXRtmpRecvThread *_instance;
    NSLock *_instanceMutex;
    NSString *_playUrl;
    _Bool _bQuicChannel;
}

- (void).cxx_destruct;
- (id)getRecvStatus;
- (id)init:(id)arg1 quic:(_Bool)arg2;
- (void)startThread:(id)arg1;
- (void)stopThread;

@end

