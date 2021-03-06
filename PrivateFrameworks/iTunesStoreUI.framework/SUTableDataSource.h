//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISURLOperationPool, NSArray, SUImageCache, SUVariableCellConfigurationCache;

@interface SUTableDataSource : NSObject
{
    id _cellReuseSource;
    int _columnCount;
    SUVariableCellConfigurationCache *_configurationCache;
    int _preferringUserInteractionCount;
}

@property(nonatomic) id cellReuseSource; // @synthesize cellReuseSource=_cellReuseSource;
- (int)numberOfColumnsInSection:(int)arg1;
@property(readonly, nonatomic, getter=isPreferringUserInteraction) BOOL preferringUserInteraction;
- (id)cellContextForConfigurationClass:(Class)arg1;
- (id)cachedConfigurationForClass:(Class)arg1 index:(int)arg2;
- (void)reloadCellContexts;
- (void)didEndPreferringUserInteraction;
@property(readonly, nonatomic) ISURLOperationPool *imagePool;
- (void)didBeginPreferringUserInteraction;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (float)heightForPlaceholderCells;
- (float)heightForFooterInSection:(int)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (id)titleForHeaderInSection:(int)arg1;
- (int)sectionIndexForIndexTitle:(id)arg1 atIndex:(int)arg2;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)beginPreferringUserInteraction;
- (void)endPreferringUserInteraction;
- (void)resetLayoutCaches;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)deleteIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)resetCaches;
@property(nonatomic) int columnCount; // @synthesize columnCount=_columnCount;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) int tableViewStyle;
- (id)headerViewForSection:(int)arg1;
@property(readonly, nonatomic) int numberOfSections;
- (int)numberOfRowsInSection:(int)arg1;
- (id)init;
- (void)reloadData;
- (void)dealloc;
@property(readonly, nonatomic) SUImageCache *imageCache;

@end

