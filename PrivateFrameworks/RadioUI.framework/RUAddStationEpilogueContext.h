//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVItem, RadioStation;

@interface RUAddStationEpilogueContext : NSObject
{
    BOOL _shouldKeepPlayingCurrentItem;
    BOOL _shouldBeginPlayback;
    RadioStation *_addedStation;
    MPAVItem *_prefixItem;
}

@property(nonatomic) BOOL shouldBeginPlayback; // @synthesize shouldBeginPlayback=_shouldBeginPlayback;
@property(retain, nonatomic) MPAVItem *prefixItem; // @synthesize prefixItem=_prefixItem;
@property(nonatomic) BOOL shouldKeepPlayingCurrentItem; // @synthesize shouldKeepPlayingCurrentItem=_shouldKeepPlayingCurrentItem;
@property(readonly, nonatomic) RadioStation *addedStation; // @synthesize addedStation=_addedStation;
- (id)initWithAddedStation:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
