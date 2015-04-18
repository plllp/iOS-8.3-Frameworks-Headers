//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebGeolocationProviderInitializationListener.h"

@class NSString;

@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener>
{
    struct RefPtr<WebCore::Geolocation> m_geolocation;
}

- (void)initializationDeniedWebView:(id)arg1;
- (void)initializationAllowedWebView:(id)arg1;
- (id)initWithGeolocation:(struct Geolocation *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
