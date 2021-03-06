//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying>
{
    NSString *_addressID;
    int _correctionStatus;
    NSMutableArray *_significantLocations;
    struct {
        unsigned int correctionStatus:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(retain, nonatomic) NSMutableArray *significantLocations; // @synthesize significantLocations=_significantLocations;
@property(nonatomic) int correctionStatus; // @synthesize correctionStatus=_correctionStatus;
@property(readonly, nonatomic) BOOL hasAddressID;
@property(nonatomic) BOOL hasCorrectionStatus;
- (id)significantLocationAtIndex:(unsigned int)arg1;
- (void)clearSignificantLocations;
- (unsigned int)significantLocationsCount;
- (void)addSignificantLocation:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

