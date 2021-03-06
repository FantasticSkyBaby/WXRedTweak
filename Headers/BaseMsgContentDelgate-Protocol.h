//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, CContact, CEmoticonWrap, CMessageWrap, LinkWeAppJumpWrap, MMInputToolView, MMWebViewController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, ServiceAppData, TranslateInfo, UIBarButtonItem, UIImage, UIView;

@protocol BaseMsgContentDelgate <NSObject>
- (void)AddAtUser:(NSString *)arg1;
- (_Bool)CanAddApp;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanOpenCamera;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanRotateOrientation;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanSendImageMsg:(UIImage *)arg1;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendTextMsg:(NSString *)arg1;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanShowBanner;
- (_Bool)CanShowSight;
- (_Bool)CanWXTalk;
- (void)CancelRecording;
- (void)CustomToolViewEX:(MMInputToolView *)arg1;
- (void)DelMsgWithMsgList:(NSArray *)arg1 DelAll:(_Bool)arg2;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (CBaseContact *)GetContact;
- (NSMutableArray *)GetDownMessageArray;
- (CMessageWrap *)GetFirstUnReadMessage;
- (NSMutableArray *)GetMessageArray;
- (NSMutableArray *)GetMessageArrayFrom:(unsigned int)arg1 createTime:(unsigned long long)arg2;
- (CMessageWrap *)GetMessageFromImage:(UIImage *)arg1;
- (NSString *)GetRightBarButtonImageName;
- (NSString *)GetRightBarButtonTitle;
- (NSMutableArray *)GetSearchedResultContentMessageArray;
- (UIImage *)GetTitleImage;
- (NSString *)GetUsrTitle;
- (NSString *)GetUsrTitleCPKey;
- (NSString *)GetUsrTitleFront;
- (NSString *)GetUsrTitleTail;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (_Bool)HasCustomToolBar;
- (UIImage *)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (_Bool)IsRecording;
- (unsigned int)NumberOfHeaderButtons;
- (void)OpenContactInfo:(CBaseContact *)arg1;
- (void)OpenDetailInfo;
- (void)OpenEmoticonToolView:(MMInputToolView *)arg1;
- (void)ResendMessage:(CMessageWrap *)arg1;
- (void)SelectLocation:(_Bool)arg1;
- (void)SendEmojiArtMessage:(NSString *)arg1;
- (void)SendEmoticonMessage:(CEmoticonWrap *)arg1;
- (void)SendMessageWrap:(CMessageWrap *)arg1;
- (void)SendNotGameEmoticonMessage:(CMessageWrap *)arg1 errorMsg:(NSString *)arg2;
- (void)SendTextMessage:(NSString *)arg1;
- (void)SendTextMessage:(NSString *)arg1 externInfo:(NSDictionary *)arg2;
- (void)ShareCard;
- (_Bool)ShouldShowMultiSelectMode;
- (_Bool)ShouldShowSearchBar;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (_Bool)ShouldShowSearchResultMessageArray;
- (_Bool)ShouldShowSearchedAnyMsg;
- (void)StartPlaying:(CMessageWrap *)arg1 FromTouch:(_Bool)arg2;
- (void)StartRecording;
- (void)StateChanged;
- (void)StopPlaying:(CMessageWrap *)arg1;
- (void)StopRecording;
- (NSString *)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (void)ViewDidAppear;
- (void)ViewDidDisappear;
- (void)ViewDidInit;
- (void)ViewLocation:(CMessageWrap *)arg1;
- (void)ViewWillAppear;
- (void)ViewWillDisappear;
- (void)ViewWillInit;
- (void)VoiceModeClicked;
- (_Bool)canReloadViewIfMemoryWarning;
- (void)clearDownLeftCount;
- (void)clearLastCreateTime;
- (void)clearSearchKeywordList;
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1;
- (void)didShowFirstUnReadMessage;
- (unsigned int)getFromScene;
- (NSArray *)getSearchKeywordList;
- (unsigned int)getSearchedMsgLocalID;
- (NSString *)getSubTitle;
- (_Bool)isInForwardMsgPreView;
- (_Bool)isUsrTitleUnsafe;
- (NSString *)nameForHeadImageLongPressed:(CBaseContact *)arg1;
- (void)onBackFromNavigationController;
- (void)onGroupPayButtonClick;
- (_Bool)onLoadDownMoreMessage;
- (NSMutableArray *)onLoadMoreMessage;
- (void)onMultiTalkButtonClick;
- (void)onOpenCameraController;
- (void)onOpenFileBrowser;
- (void)onOpenMediaBrowser;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenMyFavoritesListController;
- (void)onOpenServiceApp:(ServiceAppData *)arg1;
- (void)onOpenServiceAppListController;
- (void)onPopFromNavigationController;
- (void)onRedEnvelopesControlLogic;
- (void)onSaveDraft;
- (void)onSendCaptrueImage:(NSURL *)arg1;
- (void)onTextChange:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onTransferMoneyControlLogic;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)onWillPopFromNavigationController;
- (void)onWillPushFromNavigationController;
- (NSArray *)previewActionItems;
- (void)setLastCreateTime:(unsigned long long)arg1;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (_Bool)shouldHightlightSearchedKeyWord;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (_Bool)shouldSearchedMsgHightlight;

@optional
- (UIBarButtonItem *)GetRightBarBtn;
- (UIImage *)GetTitleTailImage;
- (UIImage *)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (_Bool)NeedRightButtonRedDot;
- (void)OnTagLink:(NSString *)arg1 messageWrap:(CMessageWrap *)arg2;
- (void)OnTagWeAppLink:(LinkWeAppJumpWrap *)arg1 messageWrap:(CMessageWrap *)arg2;
- (void)OnVideoPlayEnd:(CMessageWrap *)arg1 isForceStop:(_Bool)arg2;
- (void)RevokeMsg:(CMessageWrap *)arg1;
- (void)SetMsgPlayed:(CMessageWrap *)arg1;
- (void)StartDownloadShortVideo:(CMessageWrap *)arg1;
- (void)StartDownloadVideo:(CMessageWrap *)arg1;
- (void)StartDownloadVideo:(CMessageWrap *)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartUploadVideo:(CMessageWrap *)arg1;
- (void)StopDownloadVideo:(CMessageWrap *)arg1;
- (void)StopUploadVideo:(CMessageWrap *)arg1;
- (void)addMultiMsgToMyFav:(NSMutableArray *)arg1;
- (_Bool)canShowChatRoomInfo;
- (void)clearAACount;
- (void)clearAtMeCount;
- (void)clearNewInvApprove;
- (void)clearNewInvCount;
- (void)clearTransferCount;
- (void)clickLinkToDealWithSysXml:(CMessageWrap *)arg1 fromScene:(NSString *)arg2;
- (void)downloadMultiMsg:(NSMutableArray *)arg1 saveToAlbum:(_Bool)arg2;
- (void)exitTracking;
- (NSString *)genMsgSource;
- (UIView *)getBackgroundView;
- (NSMutableDictionary *)getExtraInfo;
- (UIBarButtonItem *)getLeftBarButton;
- (MMWebViewController *)getPreviewForLink:(NSString *)arg1;
- (_Bool)hasDownMoreMsg;
- (_Bool)hasMoreMsg;
- (void)hasTapReaderNodeView;
- (void)headerImageClickedWithMsg:(CMessageWrap *)arg1;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isShowHeadImage:(CMessageWrap *)arg1;
- (void)onClickFavMenu:(CMessageWrap *)arg1;
- (void)onClickMsg:(CMessageWrap *)arg1;
- (void)onClickPlayMusicBtn:(CMessageWrap *)arg1 isPlay:(_Bool)arg2;
- (void)onClickReceiveBrandMsg;
- (void)onClickShieldBrandMsg;
- (void)onClickTextFloatPreView:(CMessageWrap *)arg1;
- (void)onClickTranslateMsg:(CMessageWrap *)arg1 translateInfo:(TranslateInfo *)arg2;
- (void)onClickUnreadTip;
- (void)onClickVoiceTranslate:(CMessageWrap *)arg1;
- (void)onClickWeAppReceiveSessionMsg;
- (void)onDeleteMsg:(CMessageWrap *)arg1;
- (void)onExposeTemplateMsg:(CMessageWrap *)arg1;
- (void)onInputTextDeleteAll;
- (void)onMassSendSendAgain:(NSArray *)arg1;
- (void)onMultiMsgDelete:(NSMutableArray *)arg1;
- (void)onMultiMsgSelected:(NSMutableArray *)arg1 Username:(NSString *)arg2;
- (void)onMultiSelectCancel;
- (void)onScheduleMessage:(CMessageWrap *)arg1;
- (void)openOpenSDKAppBrand:(CMessageWrap *)arg1;
- (void)openTrackRoom:(NSNumber *)arg1;
- (void)openWaApp:(CMessageWrap *)arg1;
- (void)resetWithMessageWrap:(CMessageWrap *)arg1;
- (void)sendMultiMsgByMail:(NSMutableArray *)arg1;
- (void)sendMultiMsgBySystemMail:(NSMutableArray *)arg1;
- (void)sendMultiMsgToBrandContact:(NSMutableArray *)arg1 To:(CContact *)arg2;
- (void)sendMultiMsgToFriend:(NSMutableArray *)arg1;
- (void)setExtraInfo;
- (void)setHasShowUnreadTip;
- (void)setWillDismissStatus;
- (void)shareDataToOpenSDK:(CMessageWrap *)arg1;
- (_Bool)shouldHideToolViewWhenKeyboardHide;
- (NSString *)tagForCurrentPage;
- (void)toBeEditing:(_Bool)arg1;
- (void)viewDidRotateToOrientation:(long long)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
@end

