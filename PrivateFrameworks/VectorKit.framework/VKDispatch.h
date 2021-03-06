//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface VKDispatch : NSObject
{
    NSObject<OS_dispatch_queue> *_homeQueue;
    NSObject<OS_dispatch_queue> *_layoutQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
}

+ (id)textureManagerRootQueue;
+ (id)iconRenderQueue;
+ (id)tileDecodeStylingQueue;
+ (id)stylesheetLoadQueue;
+ (id)defaultDispatch;
+ (id)preemptiveLoadQueue;
+ (id)tileDecodeQueue;
- (id)_newRenderQueue:(const char *)arg1;
- (id)_newLayoutQueue:(const char *)arg1;
- (id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3;
- (id)initWithHomeQueue:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *homeQueue; // @synthesize homeQueue=_homeQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
- (id)description;
- (void)dealloc;

@end

