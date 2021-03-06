//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, PUMapAnnotationQuadtreeAddress;

@interface PUMapAnnotationQuadtree : NSObject
{
    PUMapAnnotationQuadtreeAddress *_address;
    PUMapAnnotationQuadtree *_00;
    PUMapAnnotationQuadtree *_01;
    PUMapAnnotationQuadtree *_10;
    PUMapAnnotationQuadtree *_11;
    id <MKAnnotation><NSCopying> _primaryAnnotation;
    id <MKAnnotation><NSCopying> _aggregateAnnotation;
    NSMutableArray *_leafAnnotations;
    int _aggregationCount;
    double _latitudeSum;
    double _longitudeSum;
    id <PUMapAnnotationQuadtreeDataSource> _dataSource;
}

+ (void)convertCoordinate:(CDStruct_c3b9c2ee)arg1 quantizedX:(unsigned int *)arg2 quantizedY:(unsigned int *)arg3;
+ (void)getMinCoordinate:(CDStruct_c3b9c2ee *)arg1 maxCoordinate:(CDStruct_c3b9c2ee *)arg2 forAddress:(id)arg3;
+ (unsigned int)treeLevelForLatitudeDelta:(double)arg1 longitudeDelta:(double)arg2;
- (void).cxx_destruct;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
@property(nonatomic) __weak id <PUMapAnnotationQuadtreeDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
- (void)_freeCachedMemory;
- (void)_collectLeafAnnotations:(id)arg1;
- (void)_contributeAnnotations:(id)arg1;
- (void)getMinCoordinate:(CDStruct_c3b9c2ee *)arg1 maxCoordinate:(CDStruct_c3b9c2ee *)arg2;
- (id)nextLevelForQuantizedX:(unsigned int)arg1 quantizedY:(unsigned int)arg2 createIfMissing:(BOOL)arg3;
- (BOOL)removeAnnotation:(id)arg1 withCoordinate:(CDStruct_c3b9c2ee)arg2 quantizedX:(unsigned int)arg3 quantizedY:(unsigned int)arg4;
- (void)addAnnotation:(id)arg1 withCoordinate:(CDStruct_c3b9c2ee)arg2 quantizedX:(unsigned int)arg3 quantizedY:(unsigned int)arg4;
- (void)collectAnnotations:(id)arg1 atTreeLevel:(unsigned int)arg2 minCoordinate:(CDStruct_c3b9c2ee)arg3 maxCoordinate:(CDStruct_c3b9c2ee)arg4 updateId:(int)arg5 referenceId:(int *)arg6;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (id)initWithTreeLevel:(unsigned int)arg1 quantizedX:(unsigned int)arg2 quantizedY:(unsigned int)arg3;

@end

