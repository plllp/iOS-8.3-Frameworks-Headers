//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogCore/PLTimeReference.h>

@class NSDate, NSMutableArray, NSMutableDictionary;

@interface PLTimeReferenceDynamic : PLTimeReference
{
    NSMutableDictionary *_timeChangeBlocks;
    NSDate *_lastQueryTime;
    NSMutableArray *_offsetHistory;
    double _tooFarInFutureDistance;
    double _tooFarInPastDistance;
    double _accumulatedError;
}

+ (double)nearestDistanceFromDate:(id)arg1 toRegionWithStartDate:(id)arg2 andEndDate:(id)arg3;
@property(retain) NSMutableDictionary *timeChangeBlocks; // @synthesize timeChangeBlocks=_timeChangeBlocks;
@property(retain) NSDate *lastQueryTime; // @synthesize lastQueryTime=_lastQueryTime;
- (BOOL)shouldQueryCurrentTime;
@property double tooFarInPastDistance; // @synthesize tooFarInPastDistance=_tooFarInPastDistance;
@property double tooFarInFutureDistance; // @synthesize tooFarInFutureDistance=_tooFarInFutureDistance;
@property(retain) NSMutableArray *offsetHistory; // @synthesize offsetHistory=_offsetHistory;
- (void)notifyTimeChange:(double)arg1;
- (void)cleanupOffsetHistory;
@property double accumulatedError; // @synthesize accumulatedError=_accumulatedError;
- (id)newOffsetEntry;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (void)initializeOffsetWithEntry:(id)arg1;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)registerForTimeChangedNotification;
- (void)checkForTimeChangeWithCurrentTime:(id)arg1;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(int)arg3;
- (void).cxx_destruct;
- (void)setOffset:(double)arg1;

@end

