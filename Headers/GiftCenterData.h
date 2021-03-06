//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface GiftCenterData : MMObject <PBCoding>
{
    unsigned int type;
    unsigned int positionId;
    NSString *title;
    NSString *desc;
    NSString *jumpUrl;
    NSString *imgUrl;
    NSArray *signGiftList;
    NSString *externInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
- (void)parse:(id)arg1;
@property(nonatomic) unsigned int positionId; // @synthesize positionId;
@property(retain, nonatomic) NSArray *signGiftList; // @synthesize signGiftList;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned int type; // @synthesize type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

