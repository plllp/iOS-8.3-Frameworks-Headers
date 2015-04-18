//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState
{
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
}

@property(readonly, nonatomic) MTLRenderPipelineReflection *reflection; // @synthesize reflection=_reflection;
- (id)getParameter:(id)arg1;
@property(readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end
