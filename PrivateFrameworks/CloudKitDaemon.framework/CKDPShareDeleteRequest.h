//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPProtectionInfo, CKDPShareIdentifier, NSString;

@interface CKDPShareDeleteRequest : PBRequest <NSCopying>
{
    NSString *_etag;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
}

+ (id)options;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) CKDPProtectionInfo *selfAddedPcs; // @synthesize selfAddedPcs=_selfAddedPcs;
@property(readonly, nonatomic) BOOL hasSelfAddedPcs;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(readonly, nonatomic) BOOL hasShareId;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) BOOL hasEtag;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
