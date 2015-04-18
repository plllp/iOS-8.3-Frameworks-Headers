//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface OADColor : NSObject <NSCopying>
{
    NSMutableArray *mTransforms;
}

+ (float)alphaWithColor:(id)arg1;
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;
+ (id)tsuColorWithRgbColor:(id)arg1;
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
- (void)addTransformOfType:(int)arg1 value:(float)arg2;
- (void)addTransformOfType:(int)arg1;
- (void)setTransforms:(id)arg1;
- (id)colorForStyleColor:(id)arg1;
- (void)addTransform:(id)arg1;
- (id)transforms;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
