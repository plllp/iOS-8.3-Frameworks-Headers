//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVController : NSObject
{
    struct AVControllerPrivate *_priv;
}

+ (id)avControllerWithQueue:(id)arg1 error:(id *)arg2;
+ (id)avController;
+ (BOOL)isSupportedFileExtension:(id)arg1;
+ (BOOL)isSupportedMimeType:(id)arg1;
+ (void)setEnableNetworkMode:(BOOL)arg1;
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3;
+ (id)compatibleAudioRouteForRoute:(id)arg1;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
- (BOOL)play:(id *)arg1;
- (double)currentTime;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)initWithError:(id *)arg1;
- (BOOL)muted;
- (id)attributeForKey:(id)arg1;
- (float)rate;
- (int)eqPreset;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void)figPlayerNotificationHandler:(id)arg1;
- (void)dequeueDeadItem;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (struct OpaqueFigPlaybackItem *)createItemWithURL:(id)arg1 flags:(unsigned long)arg2 error:(int *)arg3;
- (double)bookmarkTimeForAVItem:(id)arg1;
- (id)bookmarkGroupIDForAVItem:(id)arg1;
- (void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2;
- (void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4;
- (void)cancelAllCGImageRequests;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3;
- (struct OpaqueFigVisualContext *)visualContext;
- (void)endInterruptionWithStatus:(id)arg1;
- (BOOL)canBeginInterruption;
- (BOOL)beginInterruption:(id *)arg1;
- (BOOL)resumePlayback:(double)arg1 error:(id *)arg2;
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned int)arg1 error:(id *)arg2;
- (unsigned int)indexOfCurrentQueueFeederItem;
- (BOOL)havePlayedCurrentItem;
- (void)setQueueFeeder:(id)arg1;
- (long)copyImageForTime:(struct __CVBuffer **)arg1 time:(const CDStruct_1b6d18a9 *)arg2;
- (BOOL)isNewImageAvailableForTime:(const CDStruct_1b6d18a9 *)arg1 willNeverBeAvailable:(char *)arg2;
- (struct AVControllerPrivate *)privateStorage;
- (id)initForStreaming;
- (void)setAVItemClass:(Class)arg1;
- (void)safeSubtitleCommandPosted:(void *)arg1;
- (void)fmpEffectiveVolumeDidChange;
- (BOOL)beginRepeatGap;
- (void)itemHasFinishedPlayingNotification:(id)arg1;
- (void)fpItemNotification:(id)arg1 sender:(id)arg2;
- (void)currentItemHasChanged:(id)arg1;
- (void)rateDidChangeToRate:(float)arg1;
- (void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2;
- (void)logPerformanceDataForCurrentItem;
- (id)outputQTESFilePath;
- (void)ensurePlaybackQueueImmed;
- (void)removeObserver:(id)arg1 fromTMOArray:(id)arg2;
- (void)updateTimeMarkerObservations;
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1;
- (void)scheduleQueueSpaceCheck;
- (void)scheduleUpdateTimeMarkerObservations;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(int)arg3 withImageOptions:(id)arg4;
- (void)setApplyVideoTrackMatrix;
- (void)setSubtitleRecipient:(id)arg1;
- (void)setShouldDisplayClosedCaptions:(BOOL)arg1;
- (void)setOutputQTESFilePath:(id)arg1;
- (long)updateActionAtEnd;
- (void)setVisualContext:(struct OpaqueFigVisualContext *)arg1;
- (BOOL)shouldDisplayClosedCaptions;
- (id)lkLayer;
- (id)errorWithDescription:(id)arg1 code:(long)arg2;
- (BOOL)shouldBeginPlayingItem:(id)arg1 error:(id *)arg2;
- (void)cancelContinueAfterRepeatGap;
- (struct OpaqueFigPlaybackItem *)currentFPItem;
- (void)dequeueFirstItem;
- (BOOL)setRate:(float)arg1 error:(id *)arg2;
- (void)continueAfterRepeatGap;
- (void)applyDesiredRepeatMode;
- (void)setQueueFeeder:(id)arg1 withIndex:(int)arg2;
- (void)feederInvalidatedWithCurrentItemMoved:(id)arg1;
- (void)feederRangeWasRemoved:(id)arg1;
- (void)feederRangeWasInserted:(id)arg1;
- (BOOL)playNextItem:(id *)arg1;
- (id)queueFeeder;
- (id)addNextFeederItemToQueue;
- (void)checkQueueSpace;
- (id)_figPlayerNotifications;
- (id)initWithQueue:(id)arg1 fmpType:(unsigned int)arg2 error:(id *)arg3;
- (void)setVibrationEnabled:(BOOL)arg1;
- (BOOL)vibrationEnabled;
- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)activate:(id *)arg1;
- (BOOL)okToNotifyFromThisThread;
- (struct CGImage *)grabCGImageAtTime:(double)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3 actualTime:(double *)arg4;
- (void)makeCurrentItemReady;
- (id)initWithQueue:(id)arg1 error:(id *)arg2;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)pause;
- (id)currentItem;
- (void)setLayer:(id)arg1;
- (BOOL)isValid;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setCurrentTime:(double)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setEQPreset:(int)arg1;
- (BOOL)isCurrentItemReady;
- (void)seekToDate:(id)arg1;
- (void)setCurrentTime:(double)arg1 options:(int)arg2;
- (BOOL)setRepeatMode:(int)arg1;
- (int)repeatMode;
- (void)stepByCount:(int)arg1;
- (void)setVibrationPattern:(id)arg1;
- (id)vibrationPattern;

@end
