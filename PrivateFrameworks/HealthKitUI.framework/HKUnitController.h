//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthStore, NSDictionary, NSMutableDictionary;

@interface HKUnitController : NSObject
{
    NSMutableDictionary *_unitStrings;
    HKHealthStore *_healthStore;
    NSDictionary *_hkUnitPreferences;
}

- (id)displayRangeForDataUnit:(id)arg1;
- (id)manualEntryAbsoluteRangeForDataUnit:(id)arg1;
- (id)manualEntryConfirmRangeForDataUnit:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forDataUnit:(id)arg2;
- (id)displayNameForDataUnitGroup:(id)arg1;
- (id)singularDisplayNameForDataUnit:(id)arg1;
- (id)_displayNameForUnit:(id)arg1;
- (id)_longDisplayNameForUnit:(id)arg1;
- (id)_displayNameForUnit:(id)arg1 localizablePrefix:(id)arg2;
- (id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2;
- (id)_generateDefaultHKUnitPreferences;
- (id)_fetchHKUnitPreferences;
- (void)_refreshHKUnitPreferences;
- (void)_postNotificationWithChangedKeys:(id)arg1;
- (id)displayNameForDataUnit:(id)arg1;
- (id)longDisplayNameForDataUnitGroup:(id)arg1;
- (id)singularDisplayNameForDataUnit:(id)arg1 unit:(id)arg2;
- (id)_nameWithKey:(id)arg1 forDataUnit:(id)arg2;
- (id)_nameWithKey:(id)arg1 forDataUnit:(id)arg2 unit:(id)arg3;
- (id)displayNameForDataUnit:(id)arg1 unit:(id)arg2;
- (id)unitForDataUnit:(id)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_updateHKUnitPreferences:(id)arg1 shouldPostNotification:(BOOL)arg2;
- (id)_hkUnitPreferences;
- (id)initWithHealthStore:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
