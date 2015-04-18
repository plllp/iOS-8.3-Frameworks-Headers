//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying>
{
    AVAsynchronousVideoCompositionRequestInternal *_internal;
}

- (void)finalize;
- (void)finishWithError:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finishCancelledRequest;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)sourceFrameByTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *sourceTrackIDs;
@property(readonly, nonatomic) CDStruct_1b6d18a9 compositionTime;
@property(readonly, nonatomic) AVVideoCompositionRenderContext *renderContext;
- (id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg3 atTime:(CDStruct_1b6d18a9)arg4 usingSources:(id)arg5 instruction:(id)arg6;
- (struct OpaqueFigVideoCompositorFrame *)compositionFrame;
- (void)_willDeallocOrFinalize;
@property(readonly, nonatomic) id <AVVideoCompositionInstruction> videoCompositionInstruction;

@end
