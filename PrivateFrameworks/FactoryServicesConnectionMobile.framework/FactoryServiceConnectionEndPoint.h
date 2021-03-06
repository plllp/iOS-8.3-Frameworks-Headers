//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FactoryServiceXPCInterfaceCommon.h"
#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCConnection, NSXPCListener;

@interface FactoryServiceConnectionEndPoint : NSObject <NSXPCListenerDelegate, FactoryServiceXPCInterfaceCommon>
{
    BOOL _isConnected;
    NSXPCConnection *_xpcConnection;
    id <FactoryServiceConnectionEndPointMessageHandlingProtocol> _delegate;
    NSString *_name;
    CDUnknownBlockType _connectionInterruptionHandler;
    CDUnknownBlockType _connectionInvalidationHandler;
    NSXPCListener *_Listener;
    NSString *_serviceName;
}

@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property BOOL isConnected; // @synthesize isConnected=_isConnected;
- (int)startServiceWithName:(id)arg1;
- (int)initConnectionWithService:(id)arg1;
@property(retain) NSXPCListener *Listener; // @synthesize Listener=_Listener;
@property(copy) CDUnknownBlockType connectionInvalidationHandler; // @synthesize connectionInvalidationHandler=_connectionInvalidationHandler;
@property(copy) CDUnknownBlockType connectionInterruptionHandler; // @synthesize connectionInterruptionHandler=_connectionInterruptionHandler;
- (void)sendMessageToConnectedEndPoint:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)handleMessageFromConnectedEndPoint:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void).cxx_destruct;
- (void)cleanUp;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) id <FactoryServiceConnectionEndPointMessageHandlingProtocol> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

