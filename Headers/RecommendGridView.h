//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonStoreCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView;

@interface RecommendGridView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, EmoticonStoreCellDelegate>
{
    NSMutableArray *_emotionsArray;
    NSString *_packageId;
    UICollectionView *_collectionView;
    id <RecommendGridViewDelegate> _delegate;
}

+ (id)getStoreItemPid;
- (void).cxx_destruct;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configCollectionView;
- (void)configViews;
@property(retain, nonatomic) id <RecommendGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *emotionsArray; // @synthesize emotionsArray=_emotionsArray;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
- (void)reloadData;
- (void)setRecommendGridViewDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

