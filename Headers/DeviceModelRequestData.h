//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface DeviceModelRequestData : MMObject <PBCoding>
{
    unsigned int m_lastRequestTime;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (id)loadFromFile;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (_Bool)isTimeForRequestNewData;
@property(nonatomic) unsigned int m_lastRequestTime; // @synthesize m_lastRequestTime;
- (void)saveToCache;
- (void)updateLastRequestTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

