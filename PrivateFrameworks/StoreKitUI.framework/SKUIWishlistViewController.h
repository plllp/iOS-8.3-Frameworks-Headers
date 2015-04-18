//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIItemListTableDelegate.h"

@class NSString, SKUIItemListTableViewController, SKUISyncWishlistOperation, SKUIWishlist, UIBarButtonItem, _UIBackdropView, _UIContentUnavailableView;

@interface SKUIWishlistViewController : SKUIViewController <SKUIItemListTableDelegate>
{
    _UIBackdropView *_backdropView;
    id <SKUIWishlistDelegate> _delegate;
    UIBarButtonItem *_deleteButton;
    BOOL _editing;
    _UIContentUnavailableView *_emptyWishlistView;
    SKUIItemListTableViewController *_itemListViewController;
    BOOL _reloadOnNextAppear;
    SKUISyncWishlistOperation *_syncOperation;
    SKUIWishlist *_wishlist;
    int _wishlistState;
}

+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;
- (void)_reloadForAccountsChanged;
- (void)_finishSyncWithResult:(BOOL)arg1 didChange:(BOOL)arg2 error:(id)arg3;
- (BOOL)_isEditingEnabled;
- (void)_toggleEditAction:(id)arg1;
- (void)_destroyEmptyWishlistView;
- (id)_emptyWishlistView;
- (void)_signInAction:(id)arg1;
- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;
- (void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_wishlist;
- (void)_deleteItemsAtIndexPaths:(id)arg1;
- (void)_updateDeleteButton;
- (void)_reloadNavigationBarAnimated:(BOOL)arg1;
- (void)_reloadWishlist;
- (void)_syncWishlist;
- (int)_wishlistState;
- (void)_reloadChildView;
- (id)_itemListViewController;
- (void)_wishlistDidChangeNotification:(id)arg1;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
@property(nonatomic) __weak id <SKUIWishlistDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)_doneAction:(id)arg1;
- (void)_deleteAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
