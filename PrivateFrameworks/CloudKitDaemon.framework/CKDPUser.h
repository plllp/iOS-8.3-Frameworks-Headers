//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPIdentifier, CKDPProtectionInfo, CKDPUserAlias, NSString;

@interface CKDPUser : PBCodable <NSCopying>
{
    CKDPUserAlias *_alias;
    NSString *_firstName;
    CKDPIdentifier *_identifier;
    NSString *_lastName;
    CKDPProtectionInfo *_protectionInfo;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
@property(readonly, nonatomic) BOOL hasAlias;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(readonly, nonatomic) BOOL hasProtectionInfo;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) BOOL hasLastName;
@property(readonly, nonatomic) BOOL hasFirstName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

