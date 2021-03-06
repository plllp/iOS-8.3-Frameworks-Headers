//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWSinkNode.h>

@class NSDictionary;

@interface BWRemoteQueueSinkNode : BWSinkNode
{
    BOOL _mediaTypeIsVideo;
    struct remoteQueueSenderOpaque *_remoteQueueSender;
    struct shmemPoolOpaque *_sharedMemoryPool;
    id <BWRemoteQueueSinkNodeDelegate> _delegate;
    int _clientVideoRetainedBufferCount;
    BOOL _discardsLateSampleBuffers;
    BOOL _attachPanoramaMetadata;
    BOOL _sentDiagnosticMetadata;
    NSDictionary *_videoColorInfo;
    struct opaqueCMFormatDescription *_cachedVideoFormatDescription;
    CDStruct_1b6d18a9 _lastPTS;
}

+ (void)initialize;
- (void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(struct opaqueCMSampleBuffer *)arg1;
- (id)videoColorInfo;
- (BOOL)attachPanoramaMetadata;
- (BOOL)discardsLateSampleBuffers;
- (int)clientVideoRetainedBufferCount;
- (void)_handlePeerTerminated;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)setAttachPanoramaMetadata:(BOOL)arg1;
- (void)setClientVideoRetainedBufferCount:(int)arg1;
- (void)setDiscardsLateSampleBuffers:(BOOL)arg1;
- (void)setVideoColorInfo:(id)arg1;
- (id)initWithMediaType:(unsigned long)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
@property(nonatomic) id <BWRemoteQueueSinkNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

