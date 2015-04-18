//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FUChartDataGroup, NSArray;

@protocol FUChartDataGroupDataSource <NSObject>
- (id <FUChartPoint>)dataGroup:(FUChartDataGroup *)arg1 pointForSetAtIndex:(unsigned int)arg2 pointIndex:(unsigned int)arg3;
- (unsigned int)dataGroup:(FUChartDataGroup *)arg1 numberOfPointsInSetAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfDataSetsInGroup:(FUChartDataGroup *)arg1;

@optional
- (NSArray *)dataGroup:(FUChartDataGroup *)arg1 labelsForSetAtIndex:(unsigned int)arg2;
- (NSArray *)dataGroup:(FUChartDataGroup *)arg1 dataPointsForSetAtIndex:(unsigned int)arg2;
@end
