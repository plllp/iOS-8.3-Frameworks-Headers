//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSCoding.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerPresenting.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "_UIScrollNotification.h"

@class NSString, UISearchBar, UIView, _UISearchControllerDidScrollDelegate;

@interface UISearchController : UIViewController <UIViewControllerPresenting, _UIScrollNotification, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UISearchBar *_searchBar;
    int _barPresentationStyle;
    id <UIViewControllerAnimatedTransitioning> _animator;
    id _windowWillAnimateToken;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    struct {
        unsigned int searchBarWasTableHeaderView:1;
    } _controllerFlags;
    BOOL _dimsBackgroundDuringPresentation;
    BOOL _hidesNavigationBarDuringPresentation;
    BOOL __showResultsForEmptySearch;
    UIView *_resultsControllerViewContainer;
    id <UISearchResultsUpdating> _searchResultsUpdater;
    id <UISearchControllerDelegate> _delegate;
    UIViewController *_searchResultsController;
    int __previousSearchBarPosition;
    float __resultsContentScrollViewPresentationOffset;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
@property(nonatomic, setter=_setShowResultsForEmptySearch:) BOOL _showResultsForEmptySearch; // @synthesize _showResultsForEmptySearch=__showResultsForEmptySearch;
@property(nonatomic) BOOL hidesNavigationBarDuringPresentation; // @synthesize hidesNavigationBarDuringPresentation=_hidesNavigationBarDuringPresentation;
@property(nonatomic) BOOL dimsBackgroundDuringPresentation; // @synthesize dimsBackgroundDuringPresentation=_dimsBackgroundDuringPresentation;
@property(nonatomic) id <UISearchResultsUpdating> searchResultsUpdater; // @synthesize searchResultsUpdater=_searchResultsUpdater;
@property(retain, nonatomic) UIView *_resultsControllerViewContainer; // @synthesize _resultsControllerViewContainer;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (void)_endWatchingPresentingController;
- (void)_beginWatchingPresentingController;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize)arg1;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize)arg1;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(BOOL)arg2;
- (BOOL)_allowFormSheetStylePresentation;
- (void)_didDismissSearchController;
- (void)_willDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (void)_willPresentFromViewController:(id)arg1;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (void)_watchScrollView:(id)arg1 forScrolling:(BOOL)arg2;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (id)_locatePresentingViewController;
- (void)_performAutomaticPresentation;
- (void)_resizeResultsControllerWithDelta:(struct CGSize)arg1;
- (id)_createAnimationCoordinator;
- (void)_adjustSearchBarSizeForOrientation:(int)arg1;
- (void)_connectSearchBar:(id)arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize)arg1;
- (id)initWithSearchResultsController:(id)arg1;
@property(nonatomic) int _previousSearchBarPosition; // @synthesize _previousSearchBarPosition=__previousSearchBarPosition;
@property(nonatomic) float _resultsContentScrollViewPresentationOffset; // @synthesize _resultsContentScrollViewPresentationOffset=__resultsContentScrollViewPresentationOffset;
- (id)_searchPresentationController;
- (void)_dismissPresentation:(BOOL)arg1;
- (BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(float)arg2;
- (BOOL)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarSuperviewChanged;
- (void)_updateSearchBarMaskIfNecessary;
@property(readonly, retain, nonatomic) UIViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(readonly, nonatomic) int _barPresentationStyle; // @synthesize _barPresentationStyle;
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)_requiresCustomPresentationController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)_commonInit;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
@property(nonatomic) id <UISearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

