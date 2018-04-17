//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface AppInnerJumpItem : MMObject <NSCopying, PBCoding>
{
    _Bool bEnableJump;
    NSString *nsJumpUrl;
    NSString *nsPushContent;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool bEnableJump; // @synthesize bEnableJump;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *nsJumpUrl; // @synthesize nsJumpUrl;
@property(retain, nonatomic) NSString *nsPushContent; // @synthesize nsPushContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
