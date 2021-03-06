//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFParallaxSettings.h>

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings
{
    float _overhangX;
    float _overhangY;
    float _perspectiveTransform;
}

+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(float)arg1;
+ (struct CGSize)_requiredOverhangSizeForCurrentDevice;
+ (struct CGSize)overhangSizeForCurrentDevice;
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(float)arg1 portrait:(BOOL)arg2;
+ (id)settingsControllerModule;
@property float overhangY; // @synthesize overhangY=_overhangY;
@property float overhangX; // @synthesize overhangX=_overhangX;
@property float perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
- (void)setDefaultValues;

@end

