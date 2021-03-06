//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSSetupController.h"

#import "CNFRegFirstRunDelegate.h"

@class CNFRegController, NSString, _UIBackdropView;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate>
{
    CNFRegController *_regController;
    int _serviceType;
    CDUnknownBlockType _alertHandler;
    id <CNFRegWizardControllerDelegate> _firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    struct {
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int shouldListenForSuspension:1;
        unsigned int canStartNested:1;
        unsigned int canShowSplashScreen:1;
        unsigned int canShowDisabledScreen:1;
        unsigned int hideLearnMoreButton:1;
        unsigned int showSplashOnSignin:1;
        unsigned int skipReloadOnNextViewWillAppear:1;
        unsigned int allowCancel:1;
        unsigned int allowSMS:1;
        unsigned int shouldTerminateInBackground:1;
    } _wizardFlags;
    _UIBackdropView *_backdropView;
}

+ (void)setSupportsAutoRotation:(BOOL)arg1;
+ (void)setGlobalAppearanceStyle:(int)arg1;
@property(nonatomic) id <CNFRegWizardControllerDelegate> firstRunDelegate; // @synthesize firstRunDelegate=_firstRunDelegate;
@property(nonatomic) BOOL showSplashOnSignin;
@property(nonatomic) BOOL hideLearnMoreButton; // @dynamic hideLearnMoreButton;
@property(nonatomic) BOOL allowSMS;
@property(nonatomic) BOOL allowCancel;
@property(nonatomic) BOOL shouldListenForSuspension; // @dynamic shouldListenForSuspension;
- (void)setSkipReloadOnNextViewWillAppear:(BOOL)arg1;
- (BOOL)skipReloadOnNextViewWillAppear;
@property(nonatomic) BOOL canStartNested;
- (id)controllersToShow;
- (void)dismissWithState:(unsigned int)arg1;
- (void)dismissFinished:(BOOL)arg1;
- (void)_checkRestrictions;
- (void)_startListeningForResignResume;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarTitle;
- (id)controllersToShow:(BOOL)arg1;
- (void)_doCancel;
- (id)controllerClassesToShow:(BOOL)arg1;
@property(nonatomic) BOOL canShowDisabledScreen; // @dynamic canShowDisabledScreen;
@property(nonatomic) BOOL canShowSplashScreen;
- (int)_firstRunState:(id)arg1;
@property(nonatomic) BOOL shouldTerminateInBackground; // @dynamic shouldTerminateInBackground;
- (BOOL)shouldShowFirstRunController;
- (void)_stopListeningForResignResume;
- (id)initWithServiceTypes:(int)arg1;
- (void)_applicationDidFinishLaunching;
- (void)_restrictionsChanged;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (id)initWithRegController:(id)arg1;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(copy, nonatomic) CDUnknownBlockType alertHandler; // @synthesize alertHandler=_alertHandler;
- (void)setupController;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (id)popViewControllerWithTransition:(int)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidResume;
- (void)_applicationDidEnterBackground;
- (void)applicationWillSuspend;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

