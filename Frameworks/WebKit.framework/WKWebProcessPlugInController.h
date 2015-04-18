//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString, WKConnection;

@interface WKWebProcessPlugInController : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundle> _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn>> _principalClassInstance;
}

@property(readonly) id parameters;
@property(readonly) struct OpaqueWKBundle *_bundleRef;
- (void)_setPrincipalClassInstance:(id)arg1;
@property(readonly) struct Object *_apiObject;
@property(readonly) WKConnection *connection;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
