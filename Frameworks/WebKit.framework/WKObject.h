//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString;

@interface WKObject : NSObject <WKObject>
{
    BOOL _hasInitializedTarget;
    NSObject *_target;
}

- (id)_web_createTarget;
@property(readonly) struct Object *_apiObject;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (Class)classForCoder;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (Class)classForKeyedArchiver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
