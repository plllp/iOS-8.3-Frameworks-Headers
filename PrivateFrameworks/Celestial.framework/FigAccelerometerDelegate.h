//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSAccelerometerDelegate.h"

@class NSString, SBSAccelerometer;

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate>
{
    SBSAccelerometer *sbsaccel;
    struct _opaque_pthread_mutex_t ringMutex;
    int ringIndex;
    float ringX[64];
    float ringY[64];
    float ringZ[64];
    double ringTime[64];
}

- (void)getVectorX:(float *)arg1 y:(float *)arg2 z:(float *)arg3 forTimeStamp:(double)arg4;
- (void)deferOnRunloop_accelerometerEventsEnable;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
