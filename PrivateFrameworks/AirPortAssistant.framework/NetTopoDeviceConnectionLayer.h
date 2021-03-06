//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AirPortAssistant/NetTopoObjectLayer.h>

@class CAShapeLayer;

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer
{
    CAShapeLayer *_connectionLineLayer;
    struct CGPath *_hitTestPath;
    struct CGColor *_lineColorActive;
    struct CGColor *_lineColorInactive;
    struct CGColor *_lineColorEthernet;
    struct CGColor *_lineColorWiFi;
    struct CGColor *_selectedLineColor;
    struct CGColor *_clearColor;
    struct CGColor *_whiteColor;
    unsigned int _upstreamDeviceSpatialRelationship;
    unsigned int _connectionStyle;
    struct CGPoint _upstreamConnectionPoint;
    struct CGPoint _downstreamConnectionPoint;
    unsigned int _upstreamConnectionSide;
    struct CGPoint _siblingMergePoint;
    unsigned int _connectionMediumFallback;
    struct CGPath *_arrowhead;
}

@property(readonly, nonatomic) struct CGPath *hitTestPath; // @synthesize hitTestPath=_hitTestPath;
@property(nonatomic) unsigned int connectionMediumFallback; // @synthesize connectionMediumFallback=_connectionMediumFallback;
@property(nonatomic) struct CGPoint siblingMergePoint;
@property(nonatomic) struct CGPoint upstreamConnectionPoint;
@property(nonatomic) struct CGPoint downstreamConnectionPoint;
- (struct CGPath *)newConnectionPathWithOffset:(float)arg1;
- (void)addCurvedArrowConnectionToPath:(struct CGPath *)arg1 withOffset:(float)arg2;
- (void)addSideWindingConnectionToPath:(struct CGPath *)arg1 withOffset:(float)arg2;
@property(nonatomic) unsigned int connectionStyle; // @synthesize connectionStyle=_connectionStyle;
- (void)addBottomWindingConnectionToPath:(struct CGPath *)arg1 withOffset:(float)arg2;
@property(nonatomic) unsigned int upstreamConnectionSide; // @synthesize upstreamConnectionSide=_upstreamConnectionSide;
@property(readonly, nonatomic) unsigned int connectionMedium;
@property(nonatomic) unsigned int upstreamDeviceSpatialRelationship; // @synthesize upstreamDeviceSpatialRelationship=_upstreamDeviceSpatialRelationship;
- (void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;
- (struct CGRect)getUserInteractionBounds;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned int)arg3;
- (void)layoutSublayers;
- (void)setSelected:(BOOL)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)debugDescription;
- (void)setNeedsDisplay;
- (void)dealloc;

@end

