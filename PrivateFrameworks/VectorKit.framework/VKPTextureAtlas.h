//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface VKPTextureAtlas : PBCodable <NSCopying>
{
    unsigned int _quadHeight;
    unsigned int _quadWidth;
    NSData *_texture;
}

@property(nonatomic) unsigned int quadHeight; // @synthesize quadHeight=_quadHeight;
@property(nonatomic) unsigned int quadWidth; // @synthesize quadWidth=_quadWidth;
@property(retain, nonatomic) NSData *texture; // @synthesize texture=_texture;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
