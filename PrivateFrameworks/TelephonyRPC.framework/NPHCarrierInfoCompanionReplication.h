//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPSDomainAccessor, NPSManager;

@interface NPHCarrierInfoCompanionReplication : NSObject
{
    NPSManager *_npsManager;
    NPSDomainAccessor *_mobilePhoneDomainAccessor;
}

+ (id)sharedInstance;
- (void)updateIsVisualVoicemailServiceSubscribed;
- (void)updateShouldHideVoicemailUI;
- (void)NPHVMServiceSubscriptionStatusChanged:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
