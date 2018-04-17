//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIFont, UILabel;

@interface ZCWScrollDigitView : UIView
{
    double _oneDigitHeight;
    unsigned long long _digit;
    UIView *backgroundView;
    UILabel *label;
    unsigned long long digit;
    UIFont *digitFont;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long _digit; // @synthesize _digit;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
- (void)commitChange;
- (void)didConfigFinish;
@property(readonly, nonatomic) unsigned long long digit; // @synthesize digit;
@property(retain, nonatomic) UIFont *digitFont; // @synthesize digitFont;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
- (void)setDigit:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)setDigitAndCommit:(unsigned long long)arg1;
- (void)setDigitFast:(unsigned long long)arg1;
- (void)setDigitFromLast:(unsigned long long)arg1;
- (void)setRandomScrollDigit:(unsigned long long)arg1 length:(unsigned long long)arg2;

@end
