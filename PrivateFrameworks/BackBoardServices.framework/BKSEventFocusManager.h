//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface BKSEventFocusManager : NSObject
{
    BOOL _needsFlush;
    BOOL _systemAppControlsFocusOnMainDisplay;
    NSMutableSet *_currentState;
    NSMutableDictionary *_pendingStatesByPriority;
}

+ (id)sharedInstance;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
@property(nonatomic) BOOL systemAppControlsFocusOnMainDisplay; // @synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay;
- (void)reallyFlushWithSet:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *pendingStatesByPriority; // @synthesize pendingStatesByPriority=_pendingStatesByPriority;
- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(CDUnknownBlockType)arg2;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
@property(nonatomic) BOOL needsFlush; // @synthesize needsFlush=_needsFlush;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
@property(readonly, nonatomic) NSMutableSet *currentState; // @synthesize currentState=_currentState;
- (void)flush;
- (id)description;
- (id)init;
- (void)dealloc;

@end
