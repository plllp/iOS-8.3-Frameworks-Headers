//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTunnelParser.h"

@class MCMDMServer, NSString;

@interface MCMDMParser : MCTunnelParser
{
    BOOL _isChaperoned;
    MCMDMServer *_server;
    NSString *_managingProfileIdentifier;
}

+ (id)malformedRequestErrorResult;
@property(readonly, nonatomic) BOOL isChaperoned; // @synthesize isChaperoned=_isChaperoned;
@property(retain, nonatomic) NSString *managingProfileIdentifier; // @synthesize managingProfileIdentifier=_managingProfileIdentifier;
- (void)processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithManagingProfileIdentifier:(id)arg1;
- (id)managedFeedbackDictionaryForBundleID:(id)arg1 delete:(BOOL)arg2;
- (id)_appStoreDisabledError;
- (BOOL)_appStoreEnabled;
- (id)_performSetting:(id)arg1 outAdditionalResponseKeys:(id *)arg2 outRestartAppleTVApp:(char *)arg3;
- (BOOL)_validateSetting:(id)arg1 accessRights:(int)arg2 outError:(id *)arg3;
- (id)_performSetMDMOptions:(id)arg1;
- (id)_performSetOrganizationInfo:(id)arg1;
- (id)_performSetAppAttributes:(id)arg1 outAdditionalResponseKeys:(id *)arg2;
- (id)_performSetAppConfig:(id)arg1 outAdditionalResponseKeys:(id *)arg2;
- (id)_performSetPersonalHotspot:(id)arg1;
- (id)_performSetVoiceRoaming:(id)arg1;
- (id)_performSetDataRoaming:(id)arg1;
- (id)_performSetWallpaper:(id)arg1;
- (id)_performSetDeviceName:(id)arg1;
- (id)approvedAppAttributesFromAttributes:(id)arg1;
- (id)_notManagedErrorAppID:(id)arg1;
- (id)_allSettingsItems;
- (BOOL)_isProfileIdentifierManaged:(id)arg1;
- (id)_removeProfileWithIdentifier:(id)arg1;
- (BOOL)_isProvisioningProfileUUIDManaged:(id)arg1;
- (void)_performQuery:(id)arg1 withResultDictionary:(id)arg2;
- (id)_profileList:(id)arg1 filterFlags:(int)arg2;
- (void)_removeMedia:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_managedMediaList:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_installMedia:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_clearRestrictionsPasswordRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_clearActivationLockBypassCodeRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_activationLockBypassCodeRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_inviteToProgramRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_stopMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_requestMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_removeApplication:(id)arg1;
- (id)_managedApplicationFeedback:(id)arg1;
- (id)_managedApplicationAttributes:(id)arg1;
- (id)_managedApplicationConfiguration:(id)arg1;
- (id)_managedApplicationList:(id)arg1;
- (id)_applyRedemptionCode:(id)arg1 assertion:(id)arg2;
- (void)_installApplication:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_settings:(id)arg1 accessRights:(int)arg2;
- (id)_securityInfo:(id)arg1;
- (id)_restrictions:(id)arg1;
- (id)_installedApplicationList:(id)arg1;
- (id)_removeProvisioningProfile:(id)arg1;
- (id)_installProvisioningProfile:(id)arg1;
- (id)_provisioningProfileList:(id)arg1;
- (id)_certificateList:(id)arg1;
- (id)_eraseDevice:(id)arg1;
- (id)_profileList:(id)arg1;
- (id)_requestUnlockToken:(id)arg1;
- (id)_clearPasscode:(id)arg1;
- (id)_deviceLock:(id)arg1;
- (id)_notAuthorizedError;
- (void)_processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_removeProfile:(id)arg1;
- (id)_installProfile:(id)arg1 accessRights:(int)arg2;
- (id)_deviceInformationWithRequest:(id)arg1 accessRights:(int)arg2;
- (id)unavailableCommandsDuringBuddy;
- (id)_unavailableCommandsWhileInAppWhitelistModes;
- (id)_unavailableCommandsWhileLocked;
- (id)_invalidRequestTypeError:(id)arg1;
- (id)_allCommands;
@property(nonatomic) __weak MCMDMServer *server; // @synthesize server=_server;
- (void).cxx_destruct;

@end

