//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewDataSource.h>

@class GKBasicCollectionViewDataSource, NSMutableDictionary;

@interface GKSplittingDataSource : GKCollectionViewDataSource
{
    GKBasicCollectionViewDataSource *_underlyingDataSource;
    NSMutableDictionary *_sectionToSectionInfo;
}

@property(retain, nonatomic) NSMutableDictionary *sectionToSectionInfo; // @synthesize sectionToSectionInfo=_sectionToSectionInfo;
@property(retain, nonatomic) GKBasicCollectionViewDataSource *underlyingDataSource; // @synthesize underlyingDataSource=_underlyingDataSource;
- (void)removeAllSections;
- (void)removeSection:(int)arg1;
- (void)setSortDescriptors:(id)arg1 forSection:(int)arg2;
- (void)setFilterPredicate:(id)arg1 forSection:(int)arg2;
- (void)addSectionWithTitle:(id)arg1 sortDescriptors:(id)arg2;
- (void)willUpdateSectionsWithItems:(id)arg1;
- (void)setItems:(id)arg1 forSection:(int)arg2;
- (id)itemsForSection:(int)arg1;
- (id)filteredItemsForRawItems:(id)arg1;
- (void)refreshAdditionalInfoForDataType:(unsigned int)arg1 updateNotifier:(id)arg2;
- (id)sectionInfoForSection:(int)arg1;
- (id)indexPathsForItem:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)configureDataSource;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
@property(readonly, nonatomic) int sectionCount;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)init;
- (void)dealloc;
- (id)itemAtIndexPath:(id)arg1;
- (id)titleForSection:(int)arg1;

@end

