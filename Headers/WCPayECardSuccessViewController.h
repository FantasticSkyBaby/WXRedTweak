//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface WCPayECardSuccessViewController : WCPayBaseViewController
{
    id <WCPayECardSuccessViewControllerDelegate> _delegate;
    NSString *_vcTitle;
    NSString *_successTip;
    UIImageView *_icon;
    UILabel *_detail;
    UIButton *_doneButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayECardSuccessViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *detail; // @synthesize detail=_detail;
- (void)done;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (id)headerView;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void)reloadTableView;
@property(copy, nonatomic) NSString *successTip; // @synthesize successTip=_successTip;
@property(copy, nonatomic) NSString *vcTitle; // @synthesize vcTitle=_vcTitle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
