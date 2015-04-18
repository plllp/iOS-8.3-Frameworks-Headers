//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class ACAccount, ACAccountStore, NSError, NSExtension, NSString;

@interface SLGoogleWebAuthController : UIViewController <UIWebViewDelegate>
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    CDUnknownBlockType _presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    BOOL _extensionRequestDidComplete;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithYouTubeUsername:(id)arg1 accountDescription:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2;
- (void)_presentUsernameMismatchAlert;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(CDUnknownBlockType)arg3;
- (void)_presentInternetOfflineError;
- (void)_didInstantiateRemoteViewController;
- (void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(CDUnknownBlockType)arg2;
- (void)_extensionRequestDidCancelWithError:(id)arg1;
- (void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 youTube:(BOOL)arg5 presentationBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
