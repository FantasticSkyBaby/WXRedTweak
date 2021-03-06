//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WAPermissionMgrExtension.h"
#import "WAPermissionUserAuthImplDelegate.h"

@class NSDictionary, NSString, WAPermissionInfo, WAPermissionUserAuthImpl;

@interface WAPermissionHandler : NSObject <WAPermissionMgrExtension, WAPermissionUserAuthImplDelegate>
{
    NSString *_appID;
    NSString *_userName;
    unsigned int _debugModeType;
    unsigned int _appVersion;
    NSString *_pluginHostAppID;
    NSString *_sessionId;
    CDUnknownBlockType _permissionInfoCompletionHandler;
    WAPermissionUserAuthImpl *_userAuthImpl;
    _Bool _isFromBackground;
    unsigned int _appServiceType;
    unsigned int _enterScene;
    id <WAPermissionHandlerDelegate> _delegate;
    WAPermissionInfo *_permissionInfo;
    NSString *_pagePath;
    NSDictionary *_dicLaunchParameter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
- (void)asyncUpdateLaunchPermissionInfo;
- (_Bool)checkRunInMainThread:(id)arg1;
- (_Bool)checkRunMode:(id)arg1 onWebview:(_Bool)arg2;
- (void)checkUserAuthWithAppID:(id)arg1 jsapi:(id)arg2 handler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4 scene:(unsigned long long)arg5;
- (void)dealloc;
@property(nonatomic) __weak id <WAPermissionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *dicLaunchParameter; // @synthesize dicLaunchParameter=_dicLaunchParameter;
@property unsigned int enterScene; // @synthesize enterScene=_enterScene;
- (id)getActionSheetPermissionInfoFromLaunchCGI;
- (id)getLaunchAction;
- (id)getPermissionResultWithJSAPI:(id)arg1 inRunningState:(unsigned int)arg2;
- (id)getPublicResInfoFromLaunchCGI;
- (id)getWeAppBindJumpToUserNameFromAppID:(id)arg1;
- (id)getWeAppBindPluginUserNameFromAppID:(id)arg1;
- (id)initWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 sessionId:(id)arg6 pagePath:(id)arg7 externalInfo:(id)arg8 dicLaunchParameter:(id)arg9;
@property _Bool isFromBackground; // @synthesize isFromBackground=_isFromBackground;
- (_Bool)isLastRequestFromBackgroundScene;
- (_Bool)isSyncGetLaunchPermissionInfo;
- (void)loadPermissionInfo;
- (void)onGetLaunchPermissionInfo:(id)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
@property(retain) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain) WAPermissionInfo *permissionInfo; // @synthesize permissionInfo=_permissionInfo;
- (void)requestLaunchPermssionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateLaunchPermissionInfoOnEnterForeground;
- (void)updatePagePath:(id)arg1;
- (void)updateScene:(unsigned int)arg1 dicLaunchParameter:(id)arg2;
- (void)updateSessionId:(id)arg1;
- (void)userAuthFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 scene:(unsigned long long)arg4;
- (void)userAuthOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

