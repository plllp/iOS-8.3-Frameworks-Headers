//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "TUCallServicesProxyCallActions.h"

@class NSString;

@protocol TUCallServicesDaemonDelegate <NSObject, TUCallServicesProxyCallActions>
- (void)setRelayCallingEnabled:(BOOL)arg1;
- (void)callModelState:(void (^)(TUCallModelState *))arg1;
- (void)currentCalls:(void (^)(NSArray *))arg1;
- (void)requestHandoffForAllCalls;
- (void)setShouldSuppressRingtone:(BOOL)arg1 forCallWithCallUUID:(NSString *)arg2;
- (void)setDisconnectedReason:(int)arg1 forCallWithCallUUID:(NSString *)arg2;
- (void)setEndpointOnCurrentDevice:(BOOL)arg1 forCallWithCallUUID:(NSString *)arg2;
- (void)setWantsHoldMusic:(BOOL)arg1 forCallWithCallUUID:(NSString *)arg2;
- (void)callStateForCallWithCallUUID:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)requestPendingCallNotifications:(void (^)(void))arg1;
- (void)handleNewHostedCallUUID:(NSString *)arg1 reply:(void (^)(void))arg2;
@end

