//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterHelper.h>

@class AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper
{
    id <AVAssetWriterFinishWritingHelperDelegate> _delegate;
    struct OpaqueFigAssetWriter *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    AVWeakReference *_weakReferenceToSelf;
}

- (void)finalize;
- (int)status;
- (void)dealloc;
- (void)finishOperationCompletedSuccessfully:(BOOL)arg1 withError:(id)arg2;
- (void)performFinishOperation;
- (id)initWithConfigurationState:(id)arg1 figAssetWriter:(struct OpaqueFigAssetWriter *)arg2 delegate:(id)arg3;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (void)cancelWriting;

@end
