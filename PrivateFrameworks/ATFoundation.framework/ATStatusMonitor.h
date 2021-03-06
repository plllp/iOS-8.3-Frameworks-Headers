//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface ATStatusMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSHashTable *_statusObservers;
    NSMapTable *_observerDataClasses;
    NSMutableSet *_statuses;
    NSMutableDictionary *_statusDictionary;
}

+ (id)sharedMonitor;
- (void)updateStatusValuesWithDictionary:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)updateStatusWithValue:(id)arg1 forKey:(id)arg2;
- (void)setDataClasses:(id)arg1 forObserver:(id)arg2;
- (void)updateAssets:(id)arg1;
- (id)allStatus;
- (void)addObserver:(id)arg1;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (id)init;

@end

