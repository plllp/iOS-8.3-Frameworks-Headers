//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAMetalDrawable.h"

@class CAMetalLayer, NSString;

@interface CAMetalDrawable : NSObject <CAMetalDrawable>
{
    CAMetalLayer *_layer;
    struct _CAMetalDrawablePrivate *_priv;
}

@property(readonly) id <MTLTexture> texture;
- (void)present;
@property(readonly) CAMetalLayer *layer;
- (void)dealloc;
- (struct _CAMetalDrawablePrivate *)priv;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate *)arg1 layer:(id)arg2;
- (void)presentAtTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

