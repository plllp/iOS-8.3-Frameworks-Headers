//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject
{
    CDUnknownBlockType _defaultHandler;
    struct __CFRunLoopSource *_serverRunLoopSource;
    struct __CFRunLoopSource *_clientInvalidationSource;
    unsigned int _serverPort;
    unsigned int _clientInvalidationPort;
    NSMutableDictionary *_validSecurityTokens;
    NSMutableSet *_connectedClients;
    CDUnknownBlockType _clientInvalidationHandler;
    NSMutableDictionary *_entitlements;
    unsigned int _assignedServerPort;
    BOOL _running;
    BOOL _perPidService;
    NSString *_serviceName;
    NSMutableDictionary *_handlers;
}

@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)_handleIncomingMessage:(id)arg1 securityToken:(CDStruct_52eb0d21)arg2 auditToken:(CDStruct_4c969caf)arg3 clientPort:(unsigned int)arg4;
- (void)_handleClientInvalidation:(unsigned int)arg1;
- (void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4;
- (void)setHandler:(CDUnknownBlockType)arg1 forKey:(int)arg2;
@property(copy, nonatomic) CDUnknownBlockType clientInvalidationCallback;
- (void)setServiceRunLoopSource:(struct __CFRunLoopSource *)arg1;
@property(copy, nonatomic) CDUnknownBlockType defaultHandler;
- (void)_handleClientRegistration:(id)arg1;
- (BOOL)_clientWithPort:(unsigned int)arg1 auditToken:(CDStruct_4c969caf)arg2 hasAnyEntitlementRequiredForMessage:(id)arg3;
@property(nonatomic) BOOL perPidService; // @synthesize perPidService=_perPidService;
- (id)_clientIdentificationForAuditToken:(CDStruct_4c969caf)arg1;
- (void)removeHandlerForKey:(int)arg1;
- (BOOL)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (void)_startServerThread;
- (id)initWithServiceName:(id)arg1 perPidService:(BOOL)arg2;
- (BOOL)startServerWithError:(id *)arg1;
- (id)initWithPort:(unsigned int)arg1 serviceRunLoopSource:(struct __CFRunLoopSource *)arg2;
- (BOOL)stopServerWithError:(id *)arg1;
- (void)removeAllHandlersForTarget:(id)arg1;
- (void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3;
- (id)description;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int machPort; // @synthesize machPort=_serverPort;

@end
