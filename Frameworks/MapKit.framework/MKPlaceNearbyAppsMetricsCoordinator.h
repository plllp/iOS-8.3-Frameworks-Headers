//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SSMetricsController, SSURLBag;

@interface MKPlaceNearbyAppsMetricsCoordinator : NSObject
{
    SSMetricsController *_metricsController;
    BOOL _controllerReady;
    NSMutableArray *_callbacks;
    SSURLBag *_urlBag;
    NSString *_pageContext;
    NSString *_topic;
}

@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)setPageConfiguration:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
@property(nonatomic) BOOL controllerReady; // @synthesize controllerReady=_controllerReady;
- (void)getMetricsControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performCallbacks;
@property(readonly, nonatomic) SSURLBag *urlBag; // @synthesize urlBag=_urlBag;
- (id)initWithConfigurationIdentifier:(id)arg1;

@end
