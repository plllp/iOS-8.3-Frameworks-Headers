//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAlertManager;

@interface MSAuthenticationManager : NSObject
{
    int _state;
    MSAlertManager *_alertManager;
    int _bagRefetchCount;
    BOOL _isListeningToKeybagChanges;
    int _keybagChangeNotifyToken;
}

+ (id)sharedManager;
@property(nonatomic) int keybagChangeNotifyToken; // @synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken;
- (void)rearmAuthenticationAlert;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2;
- (void)waitForDeviceUnlock;
- (id)_accountForPersonID:(id)arg1;
@property(nonatomic) BOOL isListeningToKeybagChanges; // @synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges;
- (void)_didReceiveAccountConfigChangedNotification;
- (id)initWithAlertManager:(id)arg1;
@property(readonly, nonatomic, getter=isWaitingForAuth) BOOL waitingForAuth;
- (void).cxx_destruct;
- (void)dealloc;

@end

