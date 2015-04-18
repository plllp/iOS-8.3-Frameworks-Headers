//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIFont, UIImageView, UIScrollView;

@interface FUScrollWheel : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_reusableLabelsQueue;
    NSMutableDictionary *_usedLabels;
    struct _NSRange _previousRange;
    unsigned int _numberOfRows;
    float _scrollWheelLabelHeight;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    UIImageView *_maskLayer;
    BOOL _shouldRegenerateOpacityMask;
    BOOL _loaded;
    BOOL _showsSelectionIndicator;
    id <FUScrollWheelDataSource> _dataSource;
    id <FUScrollWheelDelegate> _delegate;
    int _itemTitleAligmnent;
    unsigned int _currentIndex;
    UIFont *_font;
    UIScrollView *_scrollView;
    float _scrollWheelLabelPageSize;
}

- (unsigned int)_numberOfRows;
@property(nonatomic) unsigned int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) float scrollWheelLabelPageSize; // @synthesize scrollWheelLabelPageSize=_scrollWheelLabelPageSize;
- (float)_yPositionForLabelAtIndex:(unsigned int)arg1;
@property(nonatomic) int itemTitleAligmnent; // @synthesize itemTitleAligmnent=_itemTitleAligmnent;
- (id)_titleForItemAtIndex:(unsigned int)arg1;
- (struct CGRect)_frameForLabelAtIndex:(unsigned int)arg1;
- (id)_textForLabelAtIndex:(unsigned int)arg1;
- (id)_dequeueLabel;
- (void)_recycleLabel:(id)arg1 forKey:(id)arg2;
- (void)_reuseLabelsWithRange:(struct _NSRange)arg1 contentOffset:(struct CGPoint)arg2;
- (void)_alertDidChangeToCurrentIndex:(unsigned int)arg1;
- (void)_generateOpacityMask;
- (void)_recycleAllLabels;
- (float)_startingLocation;
- (void)_setActiveScrollwheelIfNotActive;
- (void)_layoutScrollView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)willMoveToSuperview:(id)arg1;
@property(nonatomic) __weak id <FUScrollWheelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FUScrollWheelDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL showsSelectionIndicator; // @synthesize showsSelectionIndicator=_showsSelectionIndicator;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)setHidden:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
