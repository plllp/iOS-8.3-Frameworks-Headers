//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapServiceTicket.h"

@class GEOMapRegion, GEOMapServiceTraits, NSArray, NSString;

@interface _GEOMUIDsTicket : NSObject <GEOMapServiceTicket>
{
    NSArray *_muids;
    int _resultProviderID;
    GEOMapServiceTraits *_traits;
    BOOL _includeETA;
    BOOL _canceled;
}

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(int)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(int)arg2 networkActivity:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

