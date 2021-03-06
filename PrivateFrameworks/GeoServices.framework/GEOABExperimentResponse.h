//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOABExperimentResponse : PBCodable <NSCopying>
{
    unsigned long long _refreshIntervalSeconds;
    double _timestamp;
    NSMutableArray *_assignments;
    NSString *_requestGuid;
    NSString *_sourceURL;
    BOOL _invalidatePoiCache;
    BOOL _invalidateTileCache;
    struct {
        unsigned int refreshIntervalSeconds:1;
        unsigned int timestamp:1;
        unsigned int invalidatePoiCache:1;
        unsigned int invalidateTileCache:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSourceURL;
@property(retain, nonatomic) NSString *requestGuid; // @synthesize requestGuid=_requestGuid;
@property(nonatomic) BOOL hasRefreshIntervalSeconds;
@property(nonatomic) unsigned long long refreshIntervalSeconds; // @synthesize refreshIntervalSeconds=_refreshIntervalSeconds;
@property(nonatomic) BOOL hasInvalidatePoiCache;
@property(nonatomic) BOOL invalidatePoiCache; // @synthesize invalidatePoiCache=_invalidatePoiCache;
@property(nonatomic) BOOL hasInvalidateTileCache;
@property(nonatomic) BOOL invalidateTileCache; // @synthesize invalidateTileCache=_invalidateTileCache;
@property(readonly, nonatomic) BOOL hasRequestGuid;
- (id)assignmentAtIndex:(unsigned int)arg1;
- (void)clearAssignments;
- (unsigned int)assignmentsCount;
- (void)addAssignment:(id)arg1;
@property(retain, nonatomic) NSMutableArray *assignments; // @synthesize assignments=_assignments;
- (id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2;
@property(nonatomic) BOOL hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double timestamp;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *sourceURL;

@end

