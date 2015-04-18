//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface CAMTimelapseMovieWriter : NSObject
{
    NSArray *__frameFilePaths;
    int __nextReadFileIndex;
    int __residentImageDataCount;
    int __residentPixelBufferCount;
    NSMutableDictionary *__availableImageData;
    NSMutableDictionary *__availablePixelBuffers;
    NSMutableSet *__inFlightReadFrameIndexes;
    NSObject<OS_dispatch_queue> *__synchronizationQueue;
    NSOperationQueue *__imageReadQueue;
    NSOperationQueue *__imageDecodeQueue;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    AVAssetWriter *__writer;
    AVAssetWriterInput *__videoInput;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    int __framesPerSecond;
    int __nextWriteFileIndex;
    int __currentOutputFrameIndex;
    CDUnknownBlockType __completion;
}

@property(readonly, nonatomic) int _currentOutputFrameIndex; // @synthesize _currentOutputFrameIndex=__currentOutputFrameIndex;
@property(readonly, nonatomic) int _nextWriteFileIndex; // @synthesize _nextWriteFileIndex=__nextWriteFileIndex;
@property(readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor; // @synthesize _pixelBufferAdaptor=__pixelBufferAdaptor;
@property(readonly, nonatomic) AVAssetWriterInput *_videoInput; // @synthesize _videoInput=__videoInput;
@property(readonly, nonatomic) AVAssetWriter *_writer; // @synthesize _writer=__writer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue; // @synthesize _movieWritingQueue=__movieWritingQueue;
@property(readonly, nonatomic) NSOperationQueue *_imageDecodeQueue; // @synthesize _imageDecodeQueue=__imageDecodeQueue;
@property(readonly, nonatomic) NSOperationQueue *_imageReadQueue; // @synthesize _imageReadQueue=__imageReadQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_synchronizationQueue; // @synthesize _synchronizationQueue=__synchronizationQueue;
@property(readonly, nonatomic) NSMutableSet *_inFlightReadFrameIndexes; // @synthesize _inFlightReadFrameIndexes=__inFlightReadFrameIndexes;
@property(readonly, nonatomic) NSMutableDictionary *_availablePixelBuffers; // @synthesize _availablePixelBuffers=__availablePixelBuffers;
@property(readonly, nonatomic) NSMutableDictionary *_availableImageData; // @synthesize _availableImageData=__availableImageData;
@property(readonly, nonatomic) int _residentPixelBufferCount; // @synthesize _residentPixelBufferCount=__residentPixelBufferCount;
@property(readonly, nonatomic) int _residentImageDataCount; // @synthesize _residentImageDataCount=__residentImageDataCount;
@property(readonly, nonatomic) int _nextReadFileIndex; // @synthesize _nextReadFileIndex=__nextReadFileIndex;
@property(readonly, nonatomic) NSArray *_frameFilePaths; // @synthesize _frameFilePaths=__frameFilePaths;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (void)_finishMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_enqueueNextWrite;
- (void)_enqueueNextDecode;
- (void)_enqueueNextRead;
- (BOOL)_startWritingWithOutputPath:(id)arg1 width:(int)arg2 height:(int)arg3 videoFormatDescription:(struct opaqueCMFormatDescription *)arg4 transform:(struct CGAffineTransform)arg5 framesPerSecond:(int)arg6 frameCount:(int)arg7 videoMetadata:(id)arg8;
- (struct CGSize)_desiredOutputSizeForFrameSize:(struct CGSize)arg1;
- (void)writeMovieFromFiles:(id)arg1 startDate:(id)arg2 location:(id)arg3 outputPath:(id)arg4 transform:(struct CGAffineTransform)arg5 framesPerSecond:(int)arg6 completionHandler:(CDUnknownBlockType)arg7;
@property(readonly, copy, nonatomic) CDUnknownBlockType _completion; // @synthesize _completion=__completion;
@property(readonly, nonatomic) int _framesPerSecond; // @synthesize _framesPerSecond=__framesPerSecond;
- (void).cxx_destruct;
- (void)_reset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end
