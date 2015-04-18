//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CMNatalimeterInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    BOOL fStartedUpdates;
    BOOL fResendActivityOverrideOnInterrupt;
    int fActivityOverride;
    CDUnknownBlockType fHandler;
}

- (void)_teardown;
- (id)init;
- (void)dealloc;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_handleQueryResponse:(struct CLConnectionMessage *)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_getExecutablePathFromPid:(int)arg1;
- (void)_setSession:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_stopWatchdogCheckins;
- (void)_startWatchdogCheckins;

@end
