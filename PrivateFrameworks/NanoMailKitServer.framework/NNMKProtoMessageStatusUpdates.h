//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

@interface NNMKProtoMessageStatusUpdates : PBCodable <NSCopying>
{
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSMutableArray *_messageStatusUpdates;
    CDStruct_a125a100 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *messageStatusUpdates; // @synthesize messageStatusUpdates=_messageStatusUpdates;
- (id)messageStatusUpdateAtIndex:(unsigned int)arg1;
- (void)clearMessageStatusUpdates;
- (unsigned int)messageStatusUpdatesCount;
- (void)addMessageStatusUpdate:(id)arg1;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(readonly, nonatomic) BOOL hasDateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(nonatomic) BOOL hasFullSyncVersion;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

