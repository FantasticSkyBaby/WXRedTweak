//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface TLDSensorRecordUnit : NSObject <NSCoding>
{
    int _batteryState;
    double _timestamp;
    NSMutableArray *_accelerometerList;
    NSMutableArray *_gyroscopeList;
    NSMutableArray *_gravityList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *accelerometerList; // @synthesize accelerometerList=_accelerometerList;
@property(nonatomic) int batteryState; // @synthesize batteryState=_batteryState;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableArray *gravityList; // @synthesize gravityList=_gravityList;
@property(retain, nonatomic) NSMutableArray *gyroscopeList; // @synthesize gyroscopeList=_gyroscopeList;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@end

