//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIViewServiceDeputy.h"
#import "_UIViewServiceDeputyRotationDelegate.h"
#import "_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface.h"

@class NSArray, NSString, UIWindow, _UIAsyncInvocation;

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate>
{
    id _remoteViewControllerProxy;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIWindow *_hostedWindow;
    struct CGPoint _windowOffset;
    BOOL _canRestoreInputViews;
    BOOL _isRestoringInputViews;
    BOOL _didResignForDisappear;
    BOOL _localVCDisablesAutomaticBehaviors;
    NSArray *_allowedNotifications;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;
+ (id)XPCInterface;
- (oneway void)release;
- (void)_restoreInputViews;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (void)_sendNotification:(id)arg1;
- (void)windowDidGainFirstResponder:(id)arg1;
- (void)forceSyncToStatusBarOrientation;
- (void)_prepareForDisconnectionUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostViewWillAppear:(BOOL)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__hostDidEnterBackground;
- (void)__hostWillEnterForeground;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__createHostedTextEffectsWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)__setWindowOffset:(struct CGPoint)arg1;
- (id)_queue;
- (void)finishRotationFromInterfaceOrientation:(int)arg1;
- (void)rotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(BOOL)arg2;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (int)__automatic_invalidation_logic;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)invalidate;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
