//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, WCPayControlData;

@interface WCPayBankListPanelView : MMUIView <UITableViewDelegate, UITableViewDataSource, ILinkEventExt>
{
    id <WCPayBankListPanelViewDelegate> _delegate;
    WCPayControlData *_controlData;
    NSArray *_bankList;
    NSString *_curSelectCardSerial;
    NSString *_title;
    NSString *_desc;
    double _contentViewHeight;
    double _contentCellHeight;
    NSString *_addNewCardCellTitle;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *addNewCardCellTitle; // @synthesize addNewCardCellTitle=_addNewCardCellTitle;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSArray *bankList; // @synthesize bankList=_bankList;
- (void)cancelBtnPress;
@property(nonatomic) double contentCellHeight; // @synthesize contentCellHeight=_contentCellHeight;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
@property(retain, nonatomic) NSString *curSelectCardSerial; // @synthesize curSelectCardSerial=_curSelectCardSerial;
@property(nonatomic) __weak id <WCPayBankListPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)dismiss;
- (void)dismissWithShouCallDelegate:(_Bool)arg1;
- (void)handleTap;
- (id)initBankListPanelViewWithDelegate:(id)arg1 controlData:(id)arg2;
- (_Bool)isBalanceCardInfo:(id)arg1;
- (_Bool)isCellIndexLargeThanDataCount:(id)arg1;
- (void)makeAddNewCardCell:(id)arg1;
- (void)makeCardInfoCellContentViewWithCardInfo:(id)arg1 cell:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setBankListArray:(id)arg1;
- (void)setContentViewCellHeight:(double)arg1;
- (void)setPanelViewTitle:(id)arg1;
- (void)setPanellViewDesc:(id)arg1;
- (void)setSelectedCardSerial:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)showInView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
