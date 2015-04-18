//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCServiceListenerDelegate.h"

@class NSString, XPCServiceListener;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate>
{
    XPCServiceListener *_serviceListener;
    id <XPCNSServiceListenerDelegate> _delegate;
}

- (void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
- (BOOL)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void).cxx_destruct;
- (void)start;
@property(readonly, nonatomic) id <XPCNSServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
