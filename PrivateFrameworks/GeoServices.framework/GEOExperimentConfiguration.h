//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOExperimentServerProxyDelegate.h"

@class GEOABExperimentResponse, NSLock, NSMutableArray, NSString;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate>
{
    id <GEOExperimentServerProxy> _serverProxy;
    GEOABExperimentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    NSMutableArray *_experimentObservers;
    NSLock *_experimentObserversLock;
}

+ (id)sharedConfiguration;
+ (void)setServerProxyClass:(Class)arg1;
- (void)removeExperimentObserver:(id)arg1;
- (void)addExperimentObserver:(id)arg1 queue:(id)arg2;
- (void)_debug_forEachExperimentType:(CDUnknownBlockType)arg1;
- (void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(int)arg2 dispatcherRequestType:(int)arg3;
- (id)_debug_customQuerySubstringForType:(int)arg1 dispatcherRequestType:(int)arg2;
- (id)_debug_defaultQuerySubstringForType:(int)arg1 dispatcherRequestType:(int)arg2;
- (id)_debug_configurationDate;
- (void)_debug_forceUpdate;
- (id)experimentAssignments;
- (id)experimentURLForURL:(id)arg1 type:(int)arg2 dispatcherRequestType:(int)arg3;
- (void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

