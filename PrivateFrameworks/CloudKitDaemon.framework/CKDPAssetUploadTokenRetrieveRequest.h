//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
    NSMutableArray *_uploads;
}

+ (id)options;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)addAssets:(id)arg1;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (unsigned int)assetsCount;
@property(readonly, nonatomic) BOOL hasType;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
- (id)uploadsAtIndex:(unsigned int)arg1;
- (void)clearUploads;
- (unsigned int)uploadsCount;
- (void)addUploads:(id)arg1;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property(readonly, nonatomic) BOOL hasField;
- (id)assetsAtIndex:(unsigned int)arg1;
- (void)clearAssets;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

