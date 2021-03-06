//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, NSString;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying>
{
    NSString *_addressID;
    GEOLocation *_addressLocation;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct {
        unsigned int numberOfVisitsBucketSize:1;
        unsigned int statusCode:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) GEOLocation *addressLocation; // @synthesize addressLocation=_addressLocation;
@property(nonatomic) BOOL hasNumberOfVisitsBucketSize;
@property(nonatomic) unsigned int numberOfVisitsBucketSize; // @synthesize numberOfVisitsBucketSize=_numberOfVisitsBucketSize;
@property(readonly, nonatomic) BOOL hasAddressLocation;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(readonly, nonatomic) BOOL hasAddressID;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

