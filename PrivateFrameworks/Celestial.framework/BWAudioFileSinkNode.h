//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWFileSinkNode.h>

@class FigCaptureAudioFileRecordingSettings, FigStateMachine, NSObject<OS_dispatch_queue>;

@interface BWAudioFileSinkNode : BWFileSinkNode
{
    FigStateMachine *_stateMachine;
    struct OpaqueFigFormatWriter *_formatWriter;
    struct OpaqueCMByteStream *_byteStream;
    int _trackID;
    BOOL _didBeginFileWriterSession;
    char *_parentPath;
    FigCaptureAudioFileRecordingSettings *_settings;
    CDStruct_1b6d18a9 _curFileDuration;
    unsigned long long _curFileSize;
    unsigned long long _adjustedMinFreeDiskSpace;
    NSObject<OS_dispatch_queue> *_propertySyncQueue;
}

+ (void)initialize;
- (unsigned long long)lastFileSize;
- (CDStruct_1b6d18a9)lastFileDuration;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (long)_teardownFileWriter;
- (void)_setupMinFreeDiskSpace;
- (long)_setupFileWriter;
- (void)_updateFilePropertiesForSbuf:(struct opaqueCMSampleBuffer *)arg1;
- (long)_applyRecordingLimits;
- (long)_handleMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)_stopRecordingWithError:(long)arg1;
- (void)_setupStateMachine;
- (id)init;
- (void)dealloc;

@end
