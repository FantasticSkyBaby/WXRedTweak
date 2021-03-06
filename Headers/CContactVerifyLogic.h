//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MMLoadingView, NSArray, NSString, UIAlertView, UIView;

@interface CContactVerifyLogic : MMObject <PBMessageObserverDelegate, UITextFieldDelegate, UIAlertViewDelegate>
{
    NSArray *m_arrVerifyContactWrap;
    UIView *m_parentView;
    NSString *m_nsVerifyValue;
    MMLoadingView *m_loadingView;
    unsigned int m_uiOpCode;
    _Bool m_bFromChatRoom;
    _Bool m_bNotShowAlert;
    _Bool m_bNeedSaveToLocalDB;
    UIAlertView *m_alert;
    unsigned int m_uiFriendScene;
    id <contactVerifyLogicDelegate> m_delegate;
    int _m_qrAddScene;
    NSString *m_nsStartLoadingText;
    NSString *m_nsStartLoadingOKText;
    NSString *_m_reportInfo;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ProcessStrangerContactTagByName:(id)arg1;
- (void)SaveToLocalDB;
- (void)addTextField:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (_Bool)doVerify:(id)arg1;
- (void)doVerifyByAlertView:(id)arg1;
- (_Bool)doubleCheckContactAntispamTickets:(id)arg1 withRequest:(id)arg2;
- (id)filterString:(id)arg1;
- (id)getAlertMessage;
- (id)getAlertTitle;
- (id)getErrorTitle;
- (id)getLoadingOkText;
- (id)getLoadingText;
- (double)getTextFieldTopMargin;
- (void)handleVerifyOk:(id)arg1;
- (id)init;
- (_Bool)isBrandAccount;
- (_Bool)isEnterpriseBrand;
@property(nonatomic) _Bool m_bNotShowAlert; // @synthesize m_bNotShowAlert;
@property(nonatomic) __weak id <contactVerifyLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(copy, nonatomic) NSString *m_nsStartLoadingOKText; // @synthesize m_nsStartLoadingOKText;
@property(copy, nonatomic) NSString *m_nsStartLoadingText; // @synthesize m_nsStartLoadingText;
@property(nonatomic) int m_qrAddScene; // @synthesize m_qrAddScene=_m_qrAddScene;
@property(retain, nonatomic) NSString *m_reportInfo; // @synthesize m_reportInfo=_m_reportInfo;
- (_Bool)needSaveToLocalDB;
- (_Bool)needSetSayHelloStatus;
- (void)onSendContactVerify:(id)arg1;
- (void)reset;
- (_Bool)sendVerifyUserRequest:(id)arg1;
- (void)showVerifyAlert;
- (void)startForSendVerifyMsg:(id)arg1 parentView:(id)arg2 verifyMsg:(id)arg3;
- (void)startLoading;
- (void)startWithVerifyContactWrap:(id)arg1 opCode:(unsigned int)arg2 parentView:(id)arg3 fromChatRoom:(_Bool)arg4;
- (void)stopLoading;
- (void)stopLoadingAndShowOK;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateWordCount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

