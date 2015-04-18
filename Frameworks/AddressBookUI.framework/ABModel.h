//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABContactsFilter, NSArray, NSMutableArray, NSRecursiveLock;

@interface ABModel : NSObject
{
    void *_addressBook;
    CDStruct_e817f9f7 *_sectionLists;
    struct __CFDictionary *_headerSortKeyToHeaderString;
    struct _NSRange _displayedMemberPreparedRange;
    unsigned int _numberOfDisplayedMembers;
    BOOL _displayedMembersAreSearchResults;
    void *_selectedPerson;
    unsigned int _displayOrdering;
    struct __CFArray *_databaseChangeDelegates;
    void *_backgroundAddressBook;
    BOOL _backgroundAddressBookInvalidated;
    NSMutableArray *_cachedModelRecords;
    NSRecursiveLock *_memberLock;
    BOOL _loadingInBackground;
    NSRecursiveLock *_backgroundLoadingLock;
    BOOL _backgroundInvalidated;
    id _delayedNotificationHandler;
    BOOL _autoInvalidateOnDatabaseChange;
    NSArray *_lastSeenSources;
    NSArray *_lastSeenGroups;
    int _meID;
    ABContactsFilter *_displayedContactsFilter;
    ABContactsFilter *_selectedContactsFilter;
    ABContactsFilter *_lastSelectedContactsFilter;
}

+ (void)initialize;
+ (unsigned int)sortOrdering;
- (id)initWithAddressBook:(void *)arg1;
@property(nonatomic) void *addressBook;
- (id)allSources;
- (void)dealloc;
- (void)setSortOrdering:(unsigned int)arg1;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;
- (struct __CFArray *)_databaseChangeDelegates;
- (void)_modelDatabaseChangedExternally:(struct __CFDictionary *)arg1;
- (void)_modelDatabaseChangedLocally:(struct __CFDictionary *)arg1;
- (int)meID;
- (void)invalidateLastSelectedContactsFilter;
- (void)copyDisplayedNamePieces:(id *)arg1 isGroup:(char *)arg2 highlightIndex:(int *)arg3 forMemberID:(int *)arg4 atindex:(int)arg5;
- (id)allCachedModelRecords;
- (void)setFilteredDisplayedMembers:(struct __CFArray *)arg1;
- (void)resetSortKeyToHeaderStringDictionary;
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(BOOL)arg1 deletedPerson:(BOOL)arg2;
- (void)_updateForMajorAddressBookChange:(BOOL)arg1;
@property(retain, nonatomic) ABContactsFilter *displayedContactsFilter; // @synthesize displayedContactsFilter=_displayedContactsFilter;
- (void)setLastSelectedContactsFilter:(id)arg1;
- (int)_indexOfMember:(void *)arg1 inDisplayedMembers:(id)arg2;
- (id)_displayedGroupMembersInRange:(struct _NSRange)arg1;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange)arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)arg1;
- (void)_loadMembersInBackground:(id)arg1;
- (struct __CFArray *)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(struct _NSRange)arg1 inBackground:(BOOL)arg2;
- (id)_newModelRecordFromRecord:(void *)arg1;
- (id)displayedMembersInRange:(struct _NSRange)arg1;
- (void)_cachePeople:(struct __CFArray *)arg1 atEnd:(BOOL)arg2;
- (long)resetFullSectionList:(struct __CFDictionary *)arg1 maximumSectionCount:(int)arg2;
- (long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(struct __CFDictionary *)arg2;
- (BOOL)shouldUsePartialLoadingForContactsFilter:(id)arg1;
- (struct __CFDictionary *)headerSortKeyToHeaderStringDictionary;
- (void)_waitUntilBackgroundThreadFinished;
- (void)prepareDisplayedMembersInRange:(struct _NSRange)arg1;
- (void)setAutoInvalidateOnDatabaseChange:(BOOL)arg1;
- (void)_cacheMeID;
- (void)resetSectionList;
@property(readonly, nonatomic) ABContactsFilter *lastSelectedContactsFilter; // @synthesize lastSelectedContactsFilter=_lastSelectedContactsFilter;
- (void)invalidateDisplayedMembers;
- (void)setSelectedPerson:(void *)arg1;
- (void)updateForMajorAddressBookChange;
- (void *)displayedMemberAtIndex:(int)arg1;
- (unsigned int)displayedMemberSectionListsCount;
- (CDStruct_e817f9f7 *)displayedMemberSectionLists;
- (id)allGroups;
- (void)setDisplayNameOrdering:(unsigned int)arg1;
- (int)indexForDisplayedMember:(void *)arg1;
- (unsigned int)numberOfDisplayedMembers;
- (void *)selectedPerson;
@property(readonly, nonatomic) void *sourceForNewRecords;
@property(readonly, nonatomic) void *groupForNewRecords;
- (void)setSelectedContactsFilter:(id)arg1;
- (void)addDatabaseChangeDelegate:(id)arg1;
@property(readonly, nonatomic) ABContactsFilter *selectedContactsFilter; // @synthesize selectedContactsFilter=_selectedContactsFilter;
- (void)removeDatabaseChangeDelegate:(id)arg1;

@end
