//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPTermsViewControllerDelegate.h"

@class HSCloudClient, MPUContentSizeLayoutConstraint, MPUIndeterminateProgressIndicatorView, MPUNotificationObserver, NSLayoutConstraint, NSObject<OS_dispatch_source>, NSString, NSURL, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface MusicGeniusOptInViewController : UIViewController <MPTermsViewControllerDelegate>
{
    HSCloudClient *_cloudClient;
    int _state;
    long long _geniusTermsVersion;
    BOOL _hasUpdateGeniusCompletionBlock;
    NSObject<OS_dispatch_source> *_updateStatusTimer;
    NSURL *_learnMoreURL;
    UIImageView *_geniusImageView;
    UIView *_widthConstrainingView;
    UIView *_bottomSpacerView;
    UILabel *_aboutGeniusLabel;
    UIButton *_geniusOptInButton;
    UILabel *_geniusLegalLabel;
    UIButton *_geniusLearnMoreButton;
    UILabel *_stepOneBulletLabel;
    UILabel *_stepOneDescriptionLabel;
    UILabel *_stepTwoBulletLabel;
    UILabel *_stepTwoDescriptionLabel;
    UILabel *_stepThreeBulletLabel;
    UILabel *_stepThreeDescriptionLabel;
    UILabel *_continueUsingMusicLabel;
    UIImageView *_stepOneCompleteImageView;
    UIImageView *_stepTwoCompleteImageView;
    UIImageView *_stepThreeCompleteImageView;
    MPUIndeterminateProgressIndicatorView *_indeterminateProgressIndicator;
    NSLayoutConstraint *_contentSizeHeightConstraint;
    MPUContentSizeLayoutConstraint *_updatingAboutGeniusLabelBaselineContraint;
    MPUContentSizeLayoutConstraint *_updatingGeniusOptInButtonBaselineContraint;
    NSLayoutConstraint *_updatingGeniusLegalLabelTopConstraint;
    MPUContentSizeLayoutConstraint *_updatingGeniusLearnMoreButtonBaselineContraint;
    NSLayoutConstraint *_updatingStepOneBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepOneCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepOneDescriptionLabelBaselineContraint;
    NSLayoutConstraint *_updatingStepTwoBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepTwoCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepTwoDescriptionLabelBaselineContraint;
    NSLayoutConstraint *_updatingStepThreeBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepThreeCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepThreeDescriptionLabelBaselineContraint;
    NSLayoutConstraint *_updatingContinueUsingMusicLabelTopConstraint;
    NSLayoutConstraint *_updatingIndeterminateProgressIndicatorWidthConstraint;
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;
    UIScrollView *_scrollView;
}

- (void)_doneButtonPressed:(id)arg1;
- (void)_ensureUpdateStatusTimerIsRunning;
- (void)_ensureCompletionHandlerIsAttached;
- (void)_prepareIndeterminateProgressIndicatorForUse;
- (void)_setupViewsForGeniusEnabledIfNeeded;
- (void)_setupViewsForGeniusDisabledIfNeeded;
- (void)_prepareForEnabledViews;
- (void)_geniusLearnMoreButtonAction:(id)arg1;
- (void)_geniusOptInButtonAction:(id)arg1;
- (void)_prepareForDisabledViews;
- (void)_enableGenius;
- (void)_animateToGeniusEnabledStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_optInToGenius;
- (void)_updateViewConstraintsForGeniusEnabled;
- (void)_updateViewConstraintsForGeniusDisabled;
- (void)_updateGeniusState;
- (void)_updateViewsForCurrentState;
- (void)_updateLearnMoreButtonState;
- (void)_updateConstraintsForContentSizeDidChangeNotification;
- (id)_createVerticalSpacerViewInView:(id)arg1;
- (id)_createHorizontalSpacerViewInView:(id)arg1;
- (void)_showErrorAlert;
- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)updateViewConstraints;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewDidLayoutSubviews;
- (CDUnknownBlockType)_completionBlock;
- (id)init;
- (void)dealloc;
- (void)termsViewController:(id)arg1 acceptTermsAndConditions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)termsViewController:(id)arg1 loadTermsAndConditionsWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)termsViewControllerShouldDismiss:(id)arg1;
- (void)termsViewControllerDidCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

