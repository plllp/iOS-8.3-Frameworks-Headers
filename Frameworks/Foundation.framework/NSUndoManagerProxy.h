//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy
{
    NSUndoManager *_manager;
    Class _targetClass;
}

- (oneway void)release;
- (void)forwardInvocation:(id)arg1;
- (BOOL)_tryRetain;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)retain;
- (void)superRelease;
- (id)initWithManager:(id)arg1 targetClass:(Class)arg2;

@end

