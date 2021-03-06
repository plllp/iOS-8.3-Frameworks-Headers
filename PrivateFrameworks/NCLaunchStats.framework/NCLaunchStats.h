//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDAttribute, CDBudget, CDDHistoryWindow, CDSession, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, PCPersistentTimer;

@interface NCLaunchStats : NSObject
{
    NSObject<OS_dispatch_queue> *ncLaunchStatsQueue;
    CDSession *sessionDuet;
    CDDHistoryWindow *allTimeWindow;
    CDBudget *dataBudget;
    CDBudget *energyBudget;
    CDAttribute *bundleAttr;
    CDAttribute *userEventAttr;
    NSMutableDictionary *seqTracker;
    CDUnknownBlockType recommendHandler;
    CDUnknownBlockType asyncRecommendHandler;
    NSDate *lastTriggerTime;
    NSDate *fireWakeupDate;
    NSDate *startDate;
    NSDate *forecastStartDate;
    NSArray *activitySlots;
    int timeZoneSecondsFromGMT;
    NSMutableArray *fireDates;
    PCPersistentTimer *pcpTimer;
    int classCLockedToken;
    _Bool isClassCLocked;
    _Bool backgroundAppRefreshSwitchedOn;
    _Bool kEnableSyslog;
    unsigned int kTimeGuardBand;
}

- (void)complete:(id)arg1;
- (void)startEvent:(id)arg1;
- (void)setNCLaunchRecommendationHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateBARSwitch;
- (BOOL)isForecasted:(id)arg1;
- (void)ncTriggerObserver:(id)arg1;
- (BOOL)slotIsPredictedForLaunch:(unsigned int)arg1;
- (void)addSlotToForecastList:(unsigned int)arg1;
- (void)computeFireDateQueue;
- (void)setNCLaunchRecommendationHandler:(CDUnknownBlockType)arg1;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)initAfterClassCUnlocked;
- (void)programTimer;
- (void)checkTimeZone;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)endEvent:(id)arg1;

@end

