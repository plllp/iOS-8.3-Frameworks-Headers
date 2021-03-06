//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _accessWasGrantedBlock;
    CDUnknownBlockType _accessWasRevokedBlock;
    NSArray *_recordIDsToGrant;
    NSArray *_recordIDsToRevoke;
    NSMutableSet *_fetchedRecordIDs;
    NSMutableDictionary *_recordsToSaveByID;
    int _numSaveAttempts;
}

@property(retain, nonatomic) NSArray *recordIDsToRevoke; // @synthesize recordIDsToRevoke=_recordIDsToRevoke;
@property(retain, nonatomic) NSArray *recordIDsToGrant; // @synthesize recordIDsToGrant=_recordIDsToGrant;
@property(copy, nonatomic) CDUnknownBlockType accessWasRevokedBlock; // @synthesize accessWasRevokedBlock=_accessWasRevokedBlock;
@property(copy, nonatomic) CDUnknownBlockType accessWasGrantedBlock; // @synthesize accessWasGrantedBlock=_accessWasGrantedBlock;
@property(retain, nonatomic) NSMutableDictionary *recordsToSaveByID; // @synthesize recordsToSaveByID=_recordsToSaveByID;
@property(retain, nonatomic) NSMutableSet *fetchedRecordIDs; // @synthesize fetchedRecordIDs=_fetchedRecordIDs;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (struct _PCSIdentityData *)_copyShareProtectionFromRecord:(id)arg1 error:(id *)arg2;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
@property(nonatomic) int numSaveAttempts; // @synthesize numSaveAttempts=_numSaveAttempts;
- (void)_saveRecords;
- (void)_fetchRecords;
- (BOOL)makeStateTransition;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)nameForState:(unsigned int)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
- (void)main;

@end

