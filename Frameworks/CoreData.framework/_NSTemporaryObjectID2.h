//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID
{
    id _store;
    _NS128bitWrapper *_uuid128;
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (void)_setPersistentStore:(id)arg1;
- (id)_referenceData;
- (id)persistentStore;

@end

