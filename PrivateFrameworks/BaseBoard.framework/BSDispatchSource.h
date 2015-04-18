//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface BSDispatchSource : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _cancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)initWithType:(struct dispatch_source_type_s *)arg1 handle:(unsigned long)arg2 mask:(unsigned long)arg3 queue:(id)arg4 configureSourceBlock:(CDUnknownBlockType)arg5;
- (void)resume;
- (void)invalidate;
- (void)dealloc;

@end
