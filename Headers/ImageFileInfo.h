//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ImageFileInfo : NSObject
{
    _Bool isExistInServer;
    unsigned int checkedCount;
    unsigned int startPos;
    unsigned int totalSize;
    NSString *thumbPath;
    NSString *imagePath;
    long long n64msgID;
    NSString *attachID;
    NSString *clientID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(nonatomic) unsigned int checkedCount; // @synthesize checkedCount;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath;
- (id)init;
@property(nonatomic) _Bool isExistInServer; // @synthesize isExistInServer;
@property(nonatomic) long long n64msgID; // @synthesize n64msgID;
@property(nonatomic) unsigned int startPos; // @synthesize startPos;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath;
@property(nonatomic) unsigned int totalSize; // @synthesize totalSize;

@end

