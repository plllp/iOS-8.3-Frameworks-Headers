//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class BLTPBProtobufSequenceNumberManager, IDSDevice, IDSService, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_idsSendIDToCompletionHandler;
    NSMutableDictionary *_idsSendIDToResponseHandler;
    BOOL _full;
    NSObject<OS_dispatch_queue> *_idsQueue;
    IDSDevice *_defaultPairedDevice;
    NSMutableDictionary *_idsRequestMessageTypeToSelector;
    NSLock *_sequenceNumberSendLock;
    NSObject<OS_dispatch_queue> *_clientQueue;
    IDSService *_service;
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;
}

- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (unsigned int)connectionStatus;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2;
- (void)saveHasSentUDID;
- (_Bool)hasSentUDID;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7 andResponse:(CDUnknownBlockType)arg8;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(CDUnknownBlockType)arg5;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) IDSDevice *defaultPairedDevice;
- (void)handleIncomingMessage:(id)arg1;
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(int)arg3;
- (void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7 andResponse:(CDUnknownBlockType)arg8;
@property(readonly, nonatomic) BLTPBProtobufSequenceNumberManager *sequenceNumberManager; // @synthesize sequenceNumberManager=_sequenceNumberManager;
- (void)registerProtobufHandlers;
- (void)handleAckInitialSequenceNumberRequest:(id)arg1;
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2 andClientQueue:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

