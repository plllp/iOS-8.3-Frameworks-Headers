//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSFormAutoFillFrame.h"

@class NSString, WebFrame;

@interface WBUFormAutoFillFrame : NSObject <WBSFormAutoFillFrame>
{
    WebFrame *_webFrame;
}

+ (id)autoFillFrameWithWebFrame:(id)arg1;
- (void)enumerateChildFramesUsingBlock:(CDUnknownBlockType)arg1;
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueFormAutoFillFrame *)frameRef;
- (id)initWithWebFrame:(id)arg1;
- (id)committedURL;
- (BOOL)containsAnyFormElements;
- (void).cxx_destruct;
@property(readonly, nonatomic) WebFrame *webFrame; // @synthesize webFrame=_webFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

