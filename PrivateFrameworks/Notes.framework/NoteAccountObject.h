//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/NoteCollectionObject.h>

@class NSDictionary, NSNumber, NSSet, NSString, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject
{
    NSDictionary *_constraints;
}

@property(nonatomic) int accountType;
- (void)didTurnIntoFault;
- (BOOL)validateDefaultStore:(id *)arg1 error:(id *)arg2;
- (id)basicAccountIdentifier;
- (BOOL)shouldMarkNotesAsDeleted;
- (id)collectionInfo;
- (id)predicateForNotes;
@property(retain, nonatomic) NSString *pathToConstraintsPlist;
- (id)storeForExternalId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *constraints; // @synthesize constraints=_constraints;

// Remaining properties
@property(retain, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(retain, nonatomic) NSString *constraintsPath; // @dynamic constraintsPath;
@property(retain, nonatomic) NoteStoreObject *defaultStore; // @dynamic defaultStore;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *stores; // @dynamic stores;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;

@end

