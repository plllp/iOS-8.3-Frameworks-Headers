//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATStatusObserverProtocol.h"

@class NSString, NSXPCConnection;

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol>
{
    BOOL _ATCRunning;
    BOOL _resumed;
    id <ATStatusObserverDelegate> _delegate;
    NSXPCConnection *_connection;
    int _notifyToken;
}

@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(nonatomic) BOOL resumed; // @synthesize resumed=_resumed;
@property(nonatomic) BOOL ATCRunning; // @synthesize ATCRunning=_ATCRunning;
- (void)fetchAllStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithStatus:(id)arg1;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
@property(nonatomic) __weak id <ATStatusObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

