//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject
{
    NSMutableArray *_queuedInvocations;
    id <CKSMSCompose> _serviceViewControllerProxy;
}

@property(retain, nonatomic) NSMutableArray *queuedInvocations; // @synthesize queuedInvocations=_queuedInvocations;
@property(retain, nonatomic) id <CKSMSCompose> serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;

@end

