//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBCandidateCollectionView.h>

@class NSArray, UIKeyboardCandidateGridCollectionViewController, UITableViewIndex, UIView;

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView
{
    float _indexMaximumHeight;
    UIKeyboardCandidateGridCollectionViewController *_parentViewController;
    float _previousGroupBarStartingY;
    UITableViewIndex *_index;
    UIView *_headerView;
}

- (BOOL)isCellVisible:(id)arg1;
- (void)delayUpdateIndex;
- (void)showIndex:(BOOL)arg1;
@property(nonatomic) float previousGroupBarStartingY; // @synthesize previousGroupBarStartingY=_previousGroupBarStartingY;
- (void)updateIndex;
- (void)updateIndex:(BOOL)arg1;
- (BOOL)shouldShowIndex;
- (float)groupBarStartingY;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
@property(readonly, nonatomic) UITableViewIndex *index; // @synthesize index=_index;
@property(retain, nonatomic) NSArray *indexTitles;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)scrollToBottomWithAnimation:(BOOL)arg1;
- (void)scrollToTopWithAnimation:(BOOL)arg1;
- (void)scrollToOffsetFromTop:(float)arg1 withAnimation:(BOOL)arg2;
@property(nonatomic) UIKeyboardCandidateGridCollectionViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned int)arg3;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end
