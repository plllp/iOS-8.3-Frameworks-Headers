//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding>
{
    NSString *_storeName;
    NSString *_authorPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityKnowledgeVector *_pKV;
    PFUbiquityKnowledgeVector *_kv;
    NSMutableDictionary *_peerRanges;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly) PFUbiquityLocation *rootLocation; // @synthesize rootLocation=_rootLocation;
- (void)_migrateToModelVersionHash:(id)arg1;
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1;
- (id)createPeerRangeDictionary:(id)arg1;
- (void)addDictionaryForPeerRange:(id)arg1;
- (id)createNewLocalRangeWithRangeStart:(unsigned int)arg1 andRangeEnd:(unsigned int)arg2 forEntityNamed:(id)arg3;
@property(readonly, nonatomic) PFUbiquityKnowledgeVector *previousKnowledgeVector; // @synthesize previousKnowledgeVector=_pKV;
@property(readonly) NSString *authorPeerID; // @synthesize authorPeerID=_authorPeerID;
- (BOOL)gatherMetadataWithStore:(id)arg1 andError:(id *)arg2;
@property(readonly) NSDictionary *peerRanges; // @synthesize peerRanges=_peerRanges;
- (void)setKnowledgeVector:(id)arg1;
@property(readonly) PFUbiquityKnowledgeVector *knowledgeVector; // @synthesize knowledgeVector=_kv;
@property(readonly) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;

@end

