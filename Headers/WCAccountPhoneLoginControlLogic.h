//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "WCAccountBindPhoneForRegCGIDelegate.h"
#import "WCAccountFillPhoneViewControllerDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountPhoneVerifyUpViewControllerDelegate.h"
#import "WCAccountPhoneVerifyViewControllerDelegate.h"
#import "WCAccountRegByOldPhoneViewControllerDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"
#import "WCAccountVoiceVerifyViewControllerDelegate.h"
#import "WCBaseControlMgrExt.h"

@class NSString, WCAccountBindPhoneForRegCGI, WCAccountManualAuthControlLogic;

@interface WCAccountPhoneLoginControlLogic : WCAccountBaseControlLogic <WCBaseControlMgrExt, WCAccountFillPhoneViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountRegByOldPhoneViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBindPhoneForRegCGIDelegate, WCAccountPhoneVerifyUpViewControllerDelegate>
{
    unsigned int m_uiTryCount;
    _Bool m_bNeedSetPwd;
    WCAccountBindPhoneForRegCGI *m_modelLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    unsigned int m_uiCheckVerifyUpCount;
}

- (void).cxx_destruct;
- (void)cancelAllEvent;
- (void)checkHavePwd;
- (_Bool)checkPhoneNumberStatus:(unsigned int)arg1;
- (_Bool)checkVerifyCode:(id)arg1;
- (void)dealloc;
- (void)forceRegisterForPhone;
- (id)getRegSessionID;
- (void)getVerifyCode;
- (_Bool)getVerifyCodeReady;
- (_Bool)getVoideVerifyCodeReady:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)jumpToManulLoginControlMgrToRegister:(id)arg1;
- (void)loginAccount;
- (void)loginForPhone;
- (void)onCheckRegPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (_Bool)onErrorHandleLogicDone;
- (_Bool)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (void)onFillPhoneBack;
- (void)onFillPhoneNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onGetRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyBack;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyUpBack;
- (void)onPhoneVerifyUpNext;
- (void)onPhoneVerifyVoice;
- (void)onRegByOldPhoneBack;
- (void)onRegByOldPhoneContinueReg;
- (void)onRegByOldPhoneLogin;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onTrueFillPhoneNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onVoiceVerifyBack;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)pause;
- (void)registerForPhone;
- (void)resume;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
