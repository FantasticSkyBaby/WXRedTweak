//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableData;

@interface TXAudioBufferQueue : NSObject
{
    NSMutableArray *_queue;
    NSMutableData *_dataBuf;
    NSMutableArray *_timeRangeArray;
    struct AudioStreamBasicDescription _ASBD;
    struct SwrContext *_swrContext;
    char *_swrBuffer;
    unsigned long long _swrBufferSize;
    double _sampleRate;
}

- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)count;
- (void)dealloc;
- (CDStruct_1b6d18a9)findBestMatch:(unsigned long long)arg1;
- (id)initWithDescription:(const struct AudioStreamBasicDescription *)arg1;
- (id)pop;
- (void)push:(struct opaqueCMSampleBuffer *)arg1;
- (void)push:(struct AudioBuffer)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
@property double sampleRate; // @synthesize sampleRate=_sampleRate;

@end

