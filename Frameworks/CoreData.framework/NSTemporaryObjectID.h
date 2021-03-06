//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID
{
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (void)release;
+ (id)alloc;
+ (int)version;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)retain;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForStore:(id)arg1;
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)initWithEntity:(id)arg1;
+ (void)_storeDeallocated;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (void)_release_1;
+ (id)_retain_1;
- (void)finalize;
- (oneway void)release;
- (id)URIRepresentation;
- (BOOL)isTemporaryID;
- (id)entity;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)retain;
- (id)initWithEntity:(id)arg1;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (void)_setPersistentStore:(id)arg1;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (id)_referenceData;
- (id)_retainedURIString;
- (id)persistentStore;

@end

