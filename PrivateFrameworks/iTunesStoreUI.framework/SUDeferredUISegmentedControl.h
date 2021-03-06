//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISegmentedControl.h"

#import "SUDeferredUIView.h"

@class NSMutableArray, NSString;

@interface SUDeferredUISegmentedControl : UISegmentedControl <SUDeferredUIView>
{
    struct CGRect _deferredFrame;
    float _deferredMaxTotalWidth;
    float _deferredMinSegmentWidth;
    NSMutableArray *_deferredSegments;
    int _deferredSegmentedControlStyle;
    unsigned int _deferredSelectedSegmentIndex;
    BOOL _deferredSizeToFit;
    BOOL _isDeferringInterfaceUpdates;
}

- (void)_saveSegmentsAsDeferred;
- (void)_insertSegmentWithValue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;
@property(nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
- (int)selectedSegmentIndex;
- (unsigned int)numberOfSegments;
- (id)imageForSegmentAtIndex:(unsigned int)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (int)segmentedControlStyle;
- (void)setSelectedSegmentIndex:(int)arg1;
- (void)removeAllSegments;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)sizeToFit;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

