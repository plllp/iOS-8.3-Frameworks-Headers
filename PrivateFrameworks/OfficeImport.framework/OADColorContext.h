//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADColorMap, OADColorScheme;

@interface OADColorContext : NSObject
{
    OADColorScheme *mScheme;
    OADColorMap *mMap;
    id <OADColorPalette> mPalette;
}

+ (id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;
@property(readonly, nonatomic) OADColorMap *map; // @synthesize map=mMap;
- (id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3;
@property(readonly, nonatomic) id <OADColorPalette> palette; // @synthesize palette=mPalette;
@property(readonly, nonatomic) OADColorScheme *scheme; // @synthesize scheme=mScheme;
- (void)dealloc;

@end

