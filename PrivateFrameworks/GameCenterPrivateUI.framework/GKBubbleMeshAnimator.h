//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableSet;

@interface GKBubbleMeshAnimator : NSObject
{
    NSMutableSet *_animatingViews;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

+ (id)sharedAnimator;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSMutableSet *animatingViews; // @synthesize animatingViews=_animatingViews;
- (void)removeAnimatingBubbleView:(id)arg1;
- (void)addAnimatingBubbleView:(id)arg1;
- (void)update:(id)arg1;
@property(nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)init;
- (void)dealloc;

@end

