//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class HDCodableSource, NSMutableArray, NSString;

@interface HDCodableObjectCollection : PBCodable <NSCopying>
{
    NSMutableArray *_activityCaches;
    NSMutableArray *_categorySamples;
    NSMutableArray *_correlations;
    NSMutableArray *_quantitySamples;
    HDCodableSource *_source;
    NSString *_sourceBundleIdentifier;
    NSMutableArray *_workouts;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *activityCaches; // @synthesize activityCaches=_activityCaches;
@property(retain, nonatomic) NSMutableArray *correlations; // @synthesize correlations=_correlations;
@property(retain, nonatomic) NSMutableArray *workouts; // @synthesize workouts=_workouts;
@property(retain, nonatomic) NSMutableArray *quantitySamples; // @synthesize quantitySamples=_quantitySamples;
@property(retain, nonatomic) NSMutableArray *categorySamples; // @synthesize categorySamples=_categorySamples;
@property(readonly, nonatomic) BOOL hasSourceBundleIdentifier;
- (id)activityCachesAtIndex:(unsigned int)arg1;
- (void)clearActivityCaches;
- (unsigned int)activityCachesCount;
- (id)correlationsAtIndex:(unsigned int)arg1;
- (void)clearCorrelations;
- (unsigned int)correlationsCount;
- (id)workoutsAtIndex:(unsigned int)arg1;
- (void)clearWorkouts;
- (unsigned int)workoutsCount;
- (id)quantitySamplesAtIndex:(unsigned int)arg1;
- (void)clearQuantitySamples;
- (unsigned int)quantitySamplesCount;
- (id)categorySamplesAtIndex:(unsigned int)arg1;
- (void)clearCategorySamples;
- (unsigned int)categorySamplesCount;
- (BOOL)isEquivalentToObjectCollection:(id)arg1;
- (void)addCorrelations:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (void)addQuantitySamples:(id)arg1;
- (void)addCategorySamples:(id)arg1;
- (void)addActivityCaches:(id)arg1;
@property(retain, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
- (id)decodedObjects;
@property(readonly, nonatomic) BOOL hasSource;
- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableSource *source; // @synthesize source=_source;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)count;

@end
