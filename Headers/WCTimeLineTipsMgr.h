//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WCTimeLineTipsMgr : NSObject
{
    NSMutableArray *m_foldedSightQueue;
}

- (void).cxx_destruct;
- (void)addFoldedSight:(id)arg1;
- (void)dealloc;
- (void)deleteFoldedSight:(id)arg1;
- (id)getFoldedSights;
- (id)init;
- (_Bool)loadQueue;
- (_Bool)saveFoldedSightQueue;

@end

