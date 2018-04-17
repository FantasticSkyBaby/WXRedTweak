//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCLanDeviceBaseKissLogic.h"

#import "ICdnComMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "WCFacadeExt.h"

@class CdnUploadTaskInfo, NSMutableArray, NSMutableDictionary, NSString, WCLanDeviceData;

@interface WCLanDeviceImageKissLogic : WCLanDeviceBaseKissLogic <ICdnComMgrExt, PBMessageObserverDelegate, WCFacadeExt>
{
    NSMutableDictionary *m_sendTaskMap;
    WCLanDeviceData *m_deviceData;
    CdnUploadTaskInfo *m_uploadInfo;
    NSMutableArray *m_deviceWaitingUploadArray;
    _Bool m_isUploading;
    _Bool m_isDownloading;
    NSMutableArray *m_deviceWaitingDownloadArray;
    unsigned long long m_nonceNum;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (_Bool)cancelTaskWithDevice:(id)arg1;
- (void)dealloc;
- (id)encryptImageBuffer:(id)arg1;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(_Bool)arg3;
- (id)genTimeLineEncrptUrl;
- (id)getEncryptImagePath:(id)arg1;
- (unsigned long long)getRandNumber;
- (void)handleDeviceMsgTransferAppMsg:(id)arg1;
- (id)initWithDelegate:(id)arg1 deviceData:(id)arg2;
- (void)kissDeviceWithJsonStr:(id)arg1 filePath:(id)arg2 device:(id)arg3;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onKissDeviceProgressResponeWithProgress:(double)arg1 queueType:(unsigned long long)arg2;
- (void)onKissDeviceResponseWithErrorCode:(unsigned int)arg1 queueType:(unsigned long long)arg2;
- (void)onSendFileToWCLanDevice:(long long)arg1 Progress:(float)arg2 isFinish:(_Bool)arg3 ErrCode:(int)arg4;
- (void)sendFileRequestWithDevice:(id)arg1 isTroughSever:(_Bool)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4;
- (void)sendFileRequestWithDevice:(id)arg1 isTroughSever:(_Bool)arg2 fileInfo:(id)arg3 CdnUrl:(id)arg4 encKey:(id)arg5;
- (void)startDownloadImage;
- (_Bool)stopDownloadImage:(id)arg1;
- (_Bool)stopUploadWithDevice:(id)arg1;
- (void)uploadDeviceData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
