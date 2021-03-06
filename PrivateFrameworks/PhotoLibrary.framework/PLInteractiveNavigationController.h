//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLExpandableViewDelegate.h"
#import "UINavigationBarDelegate.h"

@class NSMutableArray, NSString, PLExpandableView, PLInteractiveNavigationControllerView, UIView;

@interface PLInteractiveNavigationController : UIViewController <UINavigationBarDelegate, PLExpandableViewDelegate>
{
    NSMutableArray *_stack;
    PLInteractiveNavigationControllerView *_contentView;
    UIView *_interactiveView;
    UIView *_overlayView;
    UIView *_headerView;
    UIViewController *_previousViewController;
    UIViewController *_expandedController;
    PLExpandableView *_expandingView;
    NSMutableArray *_navBarPushPopQueue;
    double _lastAlphaTime;
    struct {
        unsigned int operation:3;
        unsigned int visible:1;
        unsigned int programmaticPopInProgress:1;
        unsigned int finishingCurrentOperation:1;
        unsigned int previousControllerWasEditing:1;
        unsigned int propagateEditingMode:1;
    } _stackFlags;
    struct {
        unsigned int blockAppearanceCallbacks:1;
        unsigned int inExplicitAppearanceTransition:1;
    } _appearanceFlags;
    id <PLInteractiveNavigationControllerDelegate> delegate;
}

- (void)_addViewController:(id)arg1;
@property(nonatomic) BOOL shouldPropagateEditingMode;
@property(nonatomic, getter=footerViewIsHidden) BOOL footerViewHidden;
@property(nonatomic, getter=headerViewIsHidden) BOOL headerViewHidden;
- (void)popToRootViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popToViewController:(id)arg1;
- (BOOL)pl_behavesLikeNavigationControllerForNotifications;
- (void)setFooterViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_processNavBarPushPopQueue;
- (void)cancelPoppingViewController;
- (void)beginPoppingViewControllerInteractivelyUsingView:(id)arg1;
- (void)finishPushingViewController;
- (void)setTransitionProgress:(float)arg1 withDuration:(double)arg2;
- (void)_notifyAction:(SEL)arg1 expandableView:(id)arg2 duration:(double)arg3;
- (void)setTopViewControllerAlpha:(float)arg1;
- (void)beginPushingViewController:(id)arg1 interactivelyUsingView:(id)arg2;
- (void)_notifyAction:(SEL)arg1 expandableView:(id)arg2;
- (void)_setInteractiveController:(id)arg1 interactiveView:(id)arg2;
- (void)popToRootViewController;
- (void)popViewController;
- (BOOL)isPoppingViewController;
- (BOOL)_validateOperation:(int)arg1 errorString:(id)arg2;
- (void)_performNavBarPushPop:(int)arg1 transition:(int)arg2;
- (void)_finishedAnimatingTopAlpha:(id)arg1 finished:(id)arg2 topItem:(id)arg3;
- (BOOL)isPushingViewController;
- (void)_finishCurrentOperation;
- (void)_setOverlayView:(id)arg1;
- (void)_setInteractiveView:(id)arg1;
- (void)_finishCurrentOperationBeforePushingViewController:(id)arg1;
- (void)finishPoppingViewController;
- (void)cancelPushingViewController;
- (id)viewControllerNavigationItems;
- (void)_removeTopViewController;
- (void)replaceTopViewControllerWithViewController:(id)arg1;
- (void)expandableView:(id)arg1 expansionFractionChanged:(float)arg2;
- (void)expandableViewDidCancelCollapsing:(id)arg1;
- (void)expandableViewDidCancelExpanding:(id)arg1;
- (void)expandableViewDidBeginCollapsing:(id)arg1;
- (void)expandableViewDidCompleteExpanding:(id)arg1;
- (void)expandableView:(id)arg1 willCancelExpandingWithDuration:(double)arg2;
- (void)expandableView:(id)arg1 willCompleteExpandingWithDuration:(double)arg2;
- (void)expandableView:(id)arg1 willCompleteCollapsingWithDuration:(double)arg2;
- (void)expandableView:(id)arg1 willCancelCollapsingWithDuration:(double)arg2;
- (void)expandableViewWillBeginExpanding:(id)arg1;
- (void)expandableViewDidCompleteCollapsing:(id)arg1;
@property(retain, nonatomic) UIView *footerView;
- (void)_setPreviousViewController:(id)arg1;
@property(retain, nonatomic) UIView *headerView;
- (id)initWithRootViewController:(id)arg1;
- (id)viewControllers;
- (id)bottomViewController;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)navigationBar:(id)arg1 didPopItem:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (id)topViewController;
- (id)navigationBar;
@property(nonatomic) id <PLInteractiveNavigationControllerDelegate> delegate; // @synthesize delegate;
- (id)_contentView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

