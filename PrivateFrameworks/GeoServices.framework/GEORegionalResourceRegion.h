//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEORegionalResourceRegion : PBCodable <NSCopying>
{
    CDStruct_d66e66b9 *_tileRanges;
    unsigned int _tileRangesCount;
    unsigned int _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
}

@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
- (unsigned int)attributionsCount;
- (void)clearIcons;
- (unsigned int)iconsCount;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)addTileRange:(CDStruct_d66e66b9)arg1;
- (void)clearTileRanges;
- (void)setTileRanges:(CDStruct_d66e66b9 *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) CDStruct_d66e66b9 *tileRanges;
- (CDStruct_d66e66b9)tileRangeAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int tileRangesCount;
@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
- (id)iconChecksumAtIndex:(unsigned int)arg1;
- (void)clearIconChecksums;
- (unsigned int)iconChecksumsCount;
- (id)iconAtIndex:(unsigned int)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)attributionAtIndex:(unsigned int)arg1;
- (void)clearAttributions;
- (void)addAttribution:(id)arg1;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
