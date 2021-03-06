//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCompanionXPCManagerObserver.h"
#import "SFRemoteHotspotClient.h"

@class NSString;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>
{
    BOOL _browsing;
    id <SFRemoteHotspotSessionDelegate> _delegate;
    id <SFRemoteHotspotProtocol> _connectionProxy;
}

- (void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)xpcManagerConnectionInterrupted;
- (void)updatedFoundDeviceList:(id)arg1;
- (void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain) id <SFRemoteHotspotProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property BOOL browsing; // @synthesize browsing=_browsing;
- (void)startBrowsing;
- (void)stopBrowsing;
@property id <SFRemoteHotspotSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

