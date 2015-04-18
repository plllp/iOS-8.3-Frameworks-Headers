//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewInternalDelegate.h"
#import "ADInterstitialAdDelegate.h"

@class ADBannerView, ADInterstitialAd, NSData, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate>
{
    BOOL _visuallyEngaged;
    BOOL _enabled;
    BOOL _canAutoEnable;
    BOOL _sharedInterstitialAdIsInUse;
    BOOL _sharedMediaPlayerVideoAdClaimed;
    NSObject<OS_dispatch_queue> *_policyEngineQueue;
    NSMutableArray *_queuedCommands;
    NSData *_heartbeatToken;
    NSError *_heartbeatTokenError;
    ADInterstitialAd *_sharedInterstitialAd;
    NSString *_sharedInterstitialSection;
    NSURL *_sharedInterstitialServerURL;
    NSString *_sharedInterstitialAuthenticationUserName;
    ADBannerView *_sharedMediaPlayerVideoAd;
    NSError *_lastSharedMediaPlayerVideoAdError;
    NSData *_currentStationData;
    NSData *_currentSongData;
    double _nextInterstitialPresentationTime;
    double _nextPrerollPlaybackTime;
    double _heartbeatTokenExpiration;
}

+ (id)sharedEngine;
- (void)reportStationTileImpression:(id)arg1;
@property(nonatomic) BOOL visuallyEngaged; // @synthesize visuallyEngaged=_visuallyEngaged;
- (void)acquireMatchSlotWithBodyParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didEnterStation:(id)arg1;
- (id)heartbeatToken:(id *)arg1;
- (void)disablePolicyEngine;
- (void)enablePolicyEngine;
- (void)reportClientEvent:(id)arg1;
- (void)didStopPlaybackOnStation:(id)arg1;
- (void)optimalTransmissionWindowDidOpen;
- (void)didBeginPlaybackOnStation:(id)arg1 song:(id)arg2;
- (void)requestAdsForSlot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
@property(retain, nonatomic) NSData *currentSongData; // @synthesize currentSongData=_currentSongData;
@property(retain, nonatomic) NSData *currentStationData; // @synthesize currentStationData=_currentStationData;
@property(retain, nonatomic) ADInterstitialAd *sharedInterstitialAd; // @synthesize sharedInterstitialAd=_sharedInterstitialAd;
@property(nonatomic) BOOL canAutoEnable; // @synthesize canAutoEnable=_canAutoEnable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *policyEngineQueue; // @synthesize policyEngineQueue=_policyEngineQueue;
@property(nonatomic) double nextPrerollPlaybackTime; // @synthesize nextPrerollPlaybackTime=_nextPrerollPlaybackTime;
- (void)reportListeningPresenceEvent:(int)arg1;
- (void)songSkipped;
- (void)songStopped;
- (void)songBeganWithTags:(id)arg1;
- (void)stationChanged:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setStationData:(id)arg1 withInitialTrackBlobs:(id)arg2;
- (void)relinquishSharedMediaPlayerVideoAd;
- (BOOL)claimSharedMediaPlayerVideoAdWithError:(id *)arg1;
- (BOOL)canPresentSharedInterstitialAdWithResultMessage:(id *)arg1;
@property(copy, nonatomic) NSString *sharedInterstitialAuthenticationUserName; // @synthesize sharedInterstitialAuthenticationUserName=_sharedInterstitialAuthenticationUserName;
@property(copy, nonatomic) NSURL *sharedInterstitialServerURL; // @synthesize sharedInterstitialServerURL=_sharedInterstitialServerURL;
@property(copy, nonatomic) NSString *sharedInterstitialSection; // @synthesize sharedInterstitialSection=_sharedInterstitialSection;
- (void)removeRecordForAccountWithIdentifier:(id)arg1;
- (void)acquireMatchSlotWithUserConfirmation:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)songBeganWithTags:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sharedMediaPlayerVideoAdActionDidFinish;
- (void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1;
- (void)sharedMediaPlayerVideoAdDidLoad;
- (void)sharedMediaPlayerVideoAdWillLoad;
@property(retain, nonatomic) NSError *lastSharedMediaPlayerVideoAdError; // @synthesize lastSharedMediaPlayerVideoAdError=_lastSharedMediaPlayerVideoAdError;
@property(nonatomic) BOOL sharedMediaPlayerVideoAdClaimed; // @synthesize sharedMediaPlayerVideoAdClaimed=_sharedMediaPlayerVideoAdClaimed;
@property(retain, nonatomic) ADBannerView *sharedMediaPlayerVideoAd; // @synthesize sharedMediaPlayerVideoAd=_sharedMediaPlayerVideoAd;
@property(nonatomic) BOOL sharedInterstitialAdIsInUse; // @synthesize sharedInterstitialAdIsInUse=_sharedInterstitialAdIsInUse;
@property(nonatomic) double nextInterstitialPresentationTime; // @synthesize nextInterstitialPresentationTime=_nextInterstitialPresentationTime;
- (void)_performWhenAdSheetConnectionEstablished:(CDUnknownBlockType)arg1;
@property(nonatomic) double heartbeatTokenExpiration; // @synthesize heartbeatTokenExpiration=_heartbeatTokenExpiration;
@property(retain, nonatomic) NSData *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
@property(retain, nonatomic) NSError *heartbeatTokenError; // @synthesize heartbeatTokenError=_heartbeatTokenError;
@property(readonly, nonatomic) NSMutableArray *queuedCommands; // @synthesize queuedCommands=_queuedCommands;
- (void)_enablePolicyEngineWithReason:(id)arg1;
- (void)_adSheetConnectionBootstrapped;
- (void)finishedPresentingSharedInterstitialAd;
- (void)adSheetDidIdleDisablePolicyEngine;
- (void)setHeartbeatToken:(id)arg1 expirationDate:(double)arg2 error:(id)arg3;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
