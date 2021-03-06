//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"
#import "IWCPayFaceHBMgrExt.h"

@class AVAudioPlayer, CAEmitterLayer, MMHeadImageView, MMTimer, MMUILabel, NSMutableArray, NSString, UIImageView, WCPayFaceRedEnvelopesReceiverInfo;

@interface WCPayFaceHBFaceView : UIView <IWCPayFaceHBMgrExt, CAAnimationDelegate>
{
    MMHeadImageView *_headView;
    MMUILabel *_nameView;
    MMUILabel *_moneyView;
    UIView *_hbView;
    UIImageView *_hbBigView;
    UIImageView *_hbSmallView;
    UIView *_streamerView;
    CAEmitterLayer *_streamerLayer;
    UIView *_streamerBackView;
    CAEmitterLayer *_streamerBackLayer;
    UIView *_contentsView;
    UIView *_maskView;
    WCPayFaceRedEnvelopesReceiverInfo *m_info;
    _Bool m_bAnimating;
    unsigned long long m_t;
    NSMutableArray *m_blockArr;
    unsigned int lCount;
    unsigned int vCount;
    struct CGRect m_contentFrame;
    UIView *m_view;
    id <WCPayFaceHBFaceViewDelegate> m_delegate;
    AVAudioPlayer *m_sendOKPlayer;
    AVAudioPlayer *m_luckyPlayer;
    AVAudioPlayer *m_whistlePlayer;
    MMTimer *m_stimer;
    MMTimer *m_timer;
    struct CGSize m_bigSize;
    struct CGSize m_normalSize;
    _Bool _bAnimating;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) _Bool bAnimating; // @synthesize bAnimating=_bAnimating;
- (void)dealloc;
- (id)getEmitterCell:(id)arg1 image:(id)arg2 isMore:(_Bool)arg3 isBack:(_Bool)arg4;
- (id)getHeadView;
- (id)getMoneyString;
- (id)getSmallHBView;
- (id)getStreamerLayer:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)playWhistle;
- (void)startAnimate:(struct CGRect)arg1;
- (void)startBandAnimate;
- (void)startFlyAnimation;
- (void)startStreamersAnimation;
- (void)stopStreamersAnimation;
- (void)updateFaceHB:(id)arg1;
- (void)updateUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

