//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying>
{
    NSMutableArray *_dictionarys;
    NSString *_name;
    int _reason;
    struct {
        unsigned int reason:1;
    } _has;
}

@property(nonatomic) BOOL hasReason;
@property(readonly, nonatomic) BOOL hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *dictionarys; // @synthesize dictionarys=_dictionarys;
- (id)dictionaryAtIndex:(unsigned int)arg1;
- (void)clearDictionarys;
- (unsigned int)dictionarysCount;
- (void)addDictionary:(id)arg1;
@property(nonatomic) int reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

