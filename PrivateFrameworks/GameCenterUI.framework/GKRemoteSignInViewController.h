//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKRemoteViewController.h>

#import "SignInServiceViewControllerDelegate.h"

@class GKGame, NSString;

@interface GKRemoteSignInViewController : GKRemoteViewController <SignInServiceViewControllerDelegate>
{
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)unlockRotation;
- (id)_managingHostedAuthenticateViewController;
- (void)populateInitialStateForRemoteView:(id)arg1;
- (BOOL)serviceNeedsLocalPlayer;
- (void)remoteViewControllerIsCanceling;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

